# print ( 'Hello' , end = '\t')
# print ( 'Hi' )
'''
1 = "[0001]"
11 = "[0011]"
111 = "[0111]"
1111 = "[1111]"
'''
num = int ( input ( "Enter A Number Rainge from 0 to 9999 : ") ) 
if num < 0 :
    num = 0
if num > 9999 :
    num = 9999
    
print ( end = "[")
digit = num // 1000 # thousand digit or 0
num %= 1000 # remainder for hundred digit
print ( digit , end = "" )

digit = num // 100 # hundred digit or 0
num %= 100 # remainder for ten digit
print ( digit , end = "" )

digit = num // 10 # ten digit or 0
num %= 10 # remainder for unit digit
print ( digit , end = "" )
print ( num , end = "]\n" )