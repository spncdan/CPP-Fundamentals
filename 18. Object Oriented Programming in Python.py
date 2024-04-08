
# CIS 3100 3/25/24

# Object Oriented Programming in Python

# OOP is a Paradigm based on objects and classes, most popular programming paradigm, and among professional developers

# OOP is the standard paradigm in many software applications

# Another programming paradigm could be procedural which organizes code in functions

# Classes are abstract data types created by the user

# Properties are variables which belong to a class

# Methods are functions which belong to a class

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

# "self" glues these instances together

class Person:
    # Creation of own data type
    # Constructor
    # Methods are special functions that belong in a class
    def __init__(self, name, age, address, occupation, zipcode): # Constructors are only called when an object in a class is created or instantiated
        # Properties - variables associated with particular class
        self.name = name
        self.age = age 
        # Private Address "._"
        self._address = address # Encapsulation, prevents you from getting the address of an object in the class can only be accessed by a getter or setter
        self.occupation = occupation
        self.zipcode = zipcode
        
    # Getters: Methods which recieve data stored in class properties
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

    # Setters: Methods which update or Change Class Properties
    def set_name(self, new_name):
        self.name = new_name

    def set_age(self, new_age):
        # If statements can be used as an error checkers within the setters
        if new_age < 0:  # You cannot have a negative age
            print("Error: Invalid Age")
            return
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

# Say we wanted to create an object for a person called Jason, age 30, Lives at 20 Amsterdam Ave, with a zipcode of 421010

Jason = Person('Jason', 30, '20 Amsterdam Ave', 'Writer', 421010)

# Will return "My name is Jason"
print(Jason.get_name())

# Will return "My age is 30"
print(Jason.get_age())

# Say we want to change Jason's age to 31, we'd do so by doing the following setter...
Jason.set_age(31)

# Will return "My age is 31" in response to the change
print(Jason.get_age())

# Will return "My occupation is Writer"
print(Jason.get_occupation())

# Inheritance is one of the three major concepts in Object Oriented Programming and allows a class to adopt the behvaior of another class while still maintaining it's own identity.

# The class can inherit properties and methods of another class and still have it's own characteristics/identity.

# The class which derives behavor from that of another class is called the 'derived' class while the class form which the behavior is derived from is called the 'parent' or 'base' class.

# Inheritance enables programmers to resuse code and thus, 'Avoid reinventing the wheel' while adding various features to do such.

# Let's consider creating a derived class of Employee. An employee is a person, but not all persons are an employee. Despite this an employee has all the characteristics of a person and is therefore able to inherit a parent class of a person.

class Employee(Person): # We add Person in parenthesis to show that the class Employee is derived from the Person class
    def __init__(self, name, age, address, occupation, zipcode, salary, emplid, title): # Constructor
    super().__init__(name, age, address, occupation, zipcode) # super().__init__ refers to referencing the constructor of the parent class of Person which makes it so you do not need to rewrite the properties of the parent class.
    
    # Below are the properties of the EMPLOYEE class
    self.title = title
    
    self.salary = salary
    
    self.emplid = emplid
    
    # Getters (Method for getting employee class properties)
    def get_title(self):
        return 'My job title is ' + self.title
        
    def get_salary(self):
        return 'My salary is ' + str(self.salary)
        
    def get_emplid(self):
        return 'My emplid is ' + str(self.emplid)
    
    # Setters (Method for changing/editing existing employee class properties)
    def set_title(self, title):
        self.title = title
        
    def set_salary(self, salary):
        self.salary = salary
        
    def set_emplid(self, emplid):
        self.emplid = emplid
        
    # Let's create an object which in the Employee class of Mike, who is 52, lives at 2 High Street, zipcode of 54157, is an Engineers, salary is 100000, emplid of 1234, and is a Level 1 Engineer.
    
    Mike = Employee('Mike', 52, '2 High Street', 54157, 'Engineer', 100000, 1234, 'Level 1 - Engineer')
    
    # Since we inherited the properties from the Person class, we can simply use get_name from the Person class in order to print out Mike's name
    
    print(Mike.get_name()) # Will print out "My name is Mike"
    print(Mike.get_occupation()) # Will print out "My occupation is Engineer"
    print(Mike.get_salary()) # Will print out "My salary is 100000"
    print(Mike.get_address()) # Will print out "My address is 2 High Street"
    
    # We can have multiple instances of inheritance for one parent class
    
    # Let's say we are creating a database management system for a hospital, we can instead use patient here as a patient is a person but not all persons are a patient. Furthermore, a patient has all of the characteristics of a person as well.
    
    class Patient(Person): # Patient class is derived from Person class
    def __init__(self, name, age, address, medical_condition, medication):
    super().__init__(name, age, address) # Inheriting the properties of the person class
    
    # Getter Methods
    def get_medical_condition(self):
        return 'Medical Condition is ' + self.medical_condition
        
    def get_medication(self):
        return 'Medication is ' + self.medication
        
    # Setter Methods
    def set_medical_condition(self, medical_condition):
        self.medical_condition = medical_condition
        
    def set_medication(self, medication):
        self_medication = medication
    
    # Instantiating Patient Class
    patient1 = Patient('Mark', 40, '2 Ocean Avenue', 'Broken Ankle', 'Aspirin')
    
    # Encapsulation restricts access to class properties to only class methods, and prevents inherited classes from modifying encapsluated properties.
    
    # Furthermore it allows private properties from being access outside of the class.
    
    # Safeguards to prevent sensitive information from being public information to other developers
    
    # An example of making a private class property (CANNOT BE ACCESSED OUTSIDE OF CLASS) is represented by a double underscore prefix (E.G __nameOfProperty)
    
    # You can add if statements which only returns conditions if certain conditions are true (if zipcode is set, if age is greater than 18, etc...)
    
    # Method Overriding is a subclass which can override an inherited method from its parent by modifying the behavior of that method
    
    # An example is if the patient class can override get_address() method from its parent class (Person) so that when that method is called, it will function differently.
    
    
    

    

