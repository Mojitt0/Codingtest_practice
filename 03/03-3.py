n, m = map(int, input().split())
# n = row
# m = col

result = 0

for i in range(n):
    # input row data
    data = list(map(int, input().split()))
    # find min value of row
    min_value = min(data)
    # find biggest among min_value
    result = max(result, min_value)

print(result)
