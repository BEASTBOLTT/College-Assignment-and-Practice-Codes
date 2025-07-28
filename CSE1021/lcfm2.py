n=int(input("Enter the number: "))
divisors=[]
for i in range(2,n+1):
    if n%i == 0:
        divisors.append(i)

print("The smallest divisor of the given no. is:",min(divisors))
      