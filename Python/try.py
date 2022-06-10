temp = input ( "Enter Fahrenheit Degree : " )
try :
    Fdgree = float ( temp )
    Cdgree = ( Fdgree - 32 ) * 5 / 9
    print ( Fdgree , "F = " , Cdgree , " C" )
except :
    print ( "Input Error !" )