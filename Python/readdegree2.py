infile = open ( "deg2.dat" , "r" )
temp = {}
for line in infile . readlines () :
    c , t = line . split ()
    c = c [ 0 :  ]
    temp [ c ] = float ( t )
print ( temp )
for city in sorted ( temp ) :
    print ( city , temp [ city ] )