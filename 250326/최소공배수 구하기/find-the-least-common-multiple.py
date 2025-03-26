def lcm(n,m):
    divisor1=[]
    divisor2=[]
    for i in range(1,n+1):
        if n%i==0:
            divisor1.append(i)

    for i in range(1,m+1):
        if m%i==0:
            divisor2.append(i)

    common=set(divisor1)&set(divisor2)
    gcd=max(common)

    lcm=int((n*m)/gcd)

    # print(divisor1)
    # print(divisor2)
    # print(gcd)
    print(lcm)

n,m=map(int,input().split())

lcm(n,m)