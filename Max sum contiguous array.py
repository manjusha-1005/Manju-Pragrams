n=int(input("enter number"))
a=[]
for p in range(n):
    b=int(input("enter number"))
    a.append(b)
max=0
for i in range(n):
    sum=0
    for j in range(i,n,1):
        sum=sum+a[j]
        if sum>max:
            max=sum
print(max)
