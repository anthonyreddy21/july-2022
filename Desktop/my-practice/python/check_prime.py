

def check_prime(n):
    if(n > 1):
        for i in range(2,n//2):
            if(n % i == 0):
                print(n," is not a prime number")
                break
            else:
                print(n, " is a prime number")

n = int(input("Enter a Number"))
#k=11
#print(-(k//-2))

check_prime(n)
