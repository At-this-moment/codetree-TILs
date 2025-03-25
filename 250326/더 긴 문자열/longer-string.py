t1,t2=input().split()
if len(t1)==len(t2):
    print('same')
elif len(t1)>len(t2):
    print(f"{(t1)} {len(t1)}")
else:
    print(f"{(t2)} {len(t2)}")