a  = int(input("Enter the number: "))
b  = int(input("Enter the number: "))
c  = int(input("Enter the number: "))
if c == a and b == a:
    print ("The numbers are equal")
else:
    if a>b:
        if a>c:
            print ("The greatest number is", a)
        elif c > a:
            print ("The greatest number is",c)
        else:
            print ("The greatest number is",a)
    elif b>a:
        if b>c:
            print ("The greatest number is",b)
        elif c > b:
            print ("The greatest number is",c)
        else:
            print ("The greatest number is",c)
    else:
        if a>c:
            print ("The greatest number is",a)
        elif c>a:
            print ("The greatest number is",c)