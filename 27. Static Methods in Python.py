# CIS 3100
# 5/13/24

# Static Methods

class Counter:
    count = 0 # class attribute that acts like a static variable

    def __init__(self):
        Counter.count += 1

# Creating instances of the counter class

c1 = Counter()
c2 = Counter()
c3 = Counter()

# The output below would be 3 as we are instantiating three objects above

print(f'Number of Objects Created: {Counter.count}')

# Static Method
# - Methods within a class that do no access instance specific data
# - Do not use the keyword 'self'
# = Defomed using the '@staticmethod' decorator
# - We do not need to create an object of the class in order to access it

class MathOperations:
    @staticmethod # decorator, tells python the method is special
    def add (a, b):
        return a + b
    # static method means you do not need to create an object of the class in order to access it.

print('Sum of 5 and 3: ', MathOperations.add(5,3)) # We are invoking the add method despite no having an object instantiated
