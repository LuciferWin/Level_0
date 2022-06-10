# (1) . Ask Student Information
# (2) . Save In File
# (3) . Show Student List
# (4) . Delete Student Information From List
# CRUD => Create => Read => Update => Delete
# RollNo , Name , Address , Email , Phone
# json = javascript object notation
import sys
import json

class Student :
    def __init__ ( self , rollNo , name , address , email , phone ) :
        self . rollNo = rollNo
        self . name = name 
        self . address = address
        self . email = email
        self . phone = phone

def askStudentInfo () :
    rollNO = input ( "Enter Roll Number : " )
    name = input ( "Enter Name : " )
    address = input ( "Enter Address : " )
    email = input ( "Enter E-mail : " )
    phone = input ( "Enter Phone Number : " )
    student = Student ( rollNO , name , address , email , phone )
    addStudent ( student . __dict__ )
    
    
def addStudent ( student ) :
    # (1) . Open json File
    infile = open ( "StudentList.json" , "r" )
    lines = infile . readlines ()
    infile . close ()
    # (2) . Convert string to json
    myJson = json . loads ( lines [ 0 ] ) # string to json ( dictionary )
    # print ( type ( myJson [ "StudentList" ] ) )
    # print ( myJson )
    # (3) . Add one Student into StudentList
    myJson [ "StudentList" ] . append ( student ) # Add one student info into StudentList List
    # (4) . Convert StudentList json to string and write to file
    file = open ( "StudentList.json" , "w" )
    file . write ( json. dumps ( myJson ) ) # json { dictionary } to string
    file .close ()
    
# addStudent ()
# askStudentInfo ()

def showStudentList () :
    file = open ( "StudentList.json" , "r" )
    lines = file . readlines ()
    file . close ()
    myJson = json . loads ( lines [ 0 ] )
    # print ( myJson [ "StudentList" ] )
    print ( "RollNO \t Name \t\t Address \t E-mail \t\t Phone" )
    for student in myJson [ "StudentList" ] :
        print ( "%s \t %s \t %s \t %s \t %s" % ( student [ "rollNo" ] , student [ "name" ] , student [ "address" ] , student [ "email" ] , student [ "phone" ] )  )

def deleteStudent ( rollNo ) :
    file = open ( "StudentList.json" , "r" )
    lines = file . readlines ()
    file . close ()
    myJson = json . loads ( lines [ 0 ] )
    index = 0
    found = False
    for student in myJson [ "StudentList" ] :
        if student [ "rollNo" ] == rollNo :
            found = True
            break
        else :
            index += 1
            
    # print ( index , found)
    if found :
        del myJson [ "StudentList" ] [ index ] # delete one student based on index and found status
        file = open ( "StudentList.json" , "w" )
        file . write ( json. dumps ( myJson ) ) # json { dictionary } to string // updated deleted StudentList
        file .close ()
        print ( "__________One Student Deleted !__________" )
    else :
        print ( "__________Roll Number Not Found !__________" )

# showStudentList ()
# deleteStudent ( "4" )
def main () :
    print ( "___Please Choose ___" )
    print ( "(1) . Add New Student" )
    print ( "(2) . Show Student List" )
    print ( "(3) . Delete One Student By Roll Number" )
    print ( "(4) . Exit From Program" )
    ans = int ( input ( "Enter Your Choice : " ) )
    if ans == 1 :
        askStudentInfo ()
        showStudentList ()
    elif ans == 2 :
        showStudentList ()
    elif ans == 3 :
        rollnum = input ( "Enter Roll Number : " )
        deleteStudent ( rollnum )
        showStudentList ()
    else :
        print ( "Teminating From Program ....." )
        sys . exit ( 1 )
        
main ()