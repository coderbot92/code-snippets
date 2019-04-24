"""
*args positional argument will store all of the positional arguments passed to foo() as tuple, 
with no limit to how many you can provide
**kwargs keyword argument will store any keyword arguments as dictionary
"""

def foo(*args, **kwargs):
    print("positional args: ", args)
    print("keyword args: ", kwargs)
    
foo('one', 'two', 'three')
foo(a='one', b='two', c='three')
foo('one', 'two', c='three', d='four')
