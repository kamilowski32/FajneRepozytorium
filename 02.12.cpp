#include<iostream>
#include<random>
using namespace std;

int main() {
    random_device a;
    mt19937 losowanie(a());
    uniform_int_distribution<> zbior(1,7);
    
    return 0;
}
