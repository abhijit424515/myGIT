'''
def f(l):
    for i in l:
        if i>5: yield i

l = [4,7,44,0,5,249]

for i in f(l):
    print(i)
'''

def countfrom(n):
    while n<20:
        yield n
        n+=1

g = countfrom(15)
print(g)
print()

for i in g:
    print(i)
    print(i*i)
    print()
