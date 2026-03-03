from itertools import product
k, m = map(int, input().split())
lists = [list(map(int, input().split()))[1:] for _ in range(k)]
results = (sum(x**2 for x in combination) % m for combination in product(*lists))
print(max(results))
