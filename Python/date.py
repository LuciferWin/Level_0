from cgi import print_arguments


class Date :
    def get_date ( self ) :
        return "30.3.2022"
class Time ( Date ) :
    def get_time ( self ) :
        return "6:44:30 PM"

dt = Date ()
print ( "Call Date Method From Date Object " , dt . get_date () )

tm = Time ()
print ( "Call Time Method From Time Object " , tm . get_time () )
print ( "Call Date Method Form Time Object " , tm . get_date () )