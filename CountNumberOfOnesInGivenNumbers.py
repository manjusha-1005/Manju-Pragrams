n=int(input("enter number"))
count=0
while n!=0:
    n=n&(n-1)
    count=count+1
print(count)
