class Example :
    def __init__ ( self ) :
        print ( "Instant Created" )
    def __call__ ( sefl ) :
        print ( "Call From Object" )

e = Example ()
e ()