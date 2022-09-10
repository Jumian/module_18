#include <iostream>

void evendigits(uint64_t value, int &ans ){
    if (value<=0) return;
    ans+=(value%2?0:1);
    evendigits(value/10,ans);
}

int main() {
    int ans;
    evendigits(9223372036854775806, ans);
    std::cout<< ans;
}
