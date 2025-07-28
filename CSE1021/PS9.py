age = int(input("Enter your age:"))
gender = input("ENter your gender(answer in 'm' or 'f'):")
marritalStatus = input("ENter your marital status(answer in 'y' or 'n'):")
if gender == "f"or gender == "F":
    print ("You will only  work in urban areas")
elif gender == "M" or gender == "m":
    if age >= 20 and age <=40:
        print ("You can work anywhere")
    elif age >= 40 and age <=60:
        print ("You can work only in urban areas")
    else:
        print ("ERROR")
else:
    print ("Error: Unknown gender")
