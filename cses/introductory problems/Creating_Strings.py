s = input()
s = sorted(s)  # Sort the string to handle duplicates
isTaken = [False] * len(s)
ans = []

def generate():
    if len(permutation) == len(s):
        ans.append("".join(permutation))
        return
    for i in range(len(s)):
        # Skip if the character is already taken, or if it's a duplicate and the previous identical character hasn't been taken
        if isTaken[i] or (i > 0 and s[i] == s[i - 1] and not isTaken[i - 1]):
            continue
        isTaken[i] = True
        permutation.append(s[i])
        generate()
        isTaken[i] = False
        permutation.pop()

permutation = []
generate()
print(len(ans))
print(*ans)
