#include <iostream>


int hops_count(int total_steps, int max_step){
    if (total_steps < 0) return 0;
    else if (total_steps <= 1) return 1;
    else {
        int hops = 0;
        int steps_left=total_steps-1;
        for (int i = 1; i <= max_step && steps_left >= 0; ++i) {
            hops += hops_count(steps_left, max_step);
            --steps_left;
        }
        return hops;
    }
}

int main() {
    int a=0,hops=0;
    std::cout << "Input number of steps:" ;
    std::cin >> a;
    hops = hops_count(a,3);
    std::cout<<"Number of ways: "<< hops;
}
