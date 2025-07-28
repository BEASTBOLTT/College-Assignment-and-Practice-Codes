marks = int(input("Enter your marks: "))
if marks < 60:
    print ("F Grade!!!! Falied")
elif marks < 69:
    print ("D Grade!!!! Below average")
elif marks < 79:
    print ("C Grade!!!! Average Performance")
elif marks < 89:
    print ("B Grade!!!! Good Job! Excellent performance")
elif marks >89:
    if marks == 100:
        print ("A Grade!!!! Perfect score Excellent Performance")
    else:
        print ("A Grade!!!! Excellent Performance")
else:
    print ("Invalid Input")