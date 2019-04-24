"""
Positional arguments can be passed either in order or by naming each argument
"""
def area(length, width):
    print(f"Width is: {width}")
    print(f"Length is: {length}")
    return length * width
    
print(area(1, 2))
print(area(length=1, width=2))
print(area(width=2, length=1))