import sys

# List Comprehension
arr = [int(element) for element in input().strip().split(' ')]

for element in reversed(arr):
    sys.stdout.write(str(element) + ' ')

# to print end line chars
print()