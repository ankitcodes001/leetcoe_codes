class Solution:
    def decodeMessage(self, key: str, message: str) -> str:
        mp = {'':''}
        res = ''
        letters = 'abcdefghijklmnopqrstuvwxyz'
        i=0
        
        for char in key:
            if char not in mp and char != ' ':
                mp[char] = letters[i]
                i += 1
        
        for ch in message:
            if ch in mp:
                res+=mp[ch]
            else:
                res+=ch
        return res        