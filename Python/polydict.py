# P ( x ) = -1 + x^2 + 3*x^7

p = { 0 : -1 , 2 : 1 , 7 : 3 }

def eval_poly_dict ( poly , x ) :
    sum = 0.0
    for power in poly :
        sum += poly [ power ] * x ** power
    return sum

sum = eval_poly_dict ( p , 2 )
print ( "P ( 2 ) is :" , sum )

sum = eval_poly_dict ( p , 1 )
print ( "P ( 1 ) is :" , sum )