m=[]

for _ in range(3):
    row=list(map(int,input().split()))
    m.append(row)

for i in range(3):
    for j in range(3):
        print(m[i][j]*3,end=' ')
print()