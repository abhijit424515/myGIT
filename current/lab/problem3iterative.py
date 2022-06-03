from copy import deepcopy
initial = input().split()
final = []

while len(initial)>0:
    if len(final) == 0:
        final.append([initial.pop()])
        continue
    #initial = [a,b,c]
    temp = deepcopy(final)                                     # temp -> order 2
    #temp = [a,b,c]
    for p,Q in enumerate(final):                            # Q -> order 1
        for R,s in enumerate(Q):                            # s -> order 0
            temp[p].insert(R,initial[-1])
    y = deepcopy(final)                                        # placing at ed
    # print(y)
    for a in y:
        a.append(initial[-1])
    # temp.extend(y)                                          # ++
    final = deepcopy(temp)
    final.extend(y)
    initial.pop()

for i in final:
    print(i)

# print(addAt([11,14,17],0,"hello"))
