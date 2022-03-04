#include <iostream>
#include <math.h>
#include <iomanip>


//log x - 1 = 0

int main() {
    unsigned short precision = 20;
    long double precis = pow(10, -precision);
    
    std::cout << precis << std::endl;

    long double x = 0;
    long double step = 1;
    int answer = 0;
    int j = 0;
    for ( ; log(x)-1 - precis > 0 || log(x)-1 + precis < 0 ; )
    {
        j++;
        std::cout << std::setprecision(precision) <<  log(x)-1 <<std::endl;

        for (; log(x)-1 < 0;)
        {
            std::cout << "< 0" <<std::endl;
            x += step;
            std::cout << x <<std::endl;
            j++;
        }
        for (; log(x)-1 > 0;)
        {
            std::cout << "> 0" <<std::endl;
            x -= step;
            std::cout << x <<std::endl;
            j++;
        }
        step *= 0.5;
    } 
    
    std::cout << std::setprecision(precision) << x << std::endl;
        std::cout << j << std::endl;

}