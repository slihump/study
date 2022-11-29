# N = int(input("Enter number of try: "))

# for number in range(N):
#     score = 0
#     score_sum = 0

#     ox_list = input("Enter OX: ")

#     for i in ox_list:
#         if i == 'O':
#             score = score + 1
#             score_sum = score_sum + score
#         else:
#             score = 0

#     print(score_sum)
#     score_sum = 0

fname = input("Enter the file name: ")
lines = open(fname)
lst = list()

for line in lines:
    words = line.split()
    for words in words:
        if words in lst:
            continue
        lst.append(words)
lst.sort()
print(lst)