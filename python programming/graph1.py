from matplotlib import pyplot as plt
from matplotlib import style
style.use('ggplot')
x=[5,8,10]
y=[10,16,8]
x2=[6,9,12]
y2=[6,14,7]
plt.plot(x,y,'g',label="line one",linewidth=6)
plt.plot(x2,y2,'c',label="line two",linewidth=6)
plt.title("Info")
plt.xlabel("This is X-axis")
plt.ylabel("This is Y-axis")
plt.legend()
plt.grid(True,color='k')
plt.show()

