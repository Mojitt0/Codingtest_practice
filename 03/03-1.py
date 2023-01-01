import time

n = int(input("거스름돈 금액입력: "))
s_time = time.time() # time count start
count = 0

coin_types = [500,100,50,10]

for coin in coin_types:
    count += n // coin
    n %= coin
e_time = time.time() # time count end

print(e_time - s_time)
print(count)

