from os import system

def checker():
    for p,plist in enumerate(final2):
        for i in range(0,5):
            if binary[p][i][0]*binary[p][i][1]*binary[p][i][2]*binary[p][i][3]*binary[p][i][4]==1 or binary[p][0][i]*binary[p][1][i]*binary[p][2][i]*binary[p][3][i]*binary[p][4][i]==1:
                return p
    return -1

input1 = open("./input1", "r").read().strip().split(",")
final1 = []
for i in input1:
    final1.append(int(i))
# print(final1)

input2 = open("./input2", "r").read().strip().split("\n")
temp2 = []
x = 0
while x<600:
    temp2.append(input2[x:(x+5)])
    x += 6
final2 = []
for i in temp2:
    one = []
    for j in i:
        x = j.split(" ")
        for k in x:
            if k=="":
                x.pop(x.index(k))
        y = []
        for q in x:
            y.append(int(q))
        one.append(y)
    final2.append(one)
# print(final2)

binary = []
score=0
for i in range(0,100):
    binary.append([[0,0,0,0,0],[0,0,0,0,0],[0,0,0,0,0],[0,0,0,0,0],[0,0,0,0,0]])
# print(binary)

cardNumber = 1

for i,ilistElement in enumerate(final1):
    for p,plist in enumerate(final2):
        for q,qlist in enumerate(plist):
            for r,rlist in enumerate(qlist):
                if rlist==ilistElement:
                    binary[p][q][r]=1
    card = checker()
    if(card!=-1):
        cardNumber+=1
        sum=0
        for m in range(0,5):
            for n in range(0,5):
                if binary[card][m][n]==0:
                    sum+=final2[card][m][n]
        temp = sum*ilistElement
        if(temp!=0):
            score = temp
        # break
        # print("The card numbered",cardNumber,"has score",score,"in trial index",i)
print(score)