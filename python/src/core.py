# -*- coding: utf-8 -*-
from . import helpers

def get_sum(num1, num2):
    """
    Adds two numbers.

    Args:
        num1 (int/float): The first number.
        
        num2 (int/float): The second number.

    Returns:
        int/float: The sum of two numbers.
    """
    if isinstance(num1, str) or isinstance(num2, str):
        return None

    return (num1 + num2)


def get_availability(number, name):
    """
    Checks if the name and number pair present in phonebook.

    Args:
        number (int): The phone number.
        
        name (str): The person's name.

    Returns:
        bool: whether the name and number pair is present.
    """
    phonebook = helpers.get_phonebook()

    if number in phonebook:
        print("The name is: {}".format(phonebook.get(number)))
        if name == phonebook.get(number):
            return True
    else:
        return False