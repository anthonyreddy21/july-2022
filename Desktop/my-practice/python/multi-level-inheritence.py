
class parent:
    def parent(self):
        print("in parent class")

class child1(parent):
    def func1(self):
       print("in func1")

class child2(child1):
    def func2(self):
        print("in func2")

obj = child2()
obj.parent()
obj.func1()
obj.func2()
            
        


