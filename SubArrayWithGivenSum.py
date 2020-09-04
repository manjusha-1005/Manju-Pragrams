a=[]
k=int(input())
n=int(input())
sum=0
for i in range(n):
    b=int(input())
    a.append(b)
for i in range(n):
    sum=a[i]
    for j in range(i+1,n):
        sum=sum+a[j]
        if sum==k:
            print('sum found between indexes:',i,j)
            
        elif sum>k or j==n:
            break
        j=j+1
            
            
