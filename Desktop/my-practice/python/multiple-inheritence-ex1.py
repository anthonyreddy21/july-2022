
class time:
    def gettime(self):
        print("print system time")
        return

class date:
    def getdate(self):
        print("print system date")
        return

class watch(time,date):
    def display(self):
        self.gettime()
        self.getdate()
        print("in watch class")
        return

obj = watch()
obj.display()
        


