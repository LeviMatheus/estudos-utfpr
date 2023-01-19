import sys

class LogicE:  
	
	def __init__(self):
		self.w1 = 1
		self.w2 = 1
		self.b = -1.5

	def calcular(self, valor1, valor2):
		result1 = (valor1*self.w1)+(valor2*self.w2)+(self.b)
		if result1 < 0:
			result1 = 0
		else:
			result1 = 1
		return result1

#valor1 = input("valor1: ")
#valor2 = input("valor2: ")

ex1 = LogicE()
print(ex1.calcular(0,0))
print(ex1.calcular(1,0))
print(ex1.calcular(0,1))
print(ex1.calcular(1,1))
	
