count = 0
sum = 0
print ( "Enter Any Negative Value to Exit !")
num = float ( input ( "Enter Non Negatie Float Numbers : " ) )
max = num
min = num
if num >= 0 :
    sum += num
    count += 1
while True :
    num = float ( input ( "Enter Non Negative Float Numbers : " ) )
    if num >= 0 :
        if num > max :
            max = num
        if num < min :
            min = num
        count += 1
        sum += num 
    else :
        print ( "Maximum : " , max )
        print ( "Minimum : " , min )
        print ( "Sum : " , sum )
        print ( "Average : " , sum / count)
        break