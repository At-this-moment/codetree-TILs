n=int(input())
sco=list(map(float,input().split()))

grade=(sum(sco)/n)

print(f"{grade:.1f}")
if grade>=4.0:
    print('Perfect')
elif grade>=3.0:
    print('Good')
else:
    print('Poor')