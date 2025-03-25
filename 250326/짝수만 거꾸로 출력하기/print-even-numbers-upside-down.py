n=int(input())
even=[]

for i in range(n):
    nl=list(map(int,input().split()))
    for num in nl:
        if num%2==0:
            even.append(num)        

even.sort()
print(' '.join(map(str,even)))