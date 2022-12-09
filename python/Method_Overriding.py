class country:
    """Super Class"""
    name = '국가명'
    population = '인구'
    capital = '수도'

    def show(self):
        print("국가 클래스의 메소드입니다.")

class korea(country):
    def __init__(self, name, population, capital):
        self.name = name
        self.population = population
        self.capital = capital

    def show_name(self):
        print("국가 이름은 : ",self.name)

    def show(self):
        super().show()
        print(
            """
            국가의 이름은 {} 입니다.
            국가의 인구는 {} 입니다.
            국가의 수도는 {} 입니다.
            """.format(self.name, self.population, self.capital)
        )

a = korea('대한민국', 5000000, '서울')
a.show()
print(isinstance(a, korea))