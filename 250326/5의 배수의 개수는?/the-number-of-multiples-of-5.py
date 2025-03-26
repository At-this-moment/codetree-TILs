m=[]

for _ in range(4):
    row=list(map(int,input().split()))
    m.append(row)
cnt=0
for i in range(4):
    for j in range(4):
        if (m[i][j])%5==0:
            cnt+=1
print(cnt)