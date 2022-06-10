max = int ( input ( "Display Prime To What Value : " ) )
value = 2 
while value <= max :
    is_prime = True
    factor = 2
    while factor < value / factor :
        if value % factor == 0 :
            is_prime = False
        factor += 1
    if is_prime :
        print ( value , end = " " )
    value += 1