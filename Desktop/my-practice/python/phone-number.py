
import os
p = input("enter phone number")
if len(p) == 10:

    if p[0] >= '6' and p[0] <= '9':
        pass
    else:
        print("input must start with 6-9")
        os.abort()
    for i in p:
        if i >= '0' and i <= '9':
            pass
        else :
            print("Given wrong input , Please enter only 0-9")
            #break
            os.abort()
else:
    print("Length of input should be 10")
    os.abort()

phone = "+91 " + p
print(phone)
    

