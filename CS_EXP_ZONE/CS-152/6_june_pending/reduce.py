from functools import reduce

def f(x,y):
    print(x,y)
    return 2*x+y

l = [1,2,3,4]
print(reduce(f,l))
print()
print(reduce(f,l,100))
print()

z = ["a","b","c","d"]
print(reduce(f,z))

