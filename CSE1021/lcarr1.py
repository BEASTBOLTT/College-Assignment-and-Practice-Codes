
mat1=[[1,2,3],[4,5,6],[7,8,9]]
mat2=[[3,4,5],[6,7,8],[9,1,2]]
mat3=[[],[],[]]
list1=[]
for i in range(0,len(mat1)):
    for j in range(0,len(mat1[i])):
        list1.append(mat1[i][j]+mat2[i][j])
    mat3[i] = list1
    list1=[]
for i in range(0,len(mat3)):
    print(mat3[i],end=" ")