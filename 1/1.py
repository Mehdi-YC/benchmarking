import sys
s = 0
for i in range(int(sys.argv[1])+1):
    #print(i,"->",s)
    s+=(i+i*i^i)%(i+1)
print(s)
#s+=(i+i*i**i)%(i+1)