# Initial Template for Python 3
import math


def floorSqrt(x):
    return int(x**(1/2))


def main():
    T = int(input())
    while(T > 0):

        x = int(input())

        print(floorSqrt(x))

        T -= 1


if __name__ == "__main__":
    main()
