a=[]
n=int(input('enter number'))
for d in range(n):
    c=int(input('enter number'))
    a.append(c)
p=0
k=0
x=int(n/2)
for i in range(0,x):
    p=p+a[i]
for j in range(x+1,n):
    k=k+a[j]
if p==k:
    print(x+1)
else:
    print(-1)
