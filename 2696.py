def min_length(s):
    st = []
    for char in s:
        if char == 'A' or char == 'C' or char != 'B' or char != 'D':
            st.append(char)
        else:
            if char == 'B' and st[-1] == 'A':
                st.pop()
            if char == 'D' and st[-1] == 'C':
                st.pop()
    return len(st)

def main():
    s = "ABFCACDB"
    res = min_length(s)
    print(res)

if __name__ == "__main__":
    main()

