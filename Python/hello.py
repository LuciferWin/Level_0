from turtle import width


print ( "Hello World !" )
age = 56 
distance = 10.86 
print ( age )
print ( distance )
print ( age , distance )
print ( type ( age ) , type ( distance ) )
length = 12 
width = 20 
area = length * width
print ( "Area is : " , area )
str = "Hello World!"
print ( str )
print ( str [0:-1] )
print ( str [0:5] )
print ( str [6:-1] )
print ( str * 4 )
print ( str + " From The Earth." )
list = [ 'abc' , 678 , 4.67 , "Welcome From Konoha!" ]
tinyList = [ 123 , 'john' ]
print ( list ) 
print ( list [ 3 ] )
print ( list [ 2 : ] )
print ( list [ 0 : -1 ] )
print ( list + tinyList )
print ( list * 2 )

tinyList [ 0 ] = 998
print ( tinyList )
tuple = ( 'abcd' , 885 , "Lucifer Win Tun" , 55.76 )
print ( tuple )
print ( tuple [0 : -2 ] )
# tuple [1] = "Hello"

dict = { "name":"Lucifer Win" ,
         "Age":"21" ,
         "City":"Yangon" }
print ( dict )
dict [ "Phone" ] = "09-75034117"
print ( dict [ "name" ] )
dict [ 11 ] = 12300
print ( dict [ 11 ] )
print ( dict.items() )
print ( dict.keys () )
print ( dict.values() )
dict [ "hobbies" ] = { 1 : "Programming" , 2 : "Swimming" , 3 : "Cycling" }
print ( dict )
print ( dict [ "hobbies" ] )