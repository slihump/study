def makeListUsingAppend(N):
    result = []
    for i in range(N):
        result.append(i)
    return result

def makeListUsingBulkAlloc(N):
    result = [0]*N
    for i in range(N):
        result[i] = i
        return result

def makeListUsingBuiltin(N):
    return range(N)

print(makeListUsingAppend(5), makeListUsingBulkAlloc(5), *makeListUsingBuiltin(5))

from time import time
t0 = time()
makeListUsingAppend(2**24)
print("걸린시간:{:.2e}".format(time()-t0))
t0 = time()
makeListUsingBulkAlloc(2**24)
print("걸린시간:{:.2e}".format(time()-t0))
t0 = time()
makeListUsingBuiltin(2**24)
print("걸린시간:{:.2e}".format(time()-t0))