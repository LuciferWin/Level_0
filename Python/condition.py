# if
# if True or some value
# if False or 0 or no value
var1 = 100
if var1 > 200 :
    print ( "Var1 has some value!" )
    
var2 = 0.00004 # False / Null / 0 / " " / ' '
if var2 :
    print ( "Var2 has some value!" )
    
print ( 'GoodBye!')

# if else
var3 = float ( input ( "Enter Var3 : " ) )
if var3 > 100 :
    print ( "Var3 is greater than 100!" )
else :
    print ( "var3 is less than or equal 100!" )
    
    
# nested if
var4 = float ( input ( 'Enter Any Number : ' ) )
if var4 < 200 :
    print ( 'var4 is less than 200' )
    if var4 == 150 :
        print ( 'var4 is 150' )
    elif var4 == 100 :
        print ( 'var4 is 100' )
    elif var4 == 50 :
        print ( 'var4 is 50' )
    elif var4 < 50 :
        print ( 'var4 is less than 50' )
else :
    print ( 'Var4 is Greater than or equal 200' )