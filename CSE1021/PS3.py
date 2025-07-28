a = int(input("Enter the 1st side: "))
b = int(input("Enter the 2nd side: "))
c = int(input("Enter the 3rd side: "))
if a+b > c:
    if a+c > b:
        if b+c > a:
            print ("It is a Triangle!!")
        else:
            print ("It is not a Triangle!!")
    else:
        print ("It is not a Triangle!!")
else:
    print ("It is not a Triangle!!")
    