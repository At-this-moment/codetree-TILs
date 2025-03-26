nl=[]

while True:
    n=int(input())
    if n==0:
        print('\n'.join(map(str,nl)))
        break
    nl.append(n)