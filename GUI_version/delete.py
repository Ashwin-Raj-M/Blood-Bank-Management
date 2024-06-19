from tkinter import *
from tkinter import messagebox
import sqlite3
import tkinter


#function for delete window
def det_win():

        def delete():
            
            #warning message
            responce=tkinter.messagebox.askokcancel("Warning","Your data will be deleted permanently")
        
            if responce==1:
                #create or connect to a data base
                data=sqlite3.connect("profile.db")

                #creating a cursor
                cur=data.cursor()

                #delete a record
                cur.execute("DELETE from profile WHERE oid = 2")
                tkinter.messagebox.showinfo("Delete","Data deleted successfully")

                #commit changes
                data.commit()

                #close connection
                data.close()

                #destroy delete box
                delete_window.destroy()

            else:
                tkinter.messagebox.showinfo("Delete","Data delete was unsuccessful")

                #destroy delete box
                delete_window.destroy()

        delete_window=Toplevel()
        delete_window.title("Deleting Window")

        #creating for text box to delete reord
        det_box=Entry(delete_window,width=30).grid(row=0,column=1,padx=20)

        #creating label for text box
        Label(delete_window,text="Id to be deleted").grid(row=0,column=0,padx=20)
        
        #creating button to open delete window
        Button(delete_window,text="Delete",command=delete).grid(row=1,columnspan=2,padx=20,pady=10,ipadx=100)
