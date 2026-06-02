import re
from operator import sub
from posix import PRIO_USER

print("select one of these")
print(" 1 for + \n 2 for - \n 3 for * \n 4 for / \n 5 for ^ \n 6 for inverse")
func = int(input("Whats your choice "))
z = None


def main():
    if func == 1:
        x = int(input("Whats your first number "))
        y = int(input("Whats your second number "))

        return add(x, y)
    elif func == 2:
        x = int(input("Whats your first number "))
        y = int(input("Whats your second number "))

        return sub(x, y)
    elif func == 3:
        x = int(input("Whats your first number "))
        y = int(input("Whats your second number "))

        return mul(x, y)
    elif func == 4:
        x = int(input("Whats your first number "))
        y = int(input("Whats your second number "))

        return div(x, y)
    elif func == 5:
        x = int(input("Whats your first number "))
        y = int(input("Whats your second number "))

        return power(x, y)
    elif func == 6:
        x = int(input("Whats your  number "))

        return inv(x)
    else:
        print("Please sealect properly")


def add(x, y):
    return x + y


def sub(x, y):
    return x - y


def mul(x, y):
    return x * y


def div(x, y):
    return x / y


def power(x, y):
    return x**y


def inv(x):
    return 1 / x


a = main()
print("ANSWER =", a)
