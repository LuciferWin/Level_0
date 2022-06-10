###########################################################
print ( "Number From 10 to 100 : " )
for num in range ( 10 , 101 ) :
    for i in range ( 2 , num ) :
        if num % i == 0 :
            j = num / i 
            print ( "%d equals %d * %d" % ( num , i , j ) )
            break
    else :
            print ( num , " is Prime !" )