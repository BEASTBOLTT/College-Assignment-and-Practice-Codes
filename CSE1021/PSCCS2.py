l = []
for i in range(5):
    x = int(input("Enter the marks of subject: "))
    if x >= 90:
        grade = "A"
    elif x >= 80:
        grade = "B"
    elif x >= 70:
        grade = "C"
    elif x >= 60:
        grade = "D"
    elif x >= 50:
        grade = "E"
    else: 
        grade = "F"
    l.append(grade)
for j in range(5):
    print ("Grade in subject ", j+1 , "is: ",l[j])