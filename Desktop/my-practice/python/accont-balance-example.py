

class account:
    def __init__(self,balance):
        self.balance = balance
        return

    def withdraw(self,amount):
        print("withdrawing....",amount)
        print("available balance is ",self.balance)
        if amount <= self.balance :
            self.balance = self.balance - amount
            print("collect cash : ",amount)
        else:
            print("low balance....  Error ")
        return

amount = int(input("enter initial amount : "))
acc = account(amount)
print("balance :",acc.balance)

amount = int(input("enter amount to withdraw :"))
acc.withdraw(amount)
print("final balance is :",acc.balance)

