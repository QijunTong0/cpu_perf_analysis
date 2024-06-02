import numpy as np
a=np.array([[i+300 for i in range(3)] for _ in range(10**6)])
b=a.sum(axis=0)