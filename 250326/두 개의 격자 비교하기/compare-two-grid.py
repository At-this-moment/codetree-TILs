m1=[]
m2=[]
m3=[]
n,m=map(int,input().split())
for _ in range(n):
    row=list(map(int,input().split()))
    m1.append(row)
for _ in range(n):
    row=list(map(int,input().split()))
    m2.append(row)

for i in range(n):
    row=[]
    for j in range(m):
        if (m1[i][j]==m2[i][j]):
            row.append(0)
        else:
            row.append(1)
    m3.append(row)

for row in m3:
    print(*row)