#include <stdio.h>
#include <iostream>

int main()
{
    int n, a, i, b, c;
    double sr, sum;
    //a = 2137483647;-наибольшее
    //b = -2137483648;-наименьшее
    i = 2;
    std::cout << "vvedite koli4estvo 4isel " << std::endl;
    std::cin >> n;
    
    
     std::cout << "vvedite 4islo nomer 1 " << std::endl;
     std::cin >> c;
     a = c;
     b = c;
     sum = c;
     if (n > 1);
     {
         while (i < n + 1)
         {
             std::cout << "vvedite 4islo nomer ";
             std::cout << (i) << std::endl;
             std::cin >> c;
             if (c > a)
             {
                 a = c;
             }
             if (c < b)
             {
                 b = c;
             }
             sum = sum + c;

             i = i + 1;
         }
     }
     sr = sum / n;
     std::cout << "naibolshee 4islo ";
     std::cout << (a) << std::endl;
     std::cout << "naimenshee 4islo ";
     std::cout << (b) << std::endl;
     std::cout << "summa ravna ";
     std::cout << (sum) << std::endl;
     std::cout << "srednee arifmeticheskoe ravno ";
     std::cout << (sr) << std::endl;
}

//https://github.com/4ndrlxrd/task8