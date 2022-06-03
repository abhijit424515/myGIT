def fact1(n):
    if n==0:
        return 1
    else return n*fact(n-1)
# retrace needed to calculate nth value

def fact2(n,temp):
    if n==0:
        return temp
    else return fact2(n-1,temp*n)
# no retrace needed here

