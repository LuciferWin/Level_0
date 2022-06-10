data = [
        [ 12 , 5 , 78 , 33 ],
        [ 8 , 6 , 12 , 71 ],
        [ 6 , 3 , 33 , 40 ],
        [ 45 , 21 , 63 , 99 ]
       ]

outfile = open ( "Table.dat" , "w" )
for row in data :
    for column in row :
        outfile . write ( "%8.0f" % column )
    outfile . write ( "\n" )
outfile . close ()