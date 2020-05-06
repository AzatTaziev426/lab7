import numpy as np
import matplotlib.pyplot as plt
fig1=plt.figure()
ax1=fig1.add_subplot()
data=np.loadtxt("load.txt")
x = data[:,0]
y = data[:,1]

ax1.plot(x ,y,)
ax1.set_title('1: y(x)')

fig2 = plt.figure()
ax2=fig2.add_subplot()
data=np.loadtxt("load1.txt")
x = data[:,0]
y = data[:,1]
ax2.plot(x ,y)
ax2.set_title('1: yy(x)')



plt.show() 
