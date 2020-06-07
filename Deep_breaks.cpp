#include<iostream>

using namespace std;

int main()
{
    int i = 1;
    int n = 1;
    while (i<3) {
        i++;
        while (n<20) {
            n++;
            if (n==2) {
                break;
            }
        }
    }
    
    std::cout<<i<<"\n";
    std::cout<<n<<"\n";
    break;
}