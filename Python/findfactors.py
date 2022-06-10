Max = int ( input ( "Enter Max Number : " ) )
n = 1
while n <= Max :
    factor = 1
    print ( n , end = " : " )
    while factor <= n :
        if n % factor == 0 :
            print ( factor , end = " " )
        factor += 1
    print ()
    n += 1