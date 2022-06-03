subject = open("subject.txt","r").read().split("\n")[:-2]
verb = open("verb.txt","r").read().split("\n")[:-2]
objects = open("object.txt","r").read().split("\n")[:-2]

# print(subject)
# print(verb)
# print(objects)

all_verbs = []
for i in verb:
    t = [i]
    if(i[len(i)-3:len(i)]=="ing"):
        x = i.split(" ")
        t.append(x[1][0:len(x[1])-3])
        t.append(x[1][0:len(x[1])-3]+"ed")
    if(i[-1]=="e"): 
        t.append(i+"s")
        t.append("will "+i)
    if(i[-1]=="n"):
        t.append("will "+i[0:len(t)-1])
    if(i[-2:]=="ed"): 
        t.append(i[0:len(t)-2]+"s")
        t.append("will "+i[0:len(t)-2])
    if(i[-1]=="n"):
        t.append("will "+i[0:len(t)-1])
        t.append(i[0:len(t)-1]+"s")
    if(i[-1]=="s"):
        t.append(i[0:len(t)-2])
        t.append(i[0:len(t)-3]+"ed")
        t.append("is "+i[0:len(t)-4]+"ing")
    all_verbs.extend(t)

for z,i in enumerate(subject):
    j = []
    for k in i:
        j.append(k)
    # print(j)
    j[0]=chr(ord(j[0])-ord('a')+ord('A'))
    # print(j)
    x=""
    for t in j:
        x+=t
    subject[z]=x

print(all_verbs)

main = [subject,all_verbs,objects]
final=[]

def fun(s,t,n):
    if t==1:
        for i in main[n-t]:
            final.append(s+" "+i)
    else:
        for i in main[n-t]:
            if s=="":
                fun(i,t-1,n)
            else:
                fun(s+" "+i,t-1,n)

fun("",3,3)

for t in final:
    print(t)
