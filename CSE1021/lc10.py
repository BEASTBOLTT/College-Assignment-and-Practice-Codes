dict1={"A":7,"B":16,"C":18,"D":23,"F":32} #grade and no. of people got it
print(dict1)
print("Accessing the no. of people got B grade from the dictionary:",dict1["B"])
dict1["A"] = 9
print("Updateing the no. of people who got A grade from the dictionary:",dict1["A"])
dict1["S"] =  3
print("Adding the no. of students who got S grade from the dictionary:",dict1["S"])
print("Checking if any students are fail from the dictionary:", "F" in dict1)
