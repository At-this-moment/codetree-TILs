m=[]
sum=0
for _ in range(4):
    row=list(map(int,input().split()))
    m.append(row)

for i in range(4):
    for j in range(4):
        if i>=j:
            sum+=m[i][j]

print(sum)