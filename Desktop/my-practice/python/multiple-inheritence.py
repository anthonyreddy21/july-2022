
class parent1:
    def fun1(self):
        print("in fun1 of parent1")

class parent2:
    def fun2(self):
        print("in func2 of parent2")

class child(parent1,parent2):
    def fun3(self):
        print("in func3 of child")

obj = child()
obj.fun1()
obj.fun2()
obj.fun3()
