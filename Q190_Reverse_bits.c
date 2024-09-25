uint32_t reverseBits(uint32_t n) {
    uint32_t val = 0;
    for(int i=0; i<32; i++){
        val = val << 1;
        val += n%2;
        n = n >> 1;
    }
    return val;
}