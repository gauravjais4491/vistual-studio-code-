from tkinter import ttk
import tkinter as tk
root=tk.Tk()
root.title("GUI")
root.geometry("300x300")
new_table=ttk.Label(root, text="my name is gaurav")
new_table.grid(row=0, column=0)
root.mainloop()
