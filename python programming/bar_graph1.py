import matplotlib.pyplot as plt
labels=['A','B','C']
values=[1,8,6]
bars=plt.bar(labels,values,color='blue')
bars[0].set_hatch('/')
bars[1].set_hatch('o')
bars[2].set_hatch('*')
plt.show()