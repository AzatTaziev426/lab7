import numpy as np
import matplotlib.pyplot as plt
fig1=plt.figure()
ax1=fig1.add_subplot()
data=np.loadtxt("load.txt")
x1 = data[:,0]
y1 = data[:,1]
ax1.plot(x1 ,y1)
ax1.set_title(' y(x)')

fig2 = plt.figure()
ax2=fig2.add_subplot()
data=np.loadtxt("load1.txt")
x2 = data[:,0]
y2 = data[:,1]
ax2.plot(x2 ,y2)
ax2.set_title('1: yy(x)')

fig3 = plt.figure()
ax3=fig3.add_subplot()
data=np.loadtxt("load2.txt")
x3 = data[:,0]
y3 = data[:,1]
ax3.plot(x3 ,y3)
ax3.set_title('Фазовая траектория')

plt.show() 
