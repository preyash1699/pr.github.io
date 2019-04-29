class stack:

    def push(self, x, k):
        x.append(k)
    
    def popi(self, x):
        null = []
        if x != null:
            k = x.pop()
            print(k)
        else:
            print("Stack is Empty")
    
    def stacktop(self, x):
        null = []
        if x != null:
            k = int(x.pop())
            x.append(k)
            print("Stack Top: ", k)
        else:
            print("Stack is Empty")
    def display(self, x):
        print("Stack: ",x)
        for i in range(0,len(x)):
            print("|",x[len(x)-(i+1)],"|")
            print("______")


class queue:

    def enque(self, Q, k):
        Q.append(k)
    
    def deque(self, Q):
        null = []
        if Q != null:
            k = Q.pop(0)
            print(k)
        else:
            print("Queue is Empty")
    
    """def stacktop(self, Q):
        null = []
        if Q != null:
            k = int(Q.pop())
            Q.append(k)
            print("Stack Top: ", k)
        else:
            print("Stack is Empty")
    """        
    def display(self, Q):
        print("Queue: ",Q)
        for i in range(0,len(Q)):
            print("|",Q[i],"|")
            print("______")


c = int(input("What you wanna do \n1.STACK\t2.QUEUE"))
if c == 1:
    #---------------------------STACK-----------------------------------
    obj = stack()

    print("Enter choice to do the operation: ")
    x = []
    while True:
        m = int(input("1.Push\t2.Pop\t3.StackTop\t4.Display\t5.Exit: "))
        if m == 1:
            k = int(input("Enter no to push: "))
            obj.push(x,k)
            obj.display(x)
        if m == 2:
            obj.popi(x)
        if m == 3:
            obj.stacktop(x)
        if m == 4:
            obj.display(x)
        if m == 5:
            break

if c == 2:
    #---------------------------QUEUE---------------------------------

    obj = queue()

    print("Enter choice to do the operation: ")
    Q = []
    while True:
        m = int(input("1.Enqueue\t2.Dequeue\t3.Display\t4.Exit: "))
        if m == 1:
            k = int(input("Enter no to push: "))
            obj.enque(Q,k)
            obj.display(Q)
        if m == 2:
            obj.deque(Q)
        if m == 3:
            obj.display(Q)
        if m == 4:
            break

