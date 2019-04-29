class Person:
    def __init__(self, fname, lname):
        self.firstname = fname
        self.lastname = lname

    def printname(self):
        print(self.firstname, self.lastname)

class Student(Person):
    pass

f = input("Enter First Name: ")
l = input("Enter Last Name: ")
x = Student(f,l)
x.printname()