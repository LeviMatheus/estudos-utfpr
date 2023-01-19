import sys
import numpy as np

class LogicE:  
	
	def __init__(self):
		self.w = np.array([
			[1., 1.],
			[1., 1.]
		]) 

		self.b = np.array([
			[-1.5],[-0.5]
		])

		self.x = np.array([
      [0, 0],
      [0, 1],
      [1, 0],
      [1, 1]
    ])

	def f(self):
		v = np.matmul(self.w,self.x) + self.b
		result = self.passo(v)
		print(result)

	def passo(self, v):
		y = np.zeros(v.shape)
		for i in range(len(v)):
			if v[i] >= 0:
				y[i] = 1
		return y

ex1 = LogicE()
ex1.f()

