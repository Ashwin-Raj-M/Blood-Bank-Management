from tkinter import *
from tkinter import messagebox
import sqlite3
import tkinter

#show records
def show_det():
        #create or connect to a data base
        data=sqlite3.connect("profile.db")

        #creating a cursor
        cur=data.cursor()

        #selectig the details
        cur.execute("SELECT *,oid FROM profile")
        records=cur.fetchall()
        print(records)

        #printing records
        print_record=""
        for record in records:
            print_record+="Name : "+str(record[0])+" "+str(record[1])+"       "+"Blood group : "+str(record[2])+"       "+"sex : "+str(record[3])+"      "+"Contact .No : "+str(record[4])+"       "+"Door : "+str(record[5])+"       "+"Area : "+str(record[6])+"       "+"District : "+str(record[7])+"       "+"PIN Code : "+str(record[8])+"      "+"User ID : "+str(record[9])+"      "+"Password : "+str(record[10])+"      "+"O.I.D : "+str(record[11])+"\n\n"

        show=Toplevel()
        show.title("Data Window")
        Label(show,text=print_record).grid(padx=20)


        #commit changes
        data.commit()

        #close connection
        data.close()
