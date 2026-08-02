class Solution {
public:
    int xorOperation(int n, int start) {
        int r = 0;

        for (int i = 0; i < n; i++) {
            r ^= (start + (i * 2));
        }

        return r;
    }
};