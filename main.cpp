#include <iostream>
#include "time.h"

using namespace std;

int main()
{
        Time t1(200);
        std::cout<<t1<<std::endl;
        Time t2;
        std::cin>>t2;
        Time t3=t2-t1;
        int t3s=t3;
        std::cout<< t3s<<std::endl;

}
