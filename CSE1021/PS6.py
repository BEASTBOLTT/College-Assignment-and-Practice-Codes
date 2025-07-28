h = float(input("Enter the hieght(in meters): "))
w = float(input("Enter the weight(in Kgs): "))
bmi = w/(h**2)
if bmi < 18.5:
    print ("The person is underweight!!!")
elif bmi >= 18.5 and bmi < 24.5:
    print ("The person is Normal!!!")
elif bmi >= 24.5 and bmi < 30:
    print ("The person is Overweight!!!")
elif bmi >= 30:
    print ("The Person is Obese !!!")
else: 
    print ("Invalid input!!!")
