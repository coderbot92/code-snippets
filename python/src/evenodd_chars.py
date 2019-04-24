word = input().strip()
even_arr = ""
odd_arr = ""

for index,char in enumerate(word):
    if index & 1:
        odd_arr += char
    else:
        even_arr += char

print(even_arr + " " + odd_arr)