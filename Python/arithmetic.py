# + , - , * , / , % , ** , //
num1  = int ( input ( "Enter First Number : " ) )
num2  = int ( input ( "Enter Second Number : " ) )
if num2 != 0 :
    sum = num1 + num2
    sub = num1 - num2
    mul = num1 * num2
    div = num1 / num2
    mod = num1 % num2
    expo = num1 ** num2
    floordiv = num1 // num2
    print ( "num1 : " , num1 )
    print ( "num2 : " , num2 )
    print ( "Sum : " , sum )
    print ( "Sub : " , sub )
    print ( "Multi : " , mul )
    print ( "Division : " , div )
    print ( "Modulus : " , mod )
    print ( "Expo : " , expo )
    print ( "FloorDivison : " , floordiv )
print ( 'End of Program!' )