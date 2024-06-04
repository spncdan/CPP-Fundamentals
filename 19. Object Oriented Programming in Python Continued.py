# In-class CIS 3100 Object Oriented Programming Python Activity

# Methods explored: Inheritance

class Employee:
    # Creation of own data type
    # Constructor
    # Methods are special functions that belong in a class
    def __init__(self, name, address, telephone, social_sec_num, bank_acc_num): # Constructors are only called when an object in a class is created or instantiated

        # Properties - variables associated with particular class
        self.name = name
        self.address = address
        self.telephone = telephone
        self.social_sec_num = social_sec_num
        self.bank_acc_num = bank_acc_num
        
    # Getters: Methods which recieve data stored in class properties
    def get_name(self):
        return self.name
    
    def get_address(self):
        return self.address
    
    def get_telephone(self):
        return self.telephone
    
    def get_social_sec_num(self):
        return self.social_sec_num
    
    def get_bank_acc_num(self):
        return self.bank_acc_num

    # Setters: Methods which update or Change Class Properties
    def set_name(self, new_name):
        self.name = new_name

    def set_address(self, new_address):
        self.age = new_address

    def set_telephone(self, new_telephone):
        self.address = new_telephone

    def set_social_sec_num(self, new_social_sec_num):
        self.zipcode = new_social_sec_num

    def set_bank_acc_num(self, new_bank_acc_num):
        self.occupation = new_bank_acc_num

# Cook class which inherits Employee class

class Cook(Employee): # We add Employee in parenthesis to show that the class Cook is derived from the Employee class
    def __init__(self, name, address, telephone, social_sec_num, bank_acc_num, yrs_of_exp): # Constructor
        super().__init__(name, address, telephone, social_sec_num, bank_acc_num) # super().__init__ refers to referencing the constructor of the parent class of Person which makes it so you do not need to rewrite the properties of the parent class.
        
    # Below are the properties of the Cook class
        self.yrs_of_exp = yrs_of_exp
        
    # Getters (Method for getting employee class properties)
    def get_yrs_of_exp(self):
            return self.yrs_of_exp
        
    # Setters (Method for changing/editing existing employee class properties)
    def set_yrs_of_exp(self, yrs_of_exp):
            self.yrs_of_exp = yrs_of_exp

# Sous_Chef class which inherits Cook class

class Sous_Chef(Cook):
    def __init__(self, name, address, telephone, social_sec_num, bank_acc_num, yrs_of_exp, institute_attended, speciality):
        super().__init__(name, address, telephone, social_sec_num, bank_acc_num, yrs_of_exp)

    # Below are the properties of the Sous_Chef class
        self.institute_attended = institute_attended
        self.speciality = speciality

    # Getters
    def get_institute_attended(self):
        return self.institute_attended
            
    def get_speciality(self):
        return self.speciality
            
    # Setters
    def set_institute_attened(self, institute_attended):
        self.institute_attended = institute_attended

    def set_speciality(self, speciality):
        self.speciality = speciality

# Chef class which inherits Sous_Chef class

class Chef(Sous_Chef):
    def __init__(self, name, address, telephone, social_sec_num, bank_acc_num, yrs_of_exp, institute_attended, speciality, num_of_awards, num_of_shows):
        super().__init__(name, address, telephone, social_sec_num, bank_acc_num, yrs_of_exp, institute_attended, speciality)

    # Below are the properties of the Chef class
        self.num_of_awards = num_of_awards
        self.num_of_shows = num_of_shows

    # Getters
    def get_num_of_awards(self):
        return self.num_of_awards
    
    def get_num_of_shows(self):
        return self.num_of_shows
    
    # Setters
    def set_num_of_awards(self, num_of_awards):
        self.num_of_awards = num_of_awards

    def set_num_of_shows(self, num_of_shows):
        self.num_of_shows = num_of_shows

# Server class which inherits Employee class

class Server(Employee):
    def __init__(self, name, address, telephone, social_sec_num, bank_acc_num, yrs_of_exp, num_of_pos, num_of_neg):
        super().__init__(self, name, address, telephone, social_sec_num, bank_acc_num)

    # Properties of the Server class
        self.yrs_of_exp = yrs_of_exp
        self.num_of_pos = num_of_pos
        self.num_of_neg = num_of_neg

    # Getters
    def get_yrs_of_exp(self):
        return self.yrs_of_exp
    
    def get_num_of_pos(self):
        return self.num_of_pos
    
    def get_num_of_neg(self):
        return self.num_of_neg
    
    # Setters
    def set_yrs_of_exp(self, yrs_of_exp):
        self.yrs_of_exp = yrs_of_exp

    def set_num_of_pos(self, num_of_pos):
        self.num_of_pos = num_of_pos

    def set_num_of_neg(self, num_of_neg):
        self.num_of_neg = num_of_neg

# Janitor class which inherits Employee class

class Janitor(Employee):
    def __init__(self, name, address, telephone, social_sec_num, bank_acc_num, yrs_of_exp, maintenance_training):
        super().__init__(self, name, address, telephone, social_sec_num, bank_acc_num)

    # Properties of the Janitor class
        self.yrs_of_exp = yrs_of_exp
        self.maintenance_training = maintenance_training

    # Getters
    def get_yrs_of_exp(self):
        return self.yrs_of_exp
    
    def get_maintenance_training(self):
        return self.maintenance_training
    
    # Setters
    def set_yrs_of_exp(self, yrs_of_exp):
        self.yrs_of_exp = yrs_of_exp

    def set_maintenance_training(self, maintenance_training):
        self.maintenance_training = maintenance_training

