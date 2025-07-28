n=int(input("Enter the no.: "))
prime=[]
factors=[]
a=2
while n>len(prime):
    for i in range(1,a+1):
        if a%i==0:
            factors.append(i)
    if len(factors)==2:
        prime.append(a)
    factors=[]
    a=a+1
for i in prime:
    print(i,end="")