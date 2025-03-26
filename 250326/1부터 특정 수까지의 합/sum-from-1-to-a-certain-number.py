def sum(n):
    total=0
    for i in range(1,n+1):
        total+=i
    result=total//10
    print(result)


n=int(input())
sum(n)