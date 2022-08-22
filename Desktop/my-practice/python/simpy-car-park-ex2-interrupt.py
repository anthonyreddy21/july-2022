
import simpy

def driver(env,car):
    yield env.timeout(3)
    car.action.interrupt()

class Car(object):
    def __init__(self,env):
        self.env = env
        self.action = env.process(self.run())

    def run(self):
        while True:
            print("start parking and charging at %d " % self.env.now)
            charge_duration = 5

            # if we get an interupt while charing the battery
            try:
                yield self.env.process(self.charge(charge_duration))

            except simpy.Interrupt:
                # when interrupt occured, we stop charging and switch to "driving" state
                print("interrupt occured....... Hope battery is full enough ....")
                print("start driving at %d " % self.env.now)
                trip_duration = 3
                yield self.env.timeout(trip_duration)

    def charge(self,duration):
        yield self.env.timeout(duration)

env = simpy.Environment()
car = Car(env)
env.process(driver(env,car))
env.run(35)
        
                




