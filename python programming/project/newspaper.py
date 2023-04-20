from tkinter import ttk
from tkinter import *
import tkinter as tk
from PIL import Image , ImageTk
gaurav_root=tk.Tk()
gaurav_root.geometry("600x600")
gaurav_root.configure(bg="cyan3")
gaurav_root.title("bollywood takatak")

image = Image.open("dhoni.png")
Photo=ImageTk.PhotoImage(image)
dhoni_label=ttk.Label(image = Photo).grid(row=0, column=0, padx = (200, 100), sticky = N)
t1=ttk.Label(gaurav_root,text='mahendra singh dhoni',)
t1.grid(row=1,column=0)
t2=Button(gaurav_root,text="view profile",bg="yellow", bd="1", font="comicsansm 19 bold",fg="red")
t2.grid(row=2, column=0)

image1 = Image.open("kedar.png")
Photo= ImageTk.PhotoImage(image1)
kedar_label=ttk.Label(image = Photo).grid(row=10, column=100, padx = (100, 150), sticky = N)
t3=ttk.Label(gaurav_root,text='kedar yadav',)
t3.grid(row=11,column=100)
t4=Button(gaurav_root,text="view profile",bg="yellow", bd="1", font="comicsansm 19 bold",fg="red")
t4.grid(row=12, column=100)



gaurav_root.mainloop()




# from tkinter import *
# from PIL import Image , ImageTk
# gaurav_root=Tk()
# #width x height
# gaurav_root.geometry("400x300")
# #width,height
# gaurav_root.minsize(200,200)
# #width,height
# gaurav_root.maxsize(600,600)
# #photo = PhotoImage(file="dhoni.png")
# #for jpg images
# image = Image.open("dhoni.png")
# Photo= ImageTk.PhotoImage(image)
# varun_label= Label(image = Photo)
# #gaurav=Label(text="this is gaurav and his GUI").pack()
# # gaurav.grid(row=4,column=5)
# gaurav_root.mainloop()