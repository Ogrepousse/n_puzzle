import numpy as np
import math

class node(object):
	nb_elem = 0


	def __init__(self, tab):
		self.id = self.nb_elem
		self.board = tab
		node.nb_elem+= 1

def gen_next(tab):
	res = np.ones((4, tab.shape[0], tab.shape[0])) * -1
	a, b = np.where(tab == 0)
	x = a[0]
	y = b[0]
	if x > 0:
		res[0, :, :] = tab.copy()
		tmp = res[0, x, y]
		res[0, x, y] = res[0, x - 1, y]
		res[0, x - 1, y] = tmp
	if x < tab.shape[0] - 1:
		res[1, :, :] = tab.copy()
		tmp = res[1, x, y]
		res[1, x, y] = res[1, x + 1, y]
		res[1, x + 1, y] = tmp
	if y > 0:
		res[2, :, :] = tab.copy()
		tmp = res[2, x, y]
		res[2, x, y] = res[2, x, y - 1]
		res[2, x, y - 1] = tmp
	if y < tab.shape[0] - 1:
		res[3, :, :] = tab.copy()
		tmp = res[3, x, y]
		res[3, x, y] = res[3, x, y + 1]
		res[3, x, y + 1] = tmp
	return res


def	gen_end(tab, size, start):
	id = start
	for i in range(size * 2 - 1):
		if i < size:
			y = i
			x = 0
		else:
			y = size - 1
			x = i - size + 1
		tab[x, y] = id
		id += 1
	for i in range((size - 1) * 2 - 1):
		if i < size - 1:
			x = size - 1
			y = size - 2 - i
		else:
			y = 0
			x = size - 2 - (i - (size - 1))
		tab[x, y] = id
		id += 1
	if size < 3:
		tab[x, y] = 0
		return
	gen_end(tab[1:-1, 1:-1], size - 2, id)




size = 3
poss = math.factorial(size * size)

open_set = np.empty(poss, dtype = node)
close_set = np.empty(poss, dtype = node)


a = np.arange(9).reshape(3, 3)
start = node(a)

b = np.array([[1, 2, 3], [8, 0, 4], [7, 6, 5]])
nul = np.zeros((3, 3))

print 'end'
