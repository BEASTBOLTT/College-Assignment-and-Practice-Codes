n1=int(input("Enter the first number: "))
n2=int(input("Enter the second number: "))
i=1
cd=[]
while i<= min(n1, n2):
    if min(n1, n2)%i == 0:
        if max(n1, n2)%i == 0:
            cd.append((i))
    i=i+1
print("GCD of the given numbers are: ", max(cd))