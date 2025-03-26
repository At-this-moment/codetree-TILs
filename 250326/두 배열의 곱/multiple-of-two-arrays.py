m1=[]
m2=[]

for _ in range(3):
    row=list(map(int,input().split()))
    m1.append(row)
input()
for _ in range(3):
    row=list(map(int,input().split()))
    m2.append(row)

for i in range(3):
    for j in range(3):
        print((m1[i][j])*(m2[i][j]),end=' ')
    print()