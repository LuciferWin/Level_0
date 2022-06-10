##########################
from cProfile import label
from ctypes import c_uint
import imp
from tkinter import *
from turtle import width
root = Tk ()
C_Entry = Entry ( root , width = 4 )
C_Entry.pack ( side = "left" )

C_Unit = Label ( root , text = "Celsius" )
C_Unit.pack ( side = "left")

def compute () :
    C = float ( C_Entry.get () )
    F = float ( 9.0 / 5 ) * C + 32
    F_label.configure ( text = "%g" % F )
    
compute = Button ( root , text = "  is  " , command = compute )
compute.pack ( side = "left" , padx = 4 )
F_label = Label ( root , width = 4 )
F_label.pack ( side = "left" )

F_Unit = Label ( root , text = "Fahrenheit  " )
F_Unit.pack ( side = "left")

root.mainloop ()
