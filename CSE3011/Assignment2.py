#takin an array
ar=[]
n = int(input("Enter the no. of elements : "))
i=0
while i < n:
    ar.append(int(input("Enter the element : ")))
    i = i+1
#generating fibonacci
fb=[]
a = 0
b = 1
for i in range(max(ar)):
    fb.append(a)
    o = a
    a = a + b
    b = o
#making subset
sb = []
for j in range(n):                                        #Devam Pandey
    if ar[j] in fb:                                       #23BCE10731
        sb.append(ar[j])
#checking and printing
if len(sb)>2:
    print(len(sb),sb)
else:
    print(-1)