def f(x):
    if x%2==0: return True
    else: return False

l = [1,2,3,4,5]

m = filter(f,l)
print(m)
print(list(m))
