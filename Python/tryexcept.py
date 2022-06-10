import sys
try :
    C = float ( sys . argv [ 1 ] )
except IndexError :
    print( "You Forgeet to provide an argument after file name !" )
    sys . exit ( 1 )
except ValueError :
    print ( "C value must be floating point or number , not string or character !" )
    sys . exit ( 1 )
F = ( 9.0 / 5 ) * C + 32
print ( "%s C is %s" % ( C, F ) )
