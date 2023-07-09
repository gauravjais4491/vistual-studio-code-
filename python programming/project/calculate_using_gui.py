from tkinter import *

expression = ""
def input_number(number,equation):
    global expression
    expression = expression + str(number)
    equation.set(expression)
def clear_input_field(equation):
   global expression
   expression = ""
def evaluate(equation):
    global expression
    try:
        result = str(eval(expression))
        equation.set(result)
        expression = ""
    except:
        expression = ""

def main():
    import tkinter
    root=tkinter.Tk()
    root.title("Calculator")
    root.geometry('330x330')
    equation = StringVar()
    input_field = Entry(root, textvariable=equation)
    input_field.place(height=1000)
    input_field.grid(columnspan=4, ipadx=100, ipady=5)
    equation.set("Enter the expression")
    _1 =tkinter.Button(root, text='1', fg='white', bg='black', bd=0, command=lambda: input_number(1, equation), height=5, width=10)
    _1.grid(row=2, column=0)
    _2 =tkinter.Button(root, text='2', fg='white', bg='black', bd=0, command=lambda: input_number(2, equation), height=2, width=7)
    _2.grid(row=2, column=1)
    _3 = tkinter.Button(root, text='3', fg='white', bg='black', bd=0, command=lambda: input_number(3, equation), height=2, width=7)
    _3.grid(row=2, column=2)
    _4 =tkinter.Button(root, text='4', fg='white', bg='black', bd=0, command=lambda: input_number(4, equation), height=2, width=7)
    _4.grid(row=4, column=0)
    _5 =tkinter.Button(root, text='5', fg='white', bg='black', bd=0, command=lambda: input_number(5, equation), height=2, width=7)
    _5.grid(row=4, column=1)
    _6 =tkinter.Button(root, text='6', fg='white', bg='black', bd=0, command=lambda: input_number(6, equation), height=2, width=7)
    _6.grid(row=4, column=2)
    _7 =tkinter.Button(root, text='7', fg='white', bg='black', bd=0, command=lambda: input_number(7, equation), height=2, width=7)
    _7.grid(row=5, column=0)
    _8 =tkinter.Button(root, text='8', fg='white', bg='black', bd=0, command=lambda: input_number(8, equation), height=2, width=7)
    _8.grid(row=5, column=1)
    _9 =tkinter.Button(root, text='9', fg='white', bg='black', bd=0, command=lambda: input_number(9, equation), height=2, width=7)
    _9.grid(row=5, column=2)
    _0 =tkinter.Button(root, text='0', fg='white', bg='black', bd=0, command=lambda: input_number(0, equation), height=2, width=7)
    _0.grid(row=6, column=0)
    plus =tkinter.Button(root, text='+', fg='white', bg='black', bd=0, command=lambda: input_number('+', equation), height=2, width=7)
    plus.grid(row=2, column=3)
    minus =tkinter.Button(root, text='-', fg='white', bg='black', bd=0, command=lambda: input_number('-', equation), height=2, width=7)
    minus.grid(row=3, column=3)
    multiply=tkinter.Button(root, text='*', fg='white', bg='black', bd=0, command=lambda:  input_number('*', equation), height=2, width=7)
    multiply.grid(row=4, column=3)
    divide =tkinter.Button(root, text='/', fg='white', bg='black', bd=0, command=lambda: input_number('/', equation), height=2, width=7)
    divide.grid(row=5, column=3)
    equal =tkinter.Button(root, text='=', fg='white', bg='black', bd=0, command=lambda: evaluate(equation), height=2, width=7)
    equal.grid(row=5, column=2)
    clear =tkinter.Button(root, text='Clear', fg='white', bg='black', bd=0, command=lambda: clear_input_field(equation), height=2, width=7)
    clear.grid(row=5, column=1)
    # module =tkinter.Button(root, text='%%', fg='white', bg='black', bd=0, command=lambda: input_number('%%', equation), height=2, width=7)
    # module.grid(row=7, column=5)
    root.mainloop()
if __name__ == '__main__':
    main()
   