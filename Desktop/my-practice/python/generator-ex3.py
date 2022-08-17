

def even_generator(maxm):
    n=2
    while n<= maxm:
        yield n
        n += 2


numbers =  even_generator(4)
print(next(numbers))
print(next(numbers))
print(next(numbers))

"""
Output :24
Traceback (most recent call last):
File "C:\ProgramData\Python310\newdi\gene.py", line 131, in <module>
print(next(numbers))StopIteration 
"""

