print ( "Enter 20 Float Numbers : " )
data = []
i = 0
sum = 0
while i < 20 :
    numbers = float ( input ())
    data.append ( numbers )
    sum += data [i]
    i += 1
max = data [0]
min = data [0]
count = 1
while count < 20 :
    if data [ count ] > max :
        max = data [ count ]
    if data [ count ] < min  :
        min = data [ count ]
    count += 1
print ( "Maximum : " , max )
print ( "Minimum : " , min )
print ( "Sum : " , sum )
print ( "Average : " , sum / 20 )