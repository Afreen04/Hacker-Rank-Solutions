hashStr = {}

"""
if key in d:
        d[key] += 1
    else:
        d[key] = 1"""

def create_map(key):
    if key in hashStr:
        hashStr[key] += 1
    else:
        hashStr[key] = 1

def return_map(key):
    if key in hashStr:
        return hashStr[key]
    else:
        return 0
        
n = int(raw_input())
for i in xrange(n):
    inp = raw_input()
    create_map(inp)
    
q = int(raw_input())
for i in xrange(q):
    print return_map(raw_input())
