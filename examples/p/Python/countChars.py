name = "thisisapythondcodeaddedtogithub"
countDict = dict()

for char in name:
    count = name.count(char)  #counts every chracter
    countDict[char] = count
    
print(countDict)
