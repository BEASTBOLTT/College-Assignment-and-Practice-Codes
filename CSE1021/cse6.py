a = int(input("enter the 1st no. : "))
b = int(input("enter the 2nd no. : "))
c = int(input("enter the 3rd no. : "))
if a>b:
    if a>c or a==c:
        print (a,"is the greatest")
elif b>a and b>c:
    print (b,"is the greatest")
elif c>a and c>b:
    print (c,"is the greatest")
elif a==b and a==c:
    print ("all no. are the same")
elif a==b or a==c or b==c:
    print ()