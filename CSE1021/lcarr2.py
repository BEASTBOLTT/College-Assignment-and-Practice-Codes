mat1=[]
mat2=[[3,4,5],[6,7,8],[9,1,2]]
for i in range(len(mat2)):
    list1=[]
    for j in range(len(mat2[i])):
        list1.append(mat2[j][i])
    mat1.append(list1)
print(mat1)