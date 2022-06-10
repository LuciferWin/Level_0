height = 3
row = 0
while row < height :
    count = 0 
    while count < height - row :
        print ( end = " " )
        count += 1
    count = 0
    while count < row + 1 :
        print ( end = "*" )
        count += 1
    print ()
    row += 1
height = 2
row = 0
while row < height :
    count = 4 
    while count > height - row :
        print ( end = " " )
        count -= 1
    while 0 < count :
        print ( end = "*" )
        count -= 1
    print ()
    row += 1





