import math

num = int(input("Enter a number:"))

if num > 0:
    sq1 = math.sqrt(num)
    
    print("Square root using math.sqrt function:", sq1)
    
    sq2 = pow(num, 1/2)
    
    print("Square root using pow function:", sq2)
    
    sq3 = num ** (1/2)
    
    print("Square root using exponential function:", sq3)
else:
    print("Enter a positive number")
    