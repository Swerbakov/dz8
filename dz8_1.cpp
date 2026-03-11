#include <iostream>

void counting_function() {
    static int callCount = 0;
    callCount++;
    std::cout << "Количество вызовов функции counting_function(): " << callCount << std::endl;
}

int main(int argc, char** argv)
{
    for (int i = 0; i < 15; i++)
    {
        counting_function();
    }
    
    return 0;
}
