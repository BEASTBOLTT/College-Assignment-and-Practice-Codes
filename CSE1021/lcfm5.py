n=int(input("Enter the no.: "))
a = 0
b = 1
for i in range(n-1):
    o = a
    a = a + b
    b = o
print(a)