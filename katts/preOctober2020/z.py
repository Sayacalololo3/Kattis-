
def factorial(number):
    answer = 1 if number == 1 or number == 0 else number * factorial(number-1)
    return answer
    
print(factorial(5))