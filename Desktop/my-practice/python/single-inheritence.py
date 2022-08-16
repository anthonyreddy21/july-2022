
class parent():
    def first(self):
        print("1st function")
        return

class child(parent):
    def second(self):
        print("2nd function")
        return

obj = child()
obj.first()
obj.second()
    
        


