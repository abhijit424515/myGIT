def permutator(l):
    assert(len(l)>0)
    temp=list()
    if len(l)==1:
        return [l]
    for i in l:
        x = l.copy()
        x.remove(i)
        t = permutator(x)
        for j in t:
            p = [i]
            p.extend(j)
            temp.append(p)
    return temp

print(permutator([1,2,3,4]))
