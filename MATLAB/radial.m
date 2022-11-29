function[x. theta] = radial(x,y)
%radial(x,y)는 원점에서 (x,y)를 가리키는 벡터의 크기와 각을 계산
%출력 r은 벡터의 크기
%출력 theta는 벡터의 각 rad를 돌려준다.

global r theta
%프로그램 계산 부분
r = sqrt(x.^2+y.^2);
theta = atan(y./x)

