def extractData ( filename ) :
    infile = open ( filename , "r" )
    infile . readline ()
    infile . readline ()
    months = []
    rainfall = []
    for line in infile :
        # print ( line )
        word = line . split () # split default is space 
        # print ( word )
        months . append ( word [ 0 ] )
        rainfall . append ( float ( word [ 1 ] ) )
    # print ( months )
    # print ( rainfall )
    months = months [ : -1 ]
    annual = rainfall [ -1 ]
    rainfall = rainfall [ : -1 ]
    # print ( months )
    # print ( rainfall )
    return months , rainfall , annual
        
months , rainfall , annual = extractData ( "rainfall.dat" )
sum = 0
for months , value in zip ( months , rainfall ) :
    sum += value
    print ( months , "-" , value )
avg = sum / len ( rainfall )
print ( "Average Rainfall : "  , avg )
print ( "Annual : " , annual )