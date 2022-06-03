def findPowerSet(S):
    N = int(pow(2, len(S)))
    final=[]
 
    for i in range(N):
        s = []
        for j in range(len(S)):
            if i & (1 << j):
                s.append(S[j])
 
        final.append(frozenset(s))
    print (set(final))

t = [1,2,3]
findPowerSet(t)