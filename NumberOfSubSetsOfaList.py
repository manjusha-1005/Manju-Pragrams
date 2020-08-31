n=int(input('enter number'))
a=list()
u=list()


for i in range(0,n):
    i=int(input('enter numbers'))
    a.append(i)
for i in range(2**n):
    
    for j in range(n):
        if i&(1<<j)==(1<<j):
            
            
            u.append(a[j])
    
    
print(u)
