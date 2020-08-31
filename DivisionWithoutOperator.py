dividend=int(input('enter the number'))
divisor=int(input('enter the number'))
q=0
var=0
for i in range(31,0,-1):
    if (var+divisor<<i)<=dividend:
        var=var+divisor<<i
        q=q|(1<<i)
    print(q)
