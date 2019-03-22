from random import *
import os

n = 1000000
print(n)
for i in range(n):
	t = randint(1, 2)
	if t == 1:
		pos = randint(1, n)
		val = randint(1, n)
		print(t, pos, val)
	else:
		l = randint(1, n)
		r = randint(l, n)
		print(t, l, r)
