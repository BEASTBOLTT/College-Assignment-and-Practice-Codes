time = input("Is the show after 5pm (answer in 'Y' or 'N') : ")
ticketPrice = 0
if time == "y" or time == "Y":
    ticketPrice = 2
age = int(input("Enter the age of the viewer: "))
if age < 12:
    ticketPrice = ticketPrice + 5
elif age >= 12 and age < 60:
    ticketPrice = ticketPrice + 10
elif age >= 60:
    ticketPrice = ticketPrice + 7
else:
    print ("Invalid Input")
print ("Ticket price is $", ticketPrice)