temps = { "Osolo" : 13 , "London" : 14.7 , "Paris" : 15.2 }
print ( type ( temps ) )
print ( "Temperatue of London : %s !" % temps ['London'] )
print ( "Temperatue of Osolo : %s !" % temps ['Osolo'] )
print ( temps . keys () )
print(temps.values())
for key in temps :
    print ( key , temps [ key ] )

mydict = dict ()
mydict [ "key1" ] = "Yangon"
print ( mydict )

for city in sorted ( temps ) :
    print ( city , temps [ city ] )
    
temps [ "Yangon" ] = 35
print ( temps )
temps [ "Osolo" ] = 33
print ( temps ["Osolo"] )
del temps ["London"]
print ( temps )

if "Yangon" in temps :
    print ( temps ["Yangon"])
else:
    print("Yangon is not in temp!")
    
# Pass By Reference
t1 = temps
t1 [ "Mandalay" ] = 36
print ( temps )
print ( t1 )

# Pass By Value
t2 = temps . copy () 
t2 [ "Mogok" ] = 24
print ( t2 )
print ( temps )
