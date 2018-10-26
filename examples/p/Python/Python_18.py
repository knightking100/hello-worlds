import string, os
import numpy as np
from time import sleep

letters = list(string.ascii_lowercase)
message = list('aaaaa aaaaa')
desired_message = list('hello world')

while message != list('hello world'):
    for i in range(len(message)):
        while message[i] != desired_message[i]:
            letter = letters[np.random.randint(0, len(letters)-1)]
            message[i] = letter
            print(''.join(message))
            sleep(0.1)
