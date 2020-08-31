x=5
sum=0
count=0
m=int(input('enter range'))
a=[]

n=0
for p in range(m):
    p=int(input('enter number'))
    a.append(p)
    b=len(a)
    
for i in range(b):
    sum=sum+a[i]
    if sum>x:
        sum=a[i]
        
        count=count+1
        
        
    else:
        sum=sum+a[i]
        if i==b-1:
            n=n+1
            break
        
        
    
    
        
    
print(count+n)
