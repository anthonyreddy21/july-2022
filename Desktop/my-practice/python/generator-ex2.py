
def gener(n):
    for i in range(n):
        yield i

for i in gener(5):
    print(i)   
