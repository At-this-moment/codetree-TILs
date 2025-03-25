n=int(input())
cnt=0

for i in range(1,n):
    if i%2==0 or i%3==0 or i%5==0:
        cnt+=1
print(cnt)