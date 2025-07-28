a = int(input("Enter the marks: "))
if a <= 25:
    print ("F Grade")
elif a <= 45:
    print ("E Grade")
elif a <= 50:
    print ("D Grade")
elif a <= 60:
    print ("C Grade")
elif a <= 80:
    print ("B Grade")
elif a > 80:
    print ("A Grade")
else:
    print ("Invalid Input")