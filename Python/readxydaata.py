pairs = []
infile = open ( "xy.dat" , "r" )
for line in infile :
    words = line . split () # Split Data Pairs
    for word in words :
        word = word [ 1 : -1 ] # Remove "(" ")"
        x , y = word . split ( "," ) # Split By "," To Get x , y value
        pair = ( float ( x ), float ( y ) ) # Prepare x , y data to tuple type
        pairs . append ( pair )
print ( pairs )