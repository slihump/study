# 1. 딕셔너리 생성
cities = {
    'Korea' : 'Seoul',
    'Japan' : 'Tokyo',
    'China' : 'Beijing',
    'USA' : 'Washington',
    'France' : 'PARIS'
}
# 2. 딕셔너리의 데이터 접근

print(cities)
print(cities['Korea'])
print(cities.get('Japan'))
cities['France'] = 'Paris'
print(cities['France'])
cities['Germany'] = 'Berlin'
print(cities)
for country in cities:
    print(country)

#6 반복문으로 딕셔너리의 값 탐색
for country in cities.values():
    print(country)

#7 반복문으로 딕셔너리의 키 그리고 값 둘다 탐색
for country, city in cities.item():
    print('country: {}, city: {}'.format(country, city))