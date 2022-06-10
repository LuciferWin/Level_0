import random
class Animal :
    def __init__ ( self , name ) :
        self . name = name 
    def eat ( self , food ) :
        print ( "%s eats %s" % ( self . name , food ) )

class Dog ( Animal ) :
    def __init__ ( self , name ) :
        super ( Dog , self ) . __init__ ( name ) 
        self . breed = random . choice ( [ "Golden Retriver" , "German Sherphed" , "Pit Bull" , "Dobermin" ] )
    def fetch ( self , thing ) :
        print ( "%s is a %s and fetch %s" % ( self . name , self . breed , thing ) )
    def show_affection ( self ) :
        print ( "{0} wags tail" . format ( self . name ) )

class Cat ( Animal ) :
    def play ( self ) :
        print ( "%s paly with Goat Kyar" % ( self . name ) )
    def show_affection ( self ) :
        print ( "{0} purrs" . format ( self . name ) )
        
d = Dog ( "Aung Nat" )
d . eat ( "Beef Soup" )
d . fetch ( "Toy Bone" )

c = Cat ( "Meow" )
c . eat ( "Fried Fish" )
c . play ()

d . show_affection ()
c . show_affection ()