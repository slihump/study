class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def getName1(self):
        return "Class Person"

    def printInfo(self):
        print("name = {}, age = {}".format(self.name, self.age))
class footballPlayer(Person):
    def __init__(self, name, age, job, level):
        self.job = job
        self.level = level
        super().__init__(name, age)

    def getSkillLevel(self):
        return self.level

    def getName2(self):
        return "Class footballPlayer"
        super().printInfo()
        print("job = {}".format(self.job))

class computerEngineer(Person):
    def __init__(self, name, age, job):
        self.job = job
        super().__init__(name, age)

    def getName3(self):
        super().getName1()

    def printInfo(self):
        print("name = {}, age = {}, job = {}".format(self.name, self.age, self.job))

p1 = footballPlayer("Mike", 34, "football.player", 99)
print("name = ", p1.name, ", age = ", p1.age, ", job = ", p1.job,", level = ", p1.level)

p2 = computerEngineer("Mark", 28, "computer.engineer")
print("name = ", p2.name, ", age = ", p2.age, ", job", p2.job)

print("p1.getName2 = ", p1.getName2())
print("p2.getName1 = ", p2.getName1())

print("-"*50)

p1.printInfo()
p2.printInfo()