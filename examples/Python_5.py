#Prints "Hello World" using the TkInter GUI

import tkinter

main = tkinter.Tk()
main.title("Hello World")
main.geometry('300x100')
main.wm_withdraw

helloWorldLabel = tkinter.Label(main, text="Hello world")
helloWorldLabel.pack()

main.mainloop()
