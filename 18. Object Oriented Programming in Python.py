
# CIS 3100 3/25/24

# Object Oriented Programming in Python

# OOP is a Paradigm based on objects and classes, most popular programming paradigm, and among professional developers

# OOP is the standard paradigm in many software applications

# Another programming paradigm could be procedural which organizes code in functions

# Classes are blueprints and can be used many times

# Classes have properties and methods, properties are variables which belong to the class

# Objects are instances of a class, access attributes and methods associated with the class

# At any given time a variable can only store 1 piece of information which makes it unreliable for large data sets in the instance that someone has multiple attributes.

# Our lists (in C++ these are called arrays)
# name = ['Joan', 'Lisa', 'Matthew', 'Leon']
# age = [22, 35, 40, 21]
# address = ['1 Main Street', '2 Lexington Ave', '44 Ocean Drive', '4 Water Ave']
# zip_code = [90121, 11411, 29421, 24911]
# occupation = ['Engineer', 'Architect', 'Banker', 'Chef']

# Printing the all of the data relavant to Joan
# print(f'Name: {name[0]}')
# print(f'Age: {age[0]}')
# print(f'Address: {address[0]}')
# print(f'Zip Code: {zip_code[0]}')
# print(f'Occupation: {occupation[0]}')

# Changing Matthew's age to 45, Occupation to Teacher
# age[2] = 45
# occupation[2] = 'Teacher'

# Changing Lisa's address to 310 Autumn Avenue, zipcode to 11208
# address[1] = '310 Autumn Ave'
# zip_code[1] = 11208

# Changing Leon's zipcode to 11111 and occupation to Welder
# zip_code[3] = 11111
# ccupation[3] = 'Welder'

# data = name[0]
# print(data)
# data = age[0]
# print(data) # As you can see the value of data is OVERWRITTEN once we assign a new value to it

# These are the limitations of variables for abstract concepts

# However you can use an OBJECT

# Class provides elegant and sustainable solution to this

class Person:
    # Creation of own data type
    # Constructor
    # Methods are special functions that belong in a class
    def __init__(self, name, age, address, occupation, zipcode): ## __init__ is a constructor and only called when class/object is created and connects functions
        self.name = name
        self.age = age
        self.address = address
        self.occupation = occupation
        self.zipcode = zipcode

    def get_name(self):
        return f'My name is ' + self.name
    
    def get_address(self):
        return f'My address is ' + self.address
    
    def get_zipcode(self):
        return f'My zip code is ' + str(self.zipcode)
    
    def get_age(self):
        return f'My age is ' + str(self.age)
    
    def get_occupation(self):
        return f'My occupation is ' + self.occupation
    
    def set_address(self, address):
        self.address = address

    # Setters: methods that change or update the class properties

    def set_name(self, new_name):
        self.name = new_name

    def set_age(self, new_age):
        self.age = new_age

    def set_address(self, new_address):
        self.address = new_address

    def set_zipcode(self, new_zipcode):
        self.zipcode = new_zipcode

    def set_occupation(self, new_occupation):
        self.occupation = new_occupation

# Creating objects of the person class and adding the Joan object to the class and defining it's contents
# Here we instantiated the class (added object to class) 4 times
Joan = Person('Joan', 22, '1 Main Street', 'Engineer', 11208)
Lisa = Person('Lisa', 35, '2 Lexington Ave', 'Architect', 11411)
Matthew = Person('Matthew', 40, '44 Ocean Drive', 'Banker', 29421)
Leon = Person('Leon', 21, '4 Water Ave', 'Chef', 24911)

# will return Joan's name
print(Joan.name)

# will return "My name is Joan"
print(Joan.get_name())

# will return "My name is Lisa"
print(Lisa.get_name() )

Lisa.set_name('Alisa') # Will change Lisa's name within the class to Alisa

# Will return "My name is Alisa" in light of our new changes
print(Lisa.get_name())

# Inheritance is one of the three major concepts in Object Oriented Programming and allows a class to adopt the behvaior of another class while still maintaining it's own identity.

# The class can inherit properties and methods of another class and still have it's own characteristics.

# The class which derives behvor from that of another class is called the 'derived' class while the class form whichthe behavior is derived from is called the 'parent' or 'base' class.

# Inheritance enables programmers to resuse code and thus, 'Avoid reinventing the wheel' while adding various features to such.
