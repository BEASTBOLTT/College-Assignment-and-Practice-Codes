clHeld = int(input("Number of classes held : "))
clAttended = int(input("Number of classes attended : "))
attendance = (clAttended/clHeld)*100
if attendance < 75:
    medCondition = input("The student has any medical conditions (Answer in 'Y' or 'N') : ")
    if medCondition == "Y" or medCondition == "y":
        print ("Allowed to sit in exam !!")
    elif medCondition == "N" or medCondition == "n":
        print ("Not Allowed to sit in exam")
else:
    print ("Not Allowed to sit in exam")