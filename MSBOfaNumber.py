x=int(input())
y=bin(x)
z=y[2:]
a=len(z)
b=1<<(a-1)
if x&b:
    print("MSB is",a)
else:
    a=a-1



# Alternate Code

x=int(input())
y=bin(x)
z=y[2:]
a=len(z)-1
print(a)
