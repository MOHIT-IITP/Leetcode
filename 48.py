# // this is working in my compiler but not working in the leetcode idk
def rotate(matrix):
    n=len(matrix)
    transposed = [[matrix[j][i] for j in range(n)]for i in range(n)]
    for elem in transposed:
        elem.reverse()
    return transposed
matrix =[[1,2,3],[4,5,6],[7,8,9]]
print(rotate(matrix))

# // another solution <ode 
def rotate(matrix):
    for i in range(len(matrix)):
        for j in range(i,len(matrix)):
            matrix[i][j],matrix[j][i] = matrix[j][i],matrix[i][j]
    for elem in matrix:
        elem.reverse()
    return matrix
matrix=[[1,2,3],[4,5,6],[7,8,9]]
        
print(rotate(matrix))
