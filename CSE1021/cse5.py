a = int(input("Enter a no. (0-30)"))
if a>0 and a<30:
    if a<20:
        if a<10:
            print ("it is in the interval (0-10)")
        else:
            print ("it is in the interval (10-20)")
    else:
        print ("it is in the interval (20-30)")
else:
    print ("Invalid Input!!")