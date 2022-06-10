infile = open ( "data.txt" , "r" )
while True :
    line = infile.readline () # read as string
    print ( line )
    if not line :
        break
infile.close ()
print ( type ( line ) )