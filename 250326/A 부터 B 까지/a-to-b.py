n=input()
l=n.split()
a=int(l[0])
b=int(l[1])
i=a

while i<=b:
    print(i, end=' ')
    if i%2==1:
        i*=2
    else:
        i+=3