subject = open("subject.txt","r").read().split("\n")[:-2]
verb = open("verb.txt","r").read().split("\n")[:-2]
objects = open("object.txt","r").read().split("\n")[:-2]

# print(subject)
# print(verb)
# print(objects)

# main = [subject,verb,objects]

all_verbs = []
for i in verb:
    t = [i]
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
    all_verbs.extend(t)

# print(all_verbs)

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
