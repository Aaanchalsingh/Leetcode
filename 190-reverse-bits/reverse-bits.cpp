class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t mask = 1, ret = 0;
        for(int i = 0; i < 32; ++i){
            ret <<= 1;
            if(mask & n) ret |= 1;
            mask <<= 1;
        }
        return ret;
    }
};