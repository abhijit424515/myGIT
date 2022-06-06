def f(x):
    return x*x

l = [1,2,3]
# l = {1,2,3}
# map function can also take a set as an input

m = map(f,l)

print(m)
print(list(m))
# print(set(m))

# Python 2.7 returns m as list, while Python 3 and above return map-object

l = [7,8,9]
print(list(m))
# last print is empty
