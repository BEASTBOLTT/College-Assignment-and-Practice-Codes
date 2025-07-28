#program to print no. between 1 to 50 skipping multiples of 5 and stopping at a no. given by the user
n = int(input("Enter a no. between 1 to 50 to stop counting : "))
for i in range(50):
    if i == n:
        break
    elif i % 5 == 0:
        continue
    else:
        print (i)