temp = int(input("Enter the temperature only: "))
unit = input("Enter the unit: ")
if unit == "F" or unit == "f":
    convertedTemp = (temp-32)*(5/9)
    print ("Converted temperature is",convertedTemp,"C")
elif unit == "C" or unit == "c":
    convertedTemp = (temp*(9/5))+32
    print ("Converted temperature is",convertedTemp,"F")
else:
    print ("Invalid Input")