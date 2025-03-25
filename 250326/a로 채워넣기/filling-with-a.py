a=input()
newa=list(a)
newa[1]='a'
newa[-2]='a'
print(''.join(map(str,newa)))