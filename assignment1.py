def insert_at_end(arr, element):
    arr.append(element)
    return arr


arr = [1, 2, 3, 4]
element = 5
print("Updated Array:", insert_at_end(arr, element))




def find_largest(arr):
    return max(arr)

print(find_largest([3, 5, 2, 9]))





def second_largest(arr):
    unique = list(set(arr))
    unique.sort()
    return unique[-2] if len(unique) > 1 else None

print(second_largest([4, 2, 1, 3, 4]))





def move_zeros(arr):
    non_zero = [x for x in arr if x != 0]
    return non_zero + [0] * (len(arr) - len(non_zero))

print(move_zeros([0, 1, 0, 3, 12]))





def rotate_by_one(arr):
    return [arr[-1]] + arr[:-1]

print(rotate_by_one([1, 2, 3, 4]))






arr = [1, 2, 3, 4, 5]
is_sorted = all(arr[i] <= arr[i+1] for i in range(len(arr)-1))
print("Array is sorted" if is_sorted else "Array is not sorted")



s = input("Enter a string: ")
reversed_str = ''
for char in s:
    reversed_str = char + reversed_str
print("Reversed string:", reversed_str)





s = input("Enter a string: ")
print("Palindrome" )
if s == s[::-1]
  else "Not a palindrome")
  
  
  
  

arr = [1, 2, 2, 3, 3, 3, 4]
frequency = {}
for num in arr:
    frequency[num] = frequency.get(num, 0) + 1
for key, value in frequency.items():
    print(f"{key} occurs {value} time(s)")