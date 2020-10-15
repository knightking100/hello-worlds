class Hello:
  
    def __init__(self, say):
      self.say = say
    
    def iamsay(self):
      print("say : %s" %(self.say))

def main():
    h = new Hello("Hello World")
    h.iamsay()

if __name__ == "__main__":
    main()
