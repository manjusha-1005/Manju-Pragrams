x=5
sum=0
count=0
a=[1,2,3,1,2,4,5,3,2]
b=len(a)
n=0
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
