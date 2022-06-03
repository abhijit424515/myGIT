l = [11,12,13,14,15]
ld = l.copy()
storage_id=[]
storage_stuff=[]
stack=[["CALL",ld,[]]]
ready=[]

while len(stack)>0:
    if stack[-1][0]=="CALL":                                    # if first call to an iteration
        if len(stack[-1][1])==1:                                # if list size is 1, return [list]
            stack[-1][0]="READY"
            stack[-1][2]=[stack[-1][1]]
            ready.append(stack.pop())
        else:
            for i in ready:
                if i[1]==stack[-1][1]:                          # elif result is already in ready, simply pop it
                    stack.pop()
            else:                                               # else hold the entry in stack till ready
                stack[-1][0]="HOLD"
    elif stack[-1][0]=="HOLD":                                  # if holding, 
        n=0
        for i in ready:
            if i[1]==stack[-1][1]:
                n=t
                break

    elif stack[-1][0]=="READY":
        ready.append(stack.pop())

