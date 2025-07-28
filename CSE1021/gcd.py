"""a = int(input("no."))
b = int(input("no."))
cda=[]
cdb=[]
for i in range(1,a+1):
    if a%i == 0:
        cda.append(i)
for i in range(1,b+1):
    if b%i == 0:
        cdb.append(i)     
cds = []
for i in cda:
    if i in cdb:
        cds.append(i)
if cds == []:
    print("No CDs")
else:
    print ("GCD is ", max(cds))"""

c = input("Enter a character : ")

print("The ASCII value of ",c," is ", ord(c))