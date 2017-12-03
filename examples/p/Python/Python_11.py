#Prints Hello World in binary and a normal string

Hello = "Hello World!"
Bello = ' '.join(format(ord(x), 'b') for x in hello)

print Hello
print Bello
