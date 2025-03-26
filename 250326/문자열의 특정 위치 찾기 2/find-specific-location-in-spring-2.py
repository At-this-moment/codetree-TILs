fl=['apple','banana','grape','blueberry','orange']

a=input()
cnt=0
for i in range(5):
    if fl[i][2]==a or fl[i][3]==a:
        print(fl[i])
        cnt+=1

print(cnt)