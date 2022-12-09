# f = open("D:/!projects/hello/python/sample.txt")
# lines = f.readlines()
# f.close()

# total = 0
# for line in lines:
#     score = int(line)
#     total = total + score

# average = total / len(lines)

# f = open("D:/!projects/hello/python/result.txt","w")
# f.write("Total: "+str(total))
# f.write("\n")
# f.write("Average: "+str(average))
# f.close

# f = open("D:/!projects/hello/python/abc.txt")
# lines = f.readlines()
# f.close()

# rlines = reversed(lines)
# f = open("D:/!projects/hello/python/abc_rev.txt","w")
# for line in rlines:
#     line = line.strip('\n')
#     f.write(line.lower())
#     f.write('\n')
# f.close()

# f = open("D:/!projects/hello/python/words.txt","r")

# count = 0
# words = f.readlines()
# for word in words:
#     if len(word.strip('\n')) <= 10:
#         count = count + 1

# print("10글자 이하인 단어의 개수는 %d개 입니다" %count)

fname = input("Enter file name:")
try:
    fhand = open(fname)
except:
    print('File cannot be opended:', fname)
    quit()
f = open(fname)

total = 0
count = 0

for line in f:
    if not line.startswith("X-DSPAM-Confidence:"):
        continue
    else:
        print(line)
        a = line.find(':')
        b = line[a+2:]
        value = float(b)
        total = total + value
        count = count + 1

print("Average spam confidence:", total/count)