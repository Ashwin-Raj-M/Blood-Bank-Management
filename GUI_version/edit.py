from tkinter import *
from tkinter import messagebox
import sqlite3
import tkinter

#function for edit drop
def edit_drop():
        global edit_window
        edit_window=Toplevel()
        edit_window.title("Edit Window")

        global edit_id
        edit_id=Entry(edit_window,width=30).grid(row=0,column=1,padx=20,pady=10)
        edit_label=Label(edit_window,text="ID to be edited").grid(row=0,column=0,padx=20,pady=10)

        #creating button to enter edit window
        edit_btn=Button(edit_window,text="Edit",command=lambda: edit_win()).grid(row=1,column=1,padx=20,pady=10,ipadx=50)
        #edit_id.delete(0,END)       


#function to create edit window
def edit_win():
    
    #create or connect to a data base
    data=sqlite3.connect("profile.db")

    #creating a cursor
    cur=data.cursor()

    global record_id
    #record_id=edit_id.get()
    #Selecting the data
    cur.execute("SELECT * from profile WHERE oid = 4")
    global records
    records=cur.fetchall()

    #globalizing the variyables
    global f_name_edit
    global l_name_edit
    global blood_group_edit
    global sex_edit
    global contact_no_edit
    global door_edit
    global area_edit
    global district_edit
    global pincode_edit


    #creating text boxes
    f_name_edit=Entry(edit_window,width=30)
    f_name_edit.grid(row=2,column=1,padx=20,pady=10)

    l_name_edit=Entry(edit_window,width=30)
    l_name_edit.grid(row=3,column=1,padx=20,pady=10)

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
    blood_group_edit=StringVar()
    blood_group_edit.set(items[0])
    OptionMenu(edit_window,blood_group_edit,*items).grid(row=4,column=1,padx=20,pady=10)
    
    #creating drop down for sex
    global items1
    items1=[
        "Male",
        "Female"
    ]
    sex_edit=StringVar()
    sex_edit.set(items[0])
    OptionMenu(edit_window,sex_edit,*items1).grid(row=5,column=1,padx=20,pady=10)
    

    contact_no_edit=Entry(edit_window,width=30)
    contact_no_edit.grid(row=6,column=1,padx=20,pady=10)
    
    door_edit=Entry(edit_window,width=30)
    door_edit.grid(row=7,column=1,padx=20,pady=10)

    area_edit=Entry(edit_window,width=30)
    area_edit.grid(row=8,column=1,padx=20,pady=10)

    district_edit=Entry(edit_window,width=30)
    district_edit.grid(row=9,column=1,padx=20,pady=10)

    pincode_edit=Entry(edit_window,width=30)
    pincode_edit.grid(row=10,column=1,padx=20,pady=10)

    #creating label for text boxes
    f_name_label=Label(edit_window,text="First Name")
    f_name_label.grid(row=2,column=0,padx=20,pady=10)

    l_name_label=Label(edit_window,text="Last Name")
    l_name_label.grid(row=3,column=0,padx=20,pady=10)

    blood_group_label=Label(edit_window,text="Blood Group")
    blood_group_label.grid(row=4,column=0,padx=20,pady=10)

    sex_label=Label(edit_window,text="Sex")
    sex_label.grid(row=5,column=0,padx=20,pady=10)

    contact_no_label=Label(edit_window,text="Contact number")
    contact_no_label.grid(row=6,column=0,padx=20,pady=10)

    door_label=Label(edit_window,text="Door.No")
    door_label.grid(row=7,column=0,padx=20,pady=10)

    area_label=Label(edit_window,text="Area")
    area_label.grid(row=8,column=0,padx=20,pady=10)

    district_label=Label(edit_window,text="District")
    district_label.grid(row=9,column=0,padx=20,pady=10)

    pincode_label=Label(edit_window,text="PIN code")
    pincode_label.grid(row=10,column=0,padx=20,pady=10)

    #creating button for edit
    Button(edit_window,text="Save Edit",command=save_edit).grid(row=11,columnspan=2,padx=20,pady=10,ipadx=100)
        
    #dispaly the previous info

    for record in records:
            f_name_edit.insert(0,record[0])
            l_name_edit.insert(0,record[1])
            blood_group_edit.set(record[2])
            sex_edit.set(record[3])
            contact_no_edit.insert(0,record[4])
            door_edit.insert(0,record[5])
            area_edit.insert(0,record[6])
            district_edit.insert(0,record[7])
            pincode_edit.insert(0,record[8])

        #commit changes
    data.commit()

        #close connection
    data.close()




#function for saving edits
def save_edit():
        #create or connect to a data base
        data=sqlite3.connect("profile.db")

        #creating a cursor
        cur=data.cursor()

        #updating the info
        cur.execute("""UPDATE profile SET
                first_name = :first,
                last_name = :last,
                blood_group = :b_group,
                sex = :sex,
                contact_no = :contact,
                door = :door,
                area = :area,
                district = :dist,
                pincode = :pin,
                user_id = :u_id,
                password = :p_word
                
                WHERE oid = :oid""",
                {
                'first' : f_name_edit.get(),
                'last' :  l_name_edit.get(),
                'b_group' : blood_group_edit.get(),
                'sex' : sex_edit.get(),
                'contact' : contact_no_edit.get(),
                'door' : door_edit.get(),
                'area' : area_edit.get(),
                'dist' : district_edit.get(),
                'pin' : pincode_edit.get(),
                'u_id' : "0000",
                'p_word' : "0000",

                'oid' : 4
                })

        #commit changes
        data.commit()

        #close connection
        data.close()

        edit_window.destroy()

        #success message
        tkinter.messagebox.showinfo("Data Edit","Data Edited successfully")





