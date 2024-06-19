import signup
from tkinter import *
from setuptools import Command

root=Tk()
root.title("Blood bank")
root.geometry("300x300")

fame=Frame(root,bd=5,bg="black")

Label(root,text="Sign in").grid(pady=30,columnspan=2)

user=Entry(root,width=30).grid(row=1,column=1,padx=20,pady=20)
Label(root,text="User ID").grid(row=1,column=0,padx=10,pady=20)

password=Entry(root,width=30,show="*").grid(row=2,column=1,padx=20,pady=20)
Label(root,text="Password").grid(row=2,column=0,padx=10,pady=20)

#creating button for signin
Button(root,text="Sign in").grid(columnspan=2,row=3,padx=20,pady=10,ipadx=100)

#creating button for signup
Button(root,text="Sign up",command=lambda: signup.profile()).grid(columnspan=2,row=4,padx=20,pady=10,ipadx=100)

root.mainloop()