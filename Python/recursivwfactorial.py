def factorial ( n ) :
    if n == 0 : # 0! = 1
        return 1 
    else :
        return n * factorial ( n - 1 )
    
def main () :
    print ( "0! : " , factorial ( 0 ) )
    print ( "1! : " , factorial ( 1 ) )
    print ( "2! : " , factorial ( 2 ) )
    print ( "3! : " , factorial ( 3 ) )
    print ( "4! : " , factorial ( 4 ) )
    print ( "5! : " , factorial ( 5 ) )
    print ( "6! : " , factorial ( 6 ) )
    print ( "7! : " , factorial ( 7 ) )
    print ( "8! : " , factorial ( 8 ) )
    print ( "9! : " , factorial ( 9 ) )
    print ( "10! : " , factorial ( 10 ) )
    print ( "11! : " , factorial ( 11 ) )
    print ( "12! : " , factorial ( 12 ) )
    print ( "13! : " , factorial ( 13 ) )
    print ( "14! : " , factorial ( 14 ) )
    print ( "15! : " , factorial ( 15 ) )

main ()