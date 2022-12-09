fname = input('Enter File: ')
if len(fname) < 1 :
    fname = 'clown.txt'

hand = open(fname)

dic = open(fname)

dic = dict()
for lin in hand:
    lin = lin.strip()
    #print(lin)
    words=lin.split()
    #print(words)


for word in words:
    #if word not in dic:
    #    dic[word] = 1
    #else:
    #    dic[word] = dic[word] + 1
    dic[word] = dic.get(word,0) +1
    #print(word, dic[word])

largest = 0
theword = None
for key, value in dic.items():
    print(key, value)
    if value > largest:
        largest = value
        theword = key

print('Done',theword,largest)