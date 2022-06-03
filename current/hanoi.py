def hanoi(sz,src,dest,extra):                           # A, B, C
    if not(sz==0):
        hanoi(sz-1,src,extra,dest)                      # A, C, B
        print("move a disk from ",src," to ",dest)      # A, B
        hanoi(sz-1,extra,dest,src)                      # C, B, A

hanoi(3,"A","B","C")
