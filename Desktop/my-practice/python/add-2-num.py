Python 3.10.6 (tags/v3.10.6:9c7b4bd, Aug  1 2022, 21:53:49) [MSC v.1932 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
d
Traceback (most recent call last):
  File "<pyshell#0>", line 1, in <module>
    d
NameError: name 'd' is not defined. Did you mean: 'id'?
print
<built-in function print>
10+111
121


for i in range(5)
SyntaxError: expected ':'
for i in range(5):
    print(i)

0
1
2
3
4
for i in range(2,10)
SyntaxError: expected ':'
for i in range(2,10):
    print(i)

2
3
4
5
6
7
8
9




for i in range(1,10,2):
    print(i)

1
3
5
7
9
for i in range(1,-5,1):
    print(i)

for i in range(1,-5,-1):
    print(i)

1
0
-1
-2
-3
-4


for i in range(1,11):
    print("7","*",i,"=",7*i)

7 * 1 = 7
7 * 2 = 14
7 * 3 = 21
7 * 4 = 28
7 * 5 = 35
7 * 6 = 42
7 * 7 = 49
7 * 8 = 56
7 * 9 = 63
7 * 10 = 70




num1=10
num2=20

sum = num1+num2

print("sum of {0} and {1} is {2}",.format(num1,num2,sum))
SyntaxError: invalid syntax
num1 = 15
num2 = 12
 
# Adding two nos
sum = num1 + num2
 
# printing values
print("Sum of {0} and {1} is {2}" .format(num1, num2, sum))
SyntaxError: multiple statements found while compiling a single statement


num1=10
num2=20

sum = num1+num2

print("sum of {0} and {1} is {2}".format(num1,num2,sum))
SyntaxError: multiple statements found while compiling a single statement





num1=10
num2=20

#sum = num1+num2

print("sum of {0} and {1} is {2}",.format(num1,num2,num1+num2))
SyntaxError: multiple statements found while compiling a single statement



num1=10
num2=20

#sum = num1+num2

print(num1+num2)
SyntaxError: multiple statements found while compiling a single statement

========================================== RESTART: C:/Users/SS/Desktop/my-practice/python/addition-2-nums.py ==========================================
sum of 10 and 20 is 30






========================================== RESTART: C:/Users/SS/Desktop/my-practice/python/addition-2-nums.py ==========================================
sum of 10 and 20 is 30



a=10
b=20

if a>b
SyntaxError: expected ':'

============================================= RESTART: C:/Users/SS/Desktop/my-practice/python/max-2-num.py =============================================
a = 10 is less than b = 20 

============================================= RESTART: C:/Users/SS/Desktop/my-practice/python/factorial.py =============================================
enter a number
<class 'int'>5
Traceback (most recent call last):
  File "C:/Users/SS/Desktop/my-practice/python/factorial.py", line 4, in <module>
    for i in range(1,n+1):
TypeError: can only concatenate str (not "int") to str




============================================= RESTART: C:/Users/SS/Desktop/my-practice/python/factorial.py =============================================
enter a number
Traceback (most recent call last):
  File "C:/Users/SS/Desktop/my-practice/python/factorial.py", line 4, in <module>
    for i in range(1,n+1):
TypeError: can only concatenate str (not "int") to str

============================================= RESTART: C:/Users/SS/Desktop/my-practice/python/factorial.py =============================================
enter a number3
Traceback (most recent call last):
  File "C:/Users/SS/Desktop/my-practice/python/factorial.py", line 4, in <module>
    for i in range(1,n+1):
TypeError: can only concatenate str (not "int") to str

============================================= RESTART: C:/Users/SS/Desktop/my-practice/python/factorial.py =============================================
enter a number5
Traceback (most recent call last):
  File "C:/Users/SS/Desktop/my-practice/python/factorial.py", line 5, in <module>
    fact *= i
NameError: name 'fact' is not defined

============================================= RESTART: C:/Users/SS/Desktop/my-practice/python/factorial.py =============================================
enter a number5
factorial of 5 is = 120

============================================= RESTART: C:/Users/SS/Desktop/my-practice/python/factorial.py =============================================
enter a number5
factorial of 5 is = 120

============================================= RESTART: C:/Users/SS/Desktop/my-practice/python/factorial.py =============================================
enter a numberfor i in range(1,n+1):
Traceback (most recent call last):
  File "C:/Users/SS/Desktop/my-practice/python/factorial.py", line 4, in <module>
    n = int(input("enter a number"))
ValueError: invalid literal for int() with base 10: 'for i in range(1,n+1):'



============================================= RESTART: C:/Users/SS/Desktop/my-practice/python/factorial.py =============================================
enter a number3
Traceback (most recent call last):
  File "C:/Users/SS/Desktop/my-practice/python/factorial.py", line 6, in <module>
    fact *= i
NameError: name 'fact' is not defined

============================================= RESTART: C:/Users/SS/Desktop/my-practice/python/factorial.py =============================================
enter a number3
factorial of 3 is = 6

============================================= RESTART: C:/Users/SS/Desktop/my-practice/python/factorial.py =============================================
enter a number5
factorial of  5  is = 120




= RESTART: C:\Users\SS\Desktop\my-practice\python\factorial.py =
enter a number5
Traceback (most recent call last):
  File "C:\Users\SS\Desktop\my-practice\python\factorial.py", line 17, in <module>
    fact(n)
  File "C:\Users\SS\Desktop\my-practice\python\factorial.py", line 15, in fact
    fact *= i
UnboundLocalError: local variable 'fact' referenced before assignment

= RESTART: C:\Users\SS\Desktop\my-practice\python\factorial.py =
enter a number4
Traceback (most recent call last):
  File "C:\Users\SS\Desktop\my-practice\python\factorial.py", line 17, in <module>
    fact(n)
  File "C:\Users\SS\Desktop\my-practice\python\factorial.py", line 15, in fact
    fct *= i
UnboundLocalError: local variable 'fct' referenced before assignment

= RESTART: C:\Users\SS\Desktop\my-practice\python\factorial.py =
enter a number5
Traceback (most recent call last):
  File "C:\Users\SS\Desktop\my-practice\python\factorial.py", line 18, in <module>
    fact(n)
  File "C:\Users\SS\Desktop\my-practice\python\factorial.py", line 15, in fact
    fct *= i
UnboundLocalError: local variable 'fct' referenced before assignment

= RESTART: C:\Users\SS\Desktop\my-practice\python\factorial.py =
enter a number5
factorial of  5 is =  120
