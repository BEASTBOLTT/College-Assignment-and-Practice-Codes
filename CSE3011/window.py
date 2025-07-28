from tkinter import *

user = []
def reg():
    val = e1.get()
    user.append(val)
    window2.tkraise()

root = Tk()
root.title("LMS")

container = Frame(root)
container.pack(fill = 'both', expand = True)
container.grid_rowconfigure(0, weight= 1)
container.grid_columnconfigure(0, weight= 1)

window2 = Frame(container, bg = 'green')
window1 = Frame(container, bg = 'red')

window2.grid(row = 0, column = 0, sticky = 'nsew')
window1.grid(row = 0, column = 0, sticky = 'nsew')

l1 = Label(window1, text = 'Name', bg = 'purple')
l1.grid(row = 1, column = 1, padx = 10, pady = 10)
e1 = Entry(window1)
e1.grid(row = 1, column = 2, padx = 10, pady = 10)
l2 = Label(window1, text = 'ID', bg = 'purple')
l2.grid(row = 2, column = 1, padx = 10, pady = 10)
e2 = Entry(window1)
e2.grid(row = 2, column = 2, padx = 10, pady = 10)
l3 = Label(window1, text = 'DOB', bg = 'purple')
l3.grid(row = 3, column = 1, padx = 10, pady = 10)
e3 = Entry(window1)
e3.grid(row = 3, column = 2, padx = 10, pady = 10)

b1 = Button(window1, text = 'Save', bg = 'purple', command = reg)
b1.grid(row = 4, column = 1, padx = 10, pady = 10)                                                              


l4 = Label(window2, text = 'This is window 2', bg= 'green')
l4.pack()

l5 = Label(window2, text ='Welcome', bg= 'green')
l5.pack()

root.mainloop()