#prints hello world letter by letter on windows system
import os,time

def slowhello():
	s = 'Hello World!'
	for i in range(len(s)):
		os.system('cls')
		print (s[:i+1])
		time.sleep(0.5)
slowhello()
