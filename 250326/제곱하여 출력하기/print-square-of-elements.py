n=int(input())
nl=list(map(int,input().split()))

nlsq=[x**2 for x in nl]
for i in nlsq:
    print(i,end=' ')