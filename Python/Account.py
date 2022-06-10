from cgi import print_arguments


class Account :
    def __init__ ( self , name , account_number , initital_amount ) :
        self . name = name
        self . no = account_number
        self . balance = initital_amount
    def deposit ( self , amount ) :
        self . balance += amount
    def withdraw ( self , amount ) :
        self . balance -= amount
    def dump ( self ) :
        print ( " %s : %s \n Balance : %s " % ( self . name , self . no , self . balance ) )
        
a1 = Account ( "Lucifer" , "750341177" , 800000 )
print ( a1 .  __dict__ )
a1 . dump ()
a1 . deposit ( 700000 )
a1 . dump ()
a1 . withdraw ( 500000 )
a1 . dump ()