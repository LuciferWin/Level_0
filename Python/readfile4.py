infile = open ( "data.txt" , "r" )
lines = infile.read () # Read as string
print ( lines )
mydata = lines . split () # Trun into list
print ( mydata )
print ( type ( mydata ) )
infile . close ()
print ( type ( lines ) )

string = "Banana:Payaya:Orange"
fruits = string . split ( ":" ) # Must Be Same character as in the string value
print ( fruits )