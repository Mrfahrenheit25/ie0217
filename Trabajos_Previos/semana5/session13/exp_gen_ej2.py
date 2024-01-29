def fibonacci_numbers(nums):
    x, y = 0, 1
    for _ in range(nums):
        x, y = y, x + y
        yield x

def square(nums):
    for num in nums:
        yield num ** 2

# Calcular la suma de los cuadrados de los primeros 10 números de Fibonacci
fib_nums = fibonacci_numbers(10)
squared_nums = square(fib_nums)
sum_of_squares = sum(squared_nums)

print(sum_of_squares)  # Output: 4895
