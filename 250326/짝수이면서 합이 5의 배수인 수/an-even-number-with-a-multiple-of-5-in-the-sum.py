def magicN(n):
    return n%2==0 and (((n//10)+(n%10))%5==0)

n=int(input())
cnt=0

if magicN(n):
    print('Yes')
else:
    print('No')