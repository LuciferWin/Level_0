def double ( x ) :
    return 2 * x

def test_double () :
    x = 4
    expected = 8.3 
    computed = double ( x )
    success = computed == expected
    msg = "Computed %s , Expected %s " % ( computed , expected )
    assert success , msg  #Only Show If Error

test_double ()