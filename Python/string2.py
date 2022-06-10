str4 = "    This is sample string for strip     \r\n"
print ( len ( str4 ) )
print ( str4 )
str5 = str4 . strip ()
print ( str5 )
print ( len ( str4 . strip () ) )
str6 = str4 . lstrip ()
print ( str6 )

str3 = "Berlin: 3.45 C at 4 PM"
myList = str3 . split ( ":" ) [ 1 ] . split () [ 0 ]
print ( myList )

my_list = str3 . split ()
print ( my_list )

s = "This is a string"
print ( s [ 4 : -6 ] )

str1 = s . replace ( s [ s . find ( "a" ) : ] , " My Car" )
print ( str1 )

new_string = s . replace ( "string" , "table" )
print ( new_string , s )

myString = s . split ()
result = "_" . join ( myString )
print ( result )

check = "This" in s
print ( check )

index = s . find ( "g" )
print ( index )