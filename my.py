def f(x):
    return sin(x)
X=[x/10.0 for x in range(10000)]
from math import *
fx=open('xdata.txt', 'w')
fy=open('ydata.txt', 'w')
for x in X:
    y=f(x)
    fx.write(str(x)+'\n')
    fy.write(str(y)+'\n')
fx.close()
fy.close()
