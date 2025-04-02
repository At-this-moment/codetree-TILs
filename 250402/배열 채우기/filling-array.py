nums=list(map(int,input().split()))
result=[]

for num in nums:
    if num==0:
        break
    result.append(num)

result.reverse()
print(*result)