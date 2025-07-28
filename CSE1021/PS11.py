i = int(input("1st no. :"))
j = int(input("2nd no. :"))
k = int(input("3rd no. :"))
if i < j:
    if j < k:
        i = j
    else:
        j = k
else:
    if j < k:
        j = i
    else:
        i = k
print(i,j,k)
