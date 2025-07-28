n = int(input("Enter the number to be checked: "))
pn = 0 
for i in range(1,n):
    if n%i == 0:
        pn = pn + i
if pn == n:
    print("It is a perfect number")
else: 
    print("It is not a perfect number")