
import simpy

class Car(object):

    def __init__(self,env):
        self.env = env
        self.action = env.process(self.run())

    def run(self):
        while True:
            print("start parking and charging at %d " % self.env.now)
            charge_duration = 2
            yield self.env.process(self.charge(charge_duration))

            print("start driving  at %d " % self.env.now)
            trip_duration = 10
            yield self.env.timeout(trip_duration)

    def charge(self, duration):
        yield self.env.timeout(duration)

env = simpy.Environment()
car = Car(env)
env.run(50)


