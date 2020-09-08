l=int(input("enter number"))
a=[]
for m in range(l):
    v=int(input("enter number"))
    a.append(v)
k=int(input('enter number'))
b=[]
for p in range(k):
    b.extend(a)
n=len(b)
max=0
for i in range(n):
    sum=0
    for j in range(i,n,1):
        sum=sum+b[j]
        if sum>max:
            max=sum
print(max)
