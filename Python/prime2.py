print ( "Prime Numbers from 2 to 99 : " )
i = 2
j = 2
while i < 100 : # 2 to 99
    j = 2 
    while j < ( i / j ) : # 12 , 2 -> i / j => 12 / 2 => 6
        if not ( i % j ) : break # i % j = 0 , 0 is False  and not (False) is True
        j += 1 
    if j > ( i / j ) : print ( i , " is prime !" )
    i += 1