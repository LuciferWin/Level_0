print ( "Please Enter Four Integer Values : " )
num1 = int ( input ( "Enter num 1 : " ) )
num2 = int ( input ( "Enter num 2 : " ) )
num3 = int ( input ( "Enter num 3 : " ) )
num4 = int ( input ( "Enter num 4 : " ) )
max = num1
if num2 > max :
    max = num2
if num3 > max :
    max = num3
if num4 > max :
    max = num4
print ( "Maximum Number is : " , max )