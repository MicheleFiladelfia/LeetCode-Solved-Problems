class Solution {
public:
    int hammingWeight(uint32_t n) {
        return (new bitset<32>(n))->count();
    }
};
