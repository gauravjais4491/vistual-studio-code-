# important level options
# 1)text - add the test
# 2)bd - backgroung
# 3)fg - foregroung
# 4)font - set the font
#   a)font("comsicsansms",19,"bold")
#   b)font="comicsansm 19 bold"
# 5)padx - x padding
# 6)pady - y padding
# 7)relif-border styling- sunken, raise , groove,ridge


# importants pack dict_items
# 1)anchor="nw","ne","sw","se"   south,west,east,north
# 2)side=top,bottom,left,right
# 3)fill
# 4)padx
# 5)pady


# from tkinter import *
# root=Tk()
# root.geometry("500x400")
# root.title("GUI")
# lab=Label(text="Ready",bg="yellow",fg="green")
# lab.pack(side=BOTTOM,anchor="se",fill=X)
# # lab.pack(side=BOTTOM,anchor="se",fill=Y)
# lab.pack()
# root.mainloop()





# arr = int(input().split())
# arr.sort()
#print([-2])
def array(n):
    arr=[]
    while arr<n:
        print(int(input(f"enter {int(arr)} number: ")))
    return arr.sort()
print(array(int(input())))



    