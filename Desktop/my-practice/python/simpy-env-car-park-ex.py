

import simpy
env = simpy.Environment()          # creating Environment instance

def car(env):
    while True:
        print("car parking time is ",env.now)
        parking_time = 5
        yield env.timeout(parking_time)
        
        print("car starting time is ",env.now)
        start_time = 10
        yield env.timeout(start_time)
        
env.process(car(env))
env.run(until=60)

