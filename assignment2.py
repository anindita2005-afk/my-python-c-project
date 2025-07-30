def spiral_matrix(matrix):
    result = []
    top, bottom = 0, len(matrix)
    left, right = 0, len(matrix[0])
    while top < bottom and left < right:
        for i in range(left, right):
            result.append(matrix[top][i])
        top += 1
        for i in range(top, bottom):
            result.append(matrix[i][right-1])
        right -= 1
        if top < bottom:
            for i in range(right-1, left-1, -1):
                result.append(matrix[bottom-1][i])
            bottom -= 1
        if left < right:
            for i in range(bottom-1, top-1, -1):
                result.append(matrix[i][left])
            left += 1
    return result


matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
print("Spiral:", spiral_matrix(matrix))





def rotate90(matrix):
    return list(zip(*matrix[::-1]))


matrix = [[1,2,3],[4,5,6],[7,8,9]]
rotated = rotate90(matrix)
for row in rotated:
    print(list(row))
    
    
    
def sum_diagonals(matrix):
    n = len(matrix)
    main_diag = sum(matrix[i][i] for i in range(n))
    sec_diag = sum(matrix[i][n-i-1] for i in range(n))
    return main_diag + sec_diag - (matrix[n//2][n//2] if n % 2 else 0)

matrix = [[1,2,3],[4,5,6],[7,8,9]]
print("Sum of diagonals:", sum_diagonals(matrix))





matrix = [[1,2,3],[4,5,6],[7,8,9]]
transpose = [list(row) for row in zip(*matrix)]
for row in transpose:
    print(row)
    
    
    
def is_sparse(matrix):
    total = len(matrix) * len(matrix[0])
    zero_count = sum(row.count(0) for row in matrix)
    return zero_count > total / 2

matrix = [[0, 0, 3], [0, 0, 0], [0, 2, 0]]
print("Sparse Matrix" if is_sparse(matrix) else "Not Sparse")




a = [3, 2, 0, 5]  
b = [1, 0, 4]     
n = max(len(a), len(b))
res = [0]*n
for i in range(n):
    val1 = a[i] if i < len(a) else 0
    val2 = b[i] if i < len(b) else 0
    res[i] = val1 + val2
print("Sum:", res)





a = [1, 2, 3] 
b = [4, 5]     
res = [0] * (len(a) + len(b) - 1)
for i in range(len(a)):
    for j in range(len(b)):
        res[i+j] += a[i] * b[j]
print("Result:", res)



def is_identity(matrix):
    for i in range(len(matrix)):
        for j in range(len(matrix)):
            if (i == j and matrix[i][j] != 1) or (i != j and matrix[i][j] != 0):
                return False
    return True

matrix = [[1,0,0],[0,1,0],[0,0,1]]
print("Identity Matrix" if is_identity(matrix) else "Not Identity")







matrix = [[0, 0, 1], [0, 1, 2], [1, 2, 3]]
zero_count = sum(row.count(0) for row in matrix)
print("Zero count:", zero_count)
