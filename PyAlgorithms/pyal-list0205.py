# Python Algorithms
# Mastering Basic Algorithms in the Python language
# Listing 2-5. An Adjacency Matrix, Implemented with Nested Lists

# define points
a, b, c, d, e, f, g, h = range(8)

#     a b c d e f g h
N = [[0,1,1,1,1,1,0,0], # a
     [0,0,1,0,1,0,0,0], # b
     [0,0,0,1,0,0,0,0], # c
     [0,0,0,0,1,0,0,0], # d
     [0,0,0,0,0,1,0,0], # e
     [0,0,1,0,0,0,1,1], # f
     [0,0,0,0,0,1,0,1], # g
     [0,0,0,0,0,1,1,0]] # h

print N[a][b]   # Neighborhood membership
print sum(N[f]) # Degree
