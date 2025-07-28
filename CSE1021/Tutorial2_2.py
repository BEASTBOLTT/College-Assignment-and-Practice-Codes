marks = int(input("Enter the marks: "))
if marks not in range(0,101):
    print ("Invalid Marks")
elif marks >= 60:
    if marks >= 70:
        if marks >= 80:
            if marks >= 90:
                print ("Grade A")
            else:
                print ("Grade B")
        else:
            print ("Grade C")
    else:
        print ("Grade D")
else: 
    print ("Fail")