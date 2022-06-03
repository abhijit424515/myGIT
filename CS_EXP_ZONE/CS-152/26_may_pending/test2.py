def f(x):
    return x*x

s = {1,3,4}
l = [1,2,3,4,5,6,7]

r = map(f,s)
print(list(r))

r = map(f,l)
print(r)
print(list(r))
