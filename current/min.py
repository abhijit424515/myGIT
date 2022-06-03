def min(l):
    if len(l)==1: return l[0] 
    elif(l[0]<min(l[1:])): return l[0]
    else: min(l[1:])

print(min([-38974,0,2,44,234789]))
