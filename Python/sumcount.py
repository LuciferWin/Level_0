sum = count = 0
while count < 5 :
    val = float ( input ( "Enter A Number : " ) )
    if val < 0 :
        print ( "Negative Numbers Unacceptable , Terminating ..." )
        break
    count += 1
    sum += val
else :
    print ( "Average : " , sum / count )