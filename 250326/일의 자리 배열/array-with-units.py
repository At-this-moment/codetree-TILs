l=list(map(int,input().split()))
for i in range(8):
    n=(l[-2]+l[-1])%10
    l.append(n)

print(' '.join(map(str,l)))