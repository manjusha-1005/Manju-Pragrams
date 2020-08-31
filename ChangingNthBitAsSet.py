n=int(input('enter number'))
x=int(input('enter which bit to change'))
y=n|(1<<(x-1))
print(y)
