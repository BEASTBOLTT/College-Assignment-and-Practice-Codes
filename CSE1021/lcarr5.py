arr1=[3,76,5,6,8,4,3,45,6,7,8,5,4,3,2,2,3,4]
ele = int(input("Enter the element to be checked: "))
occurrences =0
for i in range(0, len(arr1)):
    if arr1[i]==ele:
        occurrences += 1
print("No. of occurrences of the given element is:",occurrences)