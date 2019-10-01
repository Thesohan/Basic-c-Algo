l=list(map(int,input("enter array").split(" ")))
x=int(input("enter the pair sum"))
d={}
for i in l:
	d[i]=i
ans=[]
for i in d:
	n=x-i
	if(d.get(n)!=None):
		if((i,n) not in ans and (n,i) not in ans):
			ans.append((i,n))
print(ans)
