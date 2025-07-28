from tkinter import *


def add():
    val1 = int(e1.get())
    val2 = int(e2.get())
    l3 = Label(window1, text = 'Sum : ' + str(val1+val2))
    l3.grid(row = 5, column = 1, padx = 10, pady = 10)
    

def diff():
    val1 = int(e1.get())
    val2 = int(e2.get())
    l4 = Label(window1, text = 'Difference : ' + str(val1-val2))
    l4.grid(row = 5, column = 2, padx = 10, pady = 10)

def mul():
    val1 = int(e1.get())
    val2 = int(e2.get())
    l5 = Label(window1, text = 'Product : ' + str(val1*val2))
    l5.grid(row = 8, column = 1, padx = 10, pady = 10)

def div():
    val1 = int(e1.get())
    val2 = int(e2.get())
    try:
        l6 = Label(window1, text = 'Division : ' + str(val1/val2))
        l6.grid(row = 8, column = 2, padx = 10, pady = 10)
    except ZeroDivisionError:
        l6 = Label(window1, text = 'Division by Zero not allowed !! ' )
        l6.grid(row = 8, column = 2, padx = 10, pady = 10)


    
    

root = Tk()
root.title("LMS")

container = Frame(root)
container.pack(fill = 'both', expand = True)
container.grid_rowconfigure(0, weight= 1)
container.grid_columnconfigure(0, weight= 1)


window1 = Frame(container)


window1.grid(row = 0, column = 0, sticky = 'nsew')

l1 = Label(window1, text = 'Enter the 1st no.: ')
l1.grid(row = 1, column = 1, padx = 10, pady = 10)
e1 = Entry(window1)
e1.grid(row = 1, column = 2, padx = 10, pady = 10)
l2 = Label(window1, text = 'Enter the 2nd no.: ')
l2.grid(row = 2, column = 1, padx = 10, pady = 10)
e2 = Entry(window1)
e2.grid(row = 2, column = 2, padx = 10, pady = 10)


b1 = Button(window1, text = 'Add', command = add)
b1.grid(row = 4, column = 1, padx = 10, pady = 10)    

b2 = Button(window1, text = 'Difference', command = diff)
b2.grid(row = 4, column = 2, padx = 10, pady = 10) 

b3 = Button(window1, text = 'Product', command = mul)
b3.grid(row = 7, column = 1, padx = 10, pady = 10) 

b4 = Button(window1, text = 'Division', command = div)
b4.grid(row = 7, column = 2, padx = 10, pady = 10) 



root.mainloop()