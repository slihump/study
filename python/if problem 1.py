#text = 'Hello world, python'
#strings = text.split()
#print(strings)

#s = """This is a
#Multi-line
#String!"""
#print(s)

#age = 20
#name = 'Swaroop'
#print('{0} was {1} years old when he wrote this book'.format(name, age))
#print('Why is {0} playing with that python?'.format(name))

pin = input('주민등록번호를 입력하세요: ')
info = pin.split('-')
print(info[0][0:2]+'년'+info[0][2:4]+'월'+info[0][4:6]+'일 출생입니다.')
if info[1][0:1] == 1 or info[1][0:1] == 3:
    gender = '남자'
else:
    gender = '여자'
print('성별은 {0} 입니다'.format(gender))