def sum_of_natural_numbers(n):
  """
  Calculates the sum of the first n natural numbers using a for loop.

  Args:
    n: An integer representing the number of natural numbers to sum.

  Returns:
    The sum of the first n natural numbers.
  """
  if n < 1:
    return "Please enter a positive integer."
  
  total_sum = 0
  for i in range(1, n + 1):
    total_sum += i
  return total_sum

# Get input from the user
try:
  num = int(input("Enter a positive integer (n): "))
  result = sum_of_natural_numbers(num)
  print(f"The sum of the first {num} natural numbers is: {result}")
except ValueError:
  print("Invalid input. Please enter an integer.")