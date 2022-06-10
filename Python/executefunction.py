formula = input ( "Enter a function including x : " )
code = """def f (x) :
            return %s""" %formula
exec ( code )
x = int ( input ( "Enter Value of x : " ) )
print ( f ( x ) )