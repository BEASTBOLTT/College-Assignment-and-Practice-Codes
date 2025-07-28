salary = int(input("Enter your salary: "))
serviceYears = int(input("Enter your years of service: "))
if serviceYears >3:
    print ("Congratulations!! You are eligible for a bonus... Your bonus amount is : ", salary/10)
else:
    print ("Sorry you are not eligible for a bonus")