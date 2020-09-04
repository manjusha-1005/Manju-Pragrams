
a,b,c=[int(x) for x in input().split()]

x=[]
y=[]
for i in range(a):
    d=int(input())
    x.append(d)
for j in range(b):
    e=int(input())
    y.append(e)
arr=x+y
arr.sort()
print(arr[int(c-1)])
