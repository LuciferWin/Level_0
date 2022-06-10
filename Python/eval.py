s = "4 + 6"
r = eval ( s )
print ( r )

s = "[ 1 , 2 , 3 ] + [ 4 , 5 ]"
print ( type ( r ) )
r = eval ( s )
print ( r )

s = " 'Hello World!' "
print ( type ( s ) )
r = eval ( s ) # r = Hello World
print ( r )

s = "r = 1 + 1" # string Statement
exec ( s )
print ( r )