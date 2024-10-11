class Solution(object):
    def carFleet(self, target, pos, speed):
        cars = [(p,s) for p,s in zip(pos,speed)]
        counter = 0
        LastTime = 0
        for p, s in sorted(cars)[::-1]:
            time = (target - p) / float(s)
            if time > LastTime:
                counter += 1
                LastTime = time
        return counter