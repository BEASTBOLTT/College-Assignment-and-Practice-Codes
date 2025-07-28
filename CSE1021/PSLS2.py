no = int(input("Enter the No. : "))
fact = 1
a = no
while a > 0:
    fact = fact*a
    a = a - 1
print ("The factorial of",no,"is",fact)