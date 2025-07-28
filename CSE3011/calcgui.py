import tkinter as tk

# Function to handle button clicks
def button_click(value):
    if value == "=":
        try:
            result = eval(entry.get())  # Evaluate the input expression
            entry.delete(0, tk.END)    # Clear the entry field
            entry.insert(tk.END, str(result))  # Show the result
        except:
            entry.delete(0, tk.END)
            entry.insert(tk.END, "Error")  # Show error if invalid input
    elif value == "C":
        entry.delete(0, tk.END)  # Clear the entry field
    else:
        entry.insert(tk.END, value)  # Add the clicked button value to the entry field

# Create the main window
root = tk.Tk()
root.title("Simple Calculator")

# Create an entry widget
entry = tk.Entry(root, width=25, font=("Arial", 16), justify="right")
entry.grid(row=0, column=0, columnspan=4, padx=5, pady=5)

# Define the buttons
buttons = [
    '7', '8', '9', '+',
    '4', '5', '6', '-',
    '1', '2', '3', '*',
    'C', '0', '=', '/'
]

# Add buttons to the window
row = 1
col = 0
for button in buttons:
    tk.Button(
        root, 
        text=button, 
        width=5, 
        height=2, 
        command=lambda b=button: button_click(b)
    ).grid(row=row, column=col, padx=5, pady=5)
    col += 1
    if col > 3:
        col = 0
        row += 1

# Run the application
root.mainloop()
