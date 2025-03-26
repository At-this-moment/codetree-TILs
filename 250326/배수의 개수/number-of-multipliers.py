nl=[]

for i in range(10):
    n=int(input())
    nl.append(n)
    

thr=0
fiv=0

for i in nl:
    if i%3==0:
        thr+=1
    if i%5==0:
        fiv+=1
print(thr, fiv)