# Manager class which inherits Employee class

class Manager(Employee):
    def __init__(self, name, address, telephone, social_sec_num, bank_acc_num, yrs_of_exp, tertiary_degree, num_of_employees):
        super().__init__(name, address, telephone, social_sec_num, bank_acc_num)

    # Properties of the Manager class
        self.yrs_of_exp = yrs_of_exp
        self.tertiary_degree = tertiary_degree
        self.num_of_employees = num_of_employees

    # Getters
    def get_yrs_of_exp(self):
        return self.yrs_of_exp
    
    def get_tertiary_degree(self):
        return self.tertiary_degree
    
    def num_of_employees(self):
        return self.num_of_employees
    
    # Setters
    def set_yrs_of_exp(self, yrs_of_exp):
        self.yrs_of_exp = yrs_of_exp

    def set_tertiary_degree(self, tertiary_degree):
        self.tertiary_degree = tertiary_degree

    def set_num_of_employees(self, num_of_employees):
        self.num_of_employees = num_of_employees

# Starting from here we will now create an object in each one of the classes above to ensure functionality while also testing the setters in changing specific values

# Employee Class Example ----------------------------------------------------
p1 = Employee('Mike Schmidt', '1123 Fazbear Ave', 3943923940, 12039, 239491)

# Printing out properties
print(p1.get_name())
print(p1.get_address())
print(p1.get_telephone())
print(p1.get_social_sec_num())
print(p1.get_bank_acc_num())

# Resetting properties
p1.set_name('Micheal Schmidt')
p1.set_address('410 Fredbear Ave')
p1.set_telephone(3422342934)
p1.set_social_sec_num(15844)
p1.set_bank_acc_num(195483)

# Printing out updated properties
print(p1.get_name())
print(p1.get_address())
print(p1.get_telephone())
print(p1.get_social_sec_num())
print(p1.get_bank_acc_num())

# Cook Class Example ----------------------------------------------------
p2 = Cook('Janna Forger', '405 Built Ave', 2933920234, 19232, 293045, 4)

# Printing out properties
print(p2.get_name())
print(p2.get_address())
print(p2.get_telephone())
print(p2.get_social_sec_num())
print(p2.get_bank_acc_num())
print(p2.get_yrs_of_exp())

# Resetting properties
p2.set_name('Micheal Schmidt')
p2.set_address('410 Fredbear Ave')
p2.set_telephone(3422342934)
p2.set_social_sec_num(15844)
p2.set_bank_acc_num(195483)
p2.set_yrs_of_exp(5)

# Printing out updated properties
print(p2.get_name())
print(p2.get_address())
print(p2.get_telephone())
print(p2.get_social_sec_num())
print(p2.get_bank_acc_num())
print(p2.get_yrs_of_exp())
    
# Sous Chef Class Example ----------------------------------------------------
p3 = Sous_Chef('Johnson Merger', '942 Former Street', 3927593934, 29103, 684239, 7, 'Harvard University', 'Seasoning')

# Printing out properties
print(p3.get_name())
print(p3.get_address())
print(p3.get_telephone())
print(p3.get_social_sec_num())
print(p3.get_bank_acc_num())
print(p3.get_yrs_of_exp())
print(p3.get_institute_attended())
print(p3.get_speciality())

# Resetting properties
p3.set_name('Daniel Brown')
p3.set_address('630 River Ave')
p3.set_telephone(3424367365)
p3.set_social_sec_num(16474)
p3.set_bank_acc_num(195483)
p3.set_yrs_of_exp(3)
p3.set_institute_attended("Cornell University")
p3.set_speciality("Soup")

# Printing out updated properties
print(p3.get_name())
print(p3.get_address())
print(p3.get_telephone())
print(p3.get_social_sec_num())
print(p3.get_bank_acc_num())
print(p3.get_yrs_of_exp())
print(p3.get_institute_attended())
print(p3.get_speciality())

# Chef Class Example ----------------------------------------------------
p4 = Chef('Phillip Graves', '506 Austin Street', 3590231930, 12940, 105403, 5, 'Baruch College', 'Frying', 3, 4)

# Printing out properties
print(p4.get_name())
print(p4.get_address())
print(p4.get_telephone())
print(p4.get_social_sec_num())
print(p4.get_bank_acc_num())
print(p4.get_yrs_of_exp())
print(p4.get_institute_attended())
print(p4.get_speciality())
print(p4.get_num_of_awards())
print(p4.get_num_of_shows())

# Resetting properties
p4.set_name('Phillip Gaben')
p4.set_address('510 Austin Street')
p4.set_telephone(3364567545)
p4.set_social_sec_num(14254)
p4.set_bank_acc_num(645542)
p4.set_yrs_of_exp(7)
p4.set_institute_attended("Saint Johns University")
p4.set_speciality("Preparation")
p4.set_num_of_awards(6)
p4.set_num_of_shows(2)

# Printing out updated properties
print(p4.get_name())
print(p4.get_address())
print(p4.get_telephone())
print(p4.get_social_sec_num())
print(p4.get_bank_acc_num())
print(p4.get_yrs_of_exp())
print(p4.get_institute_attended())
print(p4.get_speciality())
print(p4.get_num_of_awards())
print(p4.get_num_of_shows())

# Server Class Example ----------------------------------------------------


                
                
