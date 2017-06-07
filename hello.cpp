#include <vector>
#include <thread>
#include <iostream>

#include "thread_function.cpp"

int main(int argc, char **argv)
{
    uint threads_num = 10;
    std::vector<std::thread> ths;

    for (uint i = 0; i < threads_num; ++i)
        ths.emplace_back(thread_function);

    for (std::thread& th : ths)
        th.join();

    return 0;
}
