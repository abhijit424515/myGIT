def occurences(a,b):
    temp = a.copy() 
    t=0
    while True:
        try:
            temp.pop(temp.index(b))
            t+=1
        except:
            return t

l1,l2=input("Input list 1 elements separated by space: ").split(),input("Input list 2 elements separated by space: ").split()
n1,n2=len(l1),len(l2)
g,final = [],[]

for i in l1:
    x1,x2 = occurences(l1,i),occurences(l2,i)
    if(x1*x2!=0):
        g.append([i,x1+x2])
for i in g:
    if i not in final:
        final.append(i)
        
print(final)
