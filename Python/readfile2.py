# ReadLines

infile = open ( "data.txt" , "r" )
lines = infile.readlines () # read all data into list
print ( lines )
print ( type ( lines ) )
sum = 0
for line in lines :
    sum += float ( line )
mean = sum / len ( lines )
print ( "Total : " , sum , "\nMean : " , mean )
infile.close ()