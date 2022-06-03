mainList,final = input("Enter elements of set separated by space: ").split(),[]
for i in range(int(pow(2, len(mainList)))):
    s = []
    for j in range(len(mainList)):
        if i & (1 << j):
            s.append(mainList[j])
    final.append(frozenset(s))
print(final)
