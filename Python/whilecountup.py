count = 0
entry = 'Y'

while entry != 'N' and entry != 'n' :
    print ( count )
    entry = input ( " Enter 'Y' to Continue or 'N' to Exit : " )
    if entry == 'Y' or entry == 'y' :
        count += 1
    elif entry != 'N' and entry != 'n' :
        print ( entry , " is not a valid Entry !" )
print ( "______________________End Of Program______________________" )