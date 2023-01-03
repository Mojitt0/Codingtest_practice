n,k = map(int, input().split())
result = 0

while True:
    # target은 n에서 가장가까운 k의 배수
    target = (n//k) * k
    
    # 빼준횟수 count
    result += (n-target)

    # target이 될때까지 n에서 1씩 빼줌
    n = target

    # n이 k보다 작아져 더이상 나눌 수 없을 때 반복문 탈출
    if n<k:
        break
    
    # k로 n나누기
    result += 1
    n //=k

# 남은 수에 대하여 1씩 빼기
result += (n-1)
print(result)