l=[]
n=int(input("Enter the no. of elements in the list: "))
i = 1
while i<=n:
    a=int(input("Enter the element:"))
    l.append(a)
    i = i + 1
l2 = []
for j in l:                       #DEVAM PANDEY
    fact = 1                      #23BCE10731
    while j>0:
        fact = fact*j
        j = j-1
    l2.append(fact)
print(l2)
