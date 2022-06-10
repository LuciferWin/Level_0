#Positional Arguments ( Parameters )
def yFun ( t , v0 ) :
    return v0 * t + 0.5 * g * t ** 2

def yFun2 ( t ) :
    global v0 # this code change the gloal v0 value
    v0 = 7 # loval variable is First Prority
    return v0 * t + 0.5 * g * t ** 2

g = 9.81 # global variable
v0 = 6 # global variable
y1 = yFun ( 0.1 , 6 )
y2 = yFun ( 0.1 , v0 = 6 )
y3 = yFun ( t = 0.1 , v0 = 6 )
y4 = yFun ( v0 = 6 , t = 0.1 )
y5 = yFun2 ( 0.1 )
print ( y1 , y2 , y3 , y4 , y5 )
print ( v0 )