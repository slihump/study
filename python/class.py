# class Person(object):
#     def __init__(self, name, age, hometown):
#         self.name = name
#         self.age = age
#         self.hometown = hometown

#     def introduce_myself(self):
#         return "My name is {}. I'm {} years old. I was born in {}.".format(self.name, self.age, self.hometown)

# person1 = Person("Lee", "20", "Gwangju")
# print(person1.introduce_myself())

# class Car:
#     def __init__(self):
#         self.color = ''
#         self.speed = 0
#     def upspeed(self, value):
#         self.speed = self.speed + value
#     def downspeed(self, value):
#         self.speed = self.speed - value

# myCar1 = Car()
# myCar1.color = "빨강"
# myCar1.speed = 0

# myCar2 = Car()
# myCar2.color = "파랑"
# myCar2.speed = 0

# myCar3 = Car()
# myCar3.color = "노랑"
# myCar3.speed = 0

# myCar1.upspeed(30)
# print("자동차1의 색상은 {}이며, 현재속도는 {}km입니다.".format(myCar1.color, myCar1.speed))
# myCar2.upspeed(60)
# print("자동차2의 색상은 {}이며, 현재속도는 {}km입니다.".format(myCar2.color, myCar2.speed))
# myCar3.upspeed(0)
# print("자동차3의 색상은 {}이며, 현재속도는 {}km입니다.".format(myCar3.color, myCar3.speed))

# myCar1.downspeed(20)
# print("자동차1의 색상은 {}이며, 현재속도는 {}km입니다.".format(myCar1.color, myCar1.speed))
# myCar2.downspeed(30)
# print("자동차1의 색상은 {}이며, 현재속도는 {}km입니다.".format(myCar2.color, myCar2.speed))
# myCar3.downspeed(10)
# print("자동차1의 색상은 {}이며, 현재속도는 {}km입니다.".format(myCar3.color, myCar3.speed))


# class Car:
#     count = 0

#     def __init__(self, color, speed):
#         self.color = color
#         self.speed = speed
#         Car.count += 1
#     def upSpeed(self, value):
#         self.speed = self.speed + value
#     def downSpeed(self, value):
#         self.speed = self.speed - value

# myCar1 = Car("빨간", 0)
# print("자동차1의 색상은 {}이며, 생산된 자동차는 총 {}입니다.".format(myCar1.color, myCar1.count))
# myCar2 = Car("파랑", 0)
# print("자동차2의 색상은 {}이며, 생산된 자동차는 총 {}입니다.".format(myCar2.color, myCar2.count))
# myCar3 = Car("노랑", 0)
# print("자동차3의 색상은 {}이며, 생산된 자동차는 총 {}입니다.".format(myCar3.color, myCar3.count))

class Fruit(object):
    def __init__(self, name, price):
        self.name = name
        self.price = price
    
    def __add__(self, target):
        return(self.price + target.price)
    def __sub__(self, target):
        return(self.price - target.price)
    def __mul__(self, target):
        return(self.price * target.price)
    def __truediv__(self, target):
        return(self.price / target.price)

apple = Fruit("사과", 100000)
durian = Fruit("두리안", 50000)

print(apple + durian)
print(apple - durian)
print(apple * durian)
print(apple / durian)