n = int(input("Enter the no. to be checked: "))
l = len(str(n))
check = n 
e = 0
while check > 0:
    o = check % 10
    e = e+(o**l)
    check = check // 10
if e == n:
    print (n,"is an Armstrong number")
else:
    print (n,"is not an Armstrong number")
