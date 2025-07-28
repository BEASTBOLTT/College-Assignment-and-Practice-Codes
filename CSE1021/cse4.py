age = int(input("Enter your age: "))
state = input("Enter your state: ")
if age > 18 and state == "Madhya Pradesh":
    print ("You are eligible to vote for CM election")
elif age > 18:
    print ("You are eligible to vote for PM election")
else:
    print ("You are not eligible to vote in India")
