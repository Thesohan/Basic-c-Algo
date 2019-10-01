a=list(map(int,input().split(" ")))
a.sort()
# print(a)
current=a[0]
count={}
flag=0
print(a)
for i in a:
	if(current==i):
		flag+=1
		print(i)
		count[i]=flag
		
	else:
		current=i
		count[i]=flag
		flag=0

print(count)
