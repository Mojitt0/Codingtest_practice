#n, m, k 공백으로 구분하여 입력
n, m, k = map(int, input().split())

#n개의 수 입력
data = list(map(int, input().split()))

data.sort() #데이터 정렬

biggest = data[n-1]
biggest_2 = data[n-2]

#가장 큰 수 더해지는 횟수 계산
count = int(m / (k+1)) * k
# int(m / (k+1)) == 가장 큰 수만 더해지는 패턴의 반복 횟수
# 가장 큰 수 만 더하는 횟수


count += m % (k+1)
# 이거는 예외처리
# 전체 덧셈 횟수가 K+1로 나누어 떨어지지 않을 경우 나머지는 모두 큰 수로 더함

result = count*biggest + (m-count) * biggest_2
print(result)