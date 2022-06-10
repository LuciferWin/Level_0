from math import *
import sys
def is_prime ( n ) :
    trial_factor = 2
    root = sqrt ( n )
    while trial_factor <= root :
        if n % trial_factor == 0:
            return False
        trial_factor += 1
    return True
print ( "1858544483 is Prime ? " , is_prime ( 1858544483 ) )