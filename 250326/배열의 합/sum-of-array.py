m=[]

for _ in range(4):
    row=list(map(int,input().split()))
    m.append(row)

for i in range(4):
    print(sum(m[i]))