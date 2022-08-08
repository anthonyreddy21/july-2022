
'''
fact=1
n = int(input("enter a number"))
for i in range(1,n+1):
    fact *= i
print("factorial of ",n," is =",fact)
#print("factorial of {0} is = {1}".format(n,fact))
'''

n = int(input("enter a number"))

def fact(n):
    fct = 1
    for i in range(1,n+1):
        fct *= i
        
    print("factorial of ",n, "is = ",fct)
fact(n)
