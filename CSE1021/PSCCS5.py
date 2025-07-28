a = int(input("Enter the coefficient of x^2 :"))
b = int(input("Enter the coefficient of x :"))
c = int(input("Enter the constant term: "))
r1 = (-b+(((b**2) - 4*a*c)**(-1)))/2*a
r2 = (-b-(((b**2) - 4*a*c)**(-1)))/2*a
print ("The roots of",a,"(x^2)+",b,"x+",c,"=0 are :",r1,"and",r2)
