class Solution:
    def longestStrChain(self, words: List[str]) -> int:
        dp = dict()
        for word in words:
            dp[word] = 0
        words = sorted(words, key=lambda x: len(x))
        
        ans = 0
        for word in words:
            for i in range(len(word)):
                small_word = word[:i] + word[1+i:]
                dp[word] = max(dp[word], dp.get(small_word, 0)+1);
            ans = max(ans, dp[word])
        return ans
