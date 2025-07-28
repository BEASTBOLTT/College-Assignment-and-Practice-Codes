import tkinter as tk
root = tk.Tk()
root.title('Library Management System')

head = tk.Frame(root, bg = 'yellow', height= 50)
head.pack(fill = 'x')
sbar = tk.Frame(root, bg = 'green', width = 75)
sbar.pack(fill ='y', side = 'left')
main = tk.Frame(root, bg = 'red')
main.pack(fill ='both', expand= True)

l1 = tk.Label(main, text = 'Name')
l1.grid(row = 1, column = 1, padx = 10, pady = 10)
e1 = tk.Entry(main)
e1.grid(row = 1, column = 2, padx = 10, pady = 10)
l2 = tk.Label(main, text = 'ID')
l2.grid(row = 2, column = 1, padx = 10, pady = 10)
e2 = tk.Entry(main)
e2.grid(row = 2, column = 2, padx = 10, pady = 10)
l3 = tk.Label(main, text = 'DOB')
l3.grid(row = 3, column = 1, padx = 10, pady = 10)
e3 = tk.Entry(main)
e3.grid(row = 3, column = 2, padx = 10, pady = 10)

b1 = tk.Button(main, text = 'Save')
b1.grid(row = 4, column = 1, padx = 10, pady = 10)


"""lab = tk.Label(root, text = 'Library Management System')
l1 = tk.Label(main, text = 'Name')
l1.grid(row = 1, column = 1, padx = 10, pady = 10)
e1 = tk.Entry(main)
e1.grid(row = 1, column = 2, padx = 10, pady = 10)
l2 = tk.Label(main, text = 'ID')
l2.grid(row = 2, column = 1, padx = 10, pady = 10)
e2 = tk.Entry(main)
e2.grid(row = 2, column = 2, padx = 10, pady = 10)
l3 = tk.Label(main, text = 'DOB')
l3.grid(row = 3, column = 1, padx = 10, pady = 10)
e3 = tk.Entry(main)
e3.grid(row = 3, column = 2, padx = 10, pady = 10)

b1 = tk.Button(main, text = 'Save')
b1.grid(row = 4, column = 1, padx = 10, pady = 10)"""

"""nlab = tk.Label(root, text = 'Library Management System', bg = 'yellow')
nlab.pack(pady = 100, fill = 'x')

nbut = tk.Button(root, text = 'Click here')
nbut.pack(fill = 'both')"""

root.mainloop()