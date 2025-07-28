def square(x):
    return x*x

def add(x,y):
    return x+y

def isprime(x):
    for i in range (2,x):
        if x%i == 0:
            return False
    return True

def multi(x,y):
    return x*y