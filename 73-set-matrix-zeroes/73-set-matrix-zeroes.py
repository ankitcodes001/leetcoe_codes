class Solution(object):
    def setZeroes(self, mat):
        """
        :type matrix: List[List[int]]
        :rtype: None Do not return anything, modify matrix in-place instead.
        """
        n = len(mat)
        m = len(mat[0])
        r ,c = set(),set()
        for i in range(n):
            for j in range(m):
                if mat[i][j] == 0:
                    c.add(j)
                    r.add(i)
        
        for i in range(n):
            for j in range(m):
                if i in r or j in c:
                    mat[i][j] = 0