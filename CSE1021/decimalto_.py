ct = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F']
def decimalToBinary(num,base):
  if num > 0:
   decimalToBinary(num // base, base)
   print(ct[num % base], end = " ")

number = int(input("Enter the decimal number: "))
base = int(input("Enter the base number: "))
  #main()
decimalToBinary(number,base)

"""print (int("1111", 2))"""