arr1=[3,76,5,6,8,4,3,45,6,7,8,5,4,3,2,2,3,4]
arr2=[]
for i in range(len(arr1)):
    if arr1[i] in arr2:
        continue
    else:
        arr2.append(arr1[i])
print(arr2)        