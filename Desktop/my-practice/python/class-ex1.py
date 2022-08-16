

class Human:
    def __init__(self,name,height,weight):
        self.name = name
        self.height = height
        self.weight = weight

    def eat(self,food):
        print("in eat method of class human")
        return "{} is having {} flavoured icecream".format(self.name,food)

    def walk(self,speed):
        print("in walk method of class human")
        return "{} walks with {} kmph speed".format(self.name,speed)
    def sleep(self):
        print("in sleep method of class human")
        pass

obj = Human("Anthony",1.71,75)
obj.sleep()
print("height of {} is {}".format(obj.name,obj.height))
print("weight of {} is {}".format(obj.name,obj.weight))
print(obj.eat("butterscotch"))
print(obj.walk(5))


      
