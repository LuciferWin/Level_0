# second to hr : min : sec
# sec 60 = 1 min
# min 60 = 1 hr = 3600 sec
# sec => hr : min : sec
# 1 : divide sec with 3600 using // operator get hr
# 2 : divide sec with 3600 using % operator get sec to calculate minutes :
# 3 : divide remaining sec in step2 with 60 using // operator to get minutes
# 4 : divide ramaining sec in step2 with 60 using % operator to get sec
# 4000 sec => 3600 => // => %
sec = int ( input ( "Enter Seconds To Calculate HR:MIN:SEC : " ) )
hr = sec // 3600
sec = sec % 3600
min = sec // 60
second = sec % 60
print ( hr , ' HR : ' , min , ' MIN : ' , second , ' SEC')