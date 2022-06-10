from unittest import result


def multiple () :
    operation = "SUM : "
    total = 10 + 20
    return [ operation , total ] 
    #return operation , total   // this is as tuple

result = multiple ()
print ( result )
print ( type ( result ) )

operation , total = multiple ()
print ( operation , total )

def multiple2 () :
    values = dict ()
    values [ "operation" ] = "SUM : "
    values [ "total" ] = 10 + 20
    return values

result = multiple2 ()
print ( result )
print ( type ( result ) )

operation = result [ "operation" ]
total = result [ "total" ]
print ( operation , total )