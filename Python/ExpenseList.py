# date , title , amount
# (1) . Add expense
# (2) . show Expnese List
import sys
import json

class Expense :
    def __init__ ( self , date , title , amount ) :
        self . date = date
        self . title = title
        self . amount = amount
        
def askExpense () :
    date = input ( "Enter Date : " )
    title = input ( "Enter Title : " )
    amount = input ( "Enter Amount : " )
    expense = Expense ( date , title , amount )
    addExpnese ( expense . __dict__ )
    
def addExpnese ( expense ) :
    infile = open ( "ExpenseList.json" , "r" )
    lines = infile . readlines ()
    infile . close ()
    myJson = json . loads ( lines [ 0 ] )
    myJson [ "ExpenseList" ] . append ( expense )
    file = open ( "ExpenseList.json" , "w" )
    file . write ( json. dumps ( myJson ) )
    file .close ()

def showExpnese () :
    file = open ( "ExpenseList.json" , "r" )
    lines = file . readlines ()
    file . close ()
    myJson = json . loads ( lines [ 0 ] )
    print ( "Date \t\t Title \t\t Amount" )
    for expense in myJson [ "ExpenseList" ] :
        print ( "%s \t %s \t %s" % ( expense [ "date" ] , expense [ "title" ] , expense [ "amount" ] )  )
        
def main () :
    print ( "___Please Choose ___" )
    print ( "(1) . Add New Expnese Information" )
    print ( "(2) . Show All Expnese Information" )
    print ( "(3) . Exit From Program" )
    ans = int ( input ( "Enter Your Choice : " ) )
    if ans == 1 :
        askExpense ()
        showExpnese ()
    elif ans == 2 :
        showExpnese ()
    elif ans == 3 :
        print ( "Teminating From Program ....." )
        sys . exit ( 1 )
        
main ()