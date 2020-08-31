n=int(input('enter number'))
i=int(input('enter which bit to check'))
x=1<<(i-1)
if(n&x):
    print('set')
else:
    print('Not Set')
