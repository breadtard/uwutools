from tkinter import *

expwession = ""
 
 
def press(nyum):
    global expwession
 
    expwession = expwession + str(nyum)
 
    equation.set(expwession)
 
 
def equalpress():
    try:
 
        global expwession
 
        total = str(eval(expwession))
 
        equation.set(total)
 
        expwession = ""
 
    except:
 
        equation.set(" ewwow ")
        expwession = ""
 
 
def clear():
    global expwession
    expwession = ""
    equation.set("")

 
if __name__ == "__main__":
    UwUgui = Tk()

    #here you can set the title of the window
    UwUgui.title("UwUCalc")
 
    #here you can make the window bigger
    UwUgui.geometry("300x220")
 
    equation = StringVar()

    expwession_field = Entry(UwUgui, textvariable=equation)
 
    #grids
    expwession_field.grid(columnspan=6, ipadx=70)
 
    buttwon1 = Button(UwUgui, text=' 1 ',
                    command=lambda: press(1), height=2, width=7)
    buttwon1.grid(row=2, column=0)
 
    buttwon2 = Button(UwUgui, text=' 2 ',
                    command=lambda: press(2), height=2, width=7)
    buttwon2.grid(row=2, column=1)
 
    buttwon3 = Button(UwUgui, text=' 3 ',
                    command=lambda: press(3), height=2, width=7)
    buttwon3.grid(row=2, column=2)
 
    buttwon4 = Button(UwUgui, text=' 4 ',
                    command=lambda: press(4), height=2, width=7)
    buttwon4.grid(row=3, column=0)
 
    buttwon5 = Button(UwUgui, text=' 5 ',
                    command=lambda: press(5), height=2, width=7)
    buttwon5.grid(row=3, column=1)
 
    buttwon6 = Button(UwUgui, text=' 6 ',
                    command=lambda: press(6), height=2, width=7)
    buttwon6.grid(row=3, column=2)
 
    buttwon7 = Button(UwUgui, text=' 7 ',
                    command=lambda: press(7), height=2, width=7)
    buttwon7.grid(row=4, column=0)
 
    buttwon8 = Button(UwUgui, text=' 8 ',
                    command=lambda: press(8), height=2, width=7)
    buttwon8.grid(row=4, column=1)
 
    buttwon9 = Button(UwUgui, text=' 9 ',
                    command=lambda: press(9), height=2, width=7)
    buttwon9.grid(row=4, column=2)
 
    buttwon0 = Button(UwUgui, text=' 0 ',
                    command=lambda: press(0), height=2, width=7)
    buttwon0.grid(row=5, column=0)
 
    pwus = Button(UwUgui, text=' + ',
                command=lambda: press("+"), height=2, width=7)
    pwus.grid(row=2, column=3)
 
    minyus = Button(UwUgui, text=' - ',
                command=lambda: press("-"), height=2, width=7)
    minyus.grid(row=3, column=3)
 
    muwtipwy = Button(UwUgui, text=' * ',
                    command=lambda: press("*"), height=2, width=7)
    muwtipwy.grid(row=4, column=3)
 
    divide = Button(UwUgui, text=' / ',
                    command=lambda: press("/"), height=2, width=7)
    divide.grid(row=5, column=3)
 
    equaw = Button(UwUgui, text=' = ',
                command=equalpress, height=2, width=7)
    equaw.grid(row=5, column=2)
 
    cweaw = Button(UwUgui, text='Clear',
                command=clear, height=2, width=7)
    cweaw.grid(row=5, column='1')
 
    Decimal= Button(UwUgui, text='.',
                    command=lambda: press('.'), height=1, width=7)
    #start
    UwUgui.mainloop()
