p = 0
lst = []
t=int(input())
for x in range(t):
    a,b=map(int,input().split())
    lst.append([])
    lst[p].append(a)
    lst[p].append(b)
    p=p+1

p = 1
for a,b in lst:
    c = a+b
    print('Case #%s: %d + %d = %d' %(str(p),a,b,c))
    p = p+1