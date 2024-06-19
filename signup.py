from cProfile import label
from distutils.util import execute
from logging import PlaceHolder
from tempfile import TemporaryDirectory
from tkinter import *
from tkinter import messagebox
import sqlite3
import tkinter
import edit
import delete
import show

#Window for password ceartion
def logs():
    profile.destroy()
    log=Toplevel()
    log.title("Logs")
    Label(log,text="Create ID").grid(row=0,colunspan=2)

    #creating text box
    usedID=Entry(log,width=30)
    usedID.grid(row=1,column=1)

def profile():
    profile=Tk()
    profile.title("Profile")

    Label(profile,text="Fill the following").grid(row=0,columnspan=2,pady=10)

    #defining function for submit btn
    def submit():
        #create or connect to a data base
        data=sqlite3.connect("profile.db")

        #creating a cursor
        cur=data.cursor()

        #recording the inputs to database
        cur.execute("INSERT INTO profile VALUES(:f_name,:l_name,:b_group,:sex,:contact,:door,:area,:dist,:pin,:u_id,:p_word)",
        {
            "f_name":f_name.get(),
            "l_name":l_name.get(),
            "b_group":blood_group.get(),
            "sex":sex.get(),
            "contact":contact_no.get(),
            "door":door.get(),
            "area":area.get(),
            "dist":district.get(),
            "pin":pincode.get(),
            "u_id":"0000",
            "p_word":"0000"
        })

        #deleting the text boxes
        f_name.delete(0,END),
        l_name.delete(0,END),
        blood_group.set(items[0]),
        sex.set(items1[0]),
        contact_no.delete(0,END),
        door.delete(0,END),
        area.delete(0,END),
        district.delete(0,END),
        pincode.delete(0,END)

        #message box
        tkinter.messagebox.showinfo("Status","Your Info have been Saved.")

        #commit changes
        data.commit()

        #close connection
        data.close()

        #calling function for log creatio page
        logs()
        

    #creating text boxes
    f_name=Entry(profile,width=30)
    f_name.grid(row=1,column=1,padx=20,pady=10)

    l_name=Entry(profile,width=30)
    l_name.grid(row=2,column=1,padx=20,pady=10)

    #creating drop down for blood group
    global items
    items=[
        "O+",
        "A+",
        "B+",
        "AB+",
        "O-",
        "A-",
        "B-",
        "AB-"
    ]
    blood_group=StringVar()
    blood_group.set(items[0])
    OptionMenu(profile,blood_group,*items).grid(row=3,column=1,padx=20,pady=10)
    
    #creating drop down for sex
    global items1
    items1=[
        "Male",
        "Female"
    ]
    sex=StringVar()
    sex.set(items[0])
    OptionMenu(profile,sex,*items1).grid(row=4,column=1,padx=20,pady=10)
    

    contact_no=Entry(profile,width=30)
    contact_no.grid(row=5,column=1,padx=20,pady=10)
    
    door=Entry(profile,width=30)
    door.grid(row=6,column=1,padx=20,pady=10)

    area=Entry(profile,width=30)
    area.grid(row=7,column=1,padx=20,pady=10)

    district=Entry(profile,width=30)
    district.grid(row=8,column=1,padx=20,pady=10)

    pincode=Entry(profile,width=30)
    pincode.grid(row=9,column=1,padx=20,pady=10)

    #creating label for text boxes
    f_name_label=Label(profile,text="First Name")
    f_name_label.grid(row=1,column=0,padx=20,pady=10)

    l_name_label=Label(profile,text="Last Name")
    l_name_label.grid(row=2,column=0,padx=20,pady=10)

    blood_group_label=Label(profile,text="Blood Group")
    blood_group_label.grid(row=3,column=0,padx=20,pady=10)

    sex_label=Label(profile,text="Sex")
    sex_label.grid(row=4,column=0,padx=20,pady=10)

    contact_no_label=Label(profile,text="Contact number")
    contact_no_label.grid(row=5,column=0,padx=20,pady=10)

    door_label=Label(profile,text="Door.No")
    door_label.grid(row=6,column=0,padx=20,pady=10)

    area_label=Label(profile,text="Area")
    area_label.grid(row=7,column=0,padx=20,pady=10)

    district_label=Label(profile,text="District")
    district_label.grid(row=8,column=0,padx=20,pady=10)

    pincode_label=Label(profile,text="PIN code")
    pincode_label.grid(row=9,column=0,padx=20,pady=10)

    #creating button to submit
    Button(profile,text="Submit Form",command=submit).grid(row=10,columnspan=2,padx=20,pady=10,ipadx=100)

    #creating button to show records
    Button(profile,text="Show Reords",command=show.show_det).grid(row=11,columnspan=2,padx=20,pady=10,ipadx=100)

    #creating button to open delete window
    Button(profile,text="Delete Reords",command=lambda: delete.det_win()).grid(row=12,column=1,padx=2,pady=10,ipadx=30)

    #creating a buttom to edit
    Button(profile,text="Edit Reords",command=edit.edit_drop).grid(row=12,column=0,padx=20,pady=10,ipadx=30)


    profile.mainloop()
