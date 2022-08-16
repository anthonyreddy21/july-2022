

class test:
    a = 10
    def __init__(self,a):
        self.a = a
        return
    def display(self):
        a = 20
        print("Object address = ",self)
        print("method a : ",a)
        print("object a : ",self.a)
        print("class a : ",test.a)
        return

obj = test(40)
print("Object address = ",obj)
obj.display()

