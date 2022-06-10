sum = 0
done = False
while not done :
    val = int ( input ( "Enter Positive Number to add , 999 to Exit :" ) )
    if val < 0 :
        print ( "Negative Value " , val , " Not Count !" )
        continue
    if val != 999 :
        print ( "Tallying : " , val )
        sum += val
    else :
        break
print ( "Sum : " , sum )