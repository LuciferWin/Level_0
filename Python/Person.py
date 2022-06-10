class Person :
    def __init__ ( self , name , office = None , mobile = None , private = None , email = None ) :
        self . name = name
        self . office = office
        self . mobile = mobile
        self . private = private
        self . email = email
    def add_mobile_phone ( self , mobile ) :
        self . mobile = mobile
    def add_office_phone ( self , office ) :
        self . office = office
    def add_private_phone ( self , private ) :
        self . private = private
    def add_email ( self , email ) :
        self . email = email
    def dump ( self ) :
        s = self . name + "\n"
        if self . mobile is not None :
            s += "Mobile Phone : " + self . mobile + "\n"
        if self . office is not None :
            s += "Office Phone : " + self . office + "\n"
        if self . private is not None :
            s += "Private Phone : " + self . private + "\n"
        if self . email is not None :
            s += "Email : " + self . email + "\n"
        print ( s )
    def __str__ ( self ) :
        return "Name : " + self . name + " \nPhone : " + self . mobile
p1 = Person ( "Alex Denny" , "09972669495" )
p1 . add_mobile_phone ( "09750341177" )
# p1 . add_private_phone ( "09972665555" )
p1 . add_email ( "luciferwin0@gmail.com" )
print ( p1 . __dict__ )
p1 . dump ()
print ( p1 )