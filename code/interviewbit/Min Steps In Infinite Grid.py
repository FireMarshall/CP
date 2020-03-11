class Solution:
	# @param A : list of integers
	# @param B : list of integers
	# @return an integer
	def coverPoints(self, A, B):
		ans = 0
		for x1, x2, y1, y2 in zip(A, A[1:], B, B[1:]):
			ans += max(abs(x2-x1), abs(y2-y1))
		return ans
