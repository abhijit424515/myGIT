store = []					# format -> [m,n,value]

def ack(m,n):
	# first check in store
	for i in store:                         # if present in store, do not compute and directly use it
		if i[0]==m and i[1]==n:
			return i[2]
	if m==0:                                # append, since not present in store
		store.append([0,n,n+1])
		return n+1
	elif m>0 and n==0:
		for i in store:
                    if i[0]==m-1 and i[1]==1:
                        return i[2]
                t = ack(m-1,1)
		store.append([m-1,1,t])
                store.append([m,0,t])
		return t
	elif m>0 and n>0:
            t1,x=0,0
            for i in store:
                if i[0]==m and i[1]==n-1:
                    t1,x=i[2],1
            if x==0:
		t1 = ack(m,n-1)
                store.append([m,n-1,t1])
            t2,x=
            for i in store:
                if i[0]==m-1 and i[1]==t1:

            t2 = ack(m-1,t1)
	    return t2
