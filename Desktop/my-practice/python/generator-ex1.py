

def gen():
    print("1st yield")
    yield 1
    print("2nd yield")
    yield 2
    print("3rd yield")
    yield 3

for i in gen():
    print(i)
