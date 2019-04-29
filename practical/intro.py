import time

def inputfunc():
    print("This way we take the Password:  ")
    n = input("Enter Password: ")
    print("Inputed Password: ",n)
    print("Nice ;)")
    return n
def datatypes():
    i = 200
    print("This is Integer i: ",i, "\tclass type: ", type(i))
    f = 156.08
    print("This is float   f: ",f, "\tclass type: ", type(f))
    s = "Preyash"
    print("This is String  s: ",s, "\tclass type: ", type(s))
    li = [1,2,3]
    print("This is list   li: ",li, "\tclass type: ", type(li))
    tu = (1,2,3)
    print("This is tuple  tu: ",tu, "\tclass type: ", type(tu))
    dic = {1:35, 2:67, 'k':78, "al": "prey"}
    print("This is dictionary dic: ",dic, "\tclass type: ", type(dic))
    st = {2,4,5,"prey"}
    print("This is set   st: ",st, "\tclass type: ", type(st))

def datetime():
    ticks = time.time()
    print(ticks)
    localtim = time.localtime(time.time())
    print("Local time: ",localtim)
    nicetime = time.asctime(time.localtime(time.time()))
    print("Nice time: ", nicetime)

def control():
    i = 0
    while True:
        print("*"*i)
        i=i+1
        if i == 5:
            break
    for j in range(0,6):
        print("*"*(6-j))
        if j==4:
            pass
    


print("Hello and welcome")
n = inputfunc()
if n == "preyash":
    print("Nice Acess Granted!")
    datatypes()
    datetime()
    control()
else:
    print("Nice you are not allowed to go any further\n")