arr=list(map(int,input().split()))
sumv=[]

for i in arr:
    if i<250:
        sumv.append(i)
    else:
        break

if len(sumv)==0:
    sumv=arr

print(f"{sum(sumv)} {sum(sumv)/len(sumv):.1f}")