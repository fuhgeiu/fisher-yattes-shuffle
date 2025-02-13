#include "algorithims.hpp"
#include <vector>
#include <iostream>

typedef cstd::cont_array_dyn<int> container;

typedef std::chrono::time_point<std::chrono::system_clock> timer_object;

void run_shuffle1 (size_t length) {

    std::vector<int> container;

    for (int i = 0; i < length; i++) container.push_back(i+1);

    timer_object start, end;

    start = std::chrono::system_clock::now();

    shuffle::shuffle_1(container);

    end = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds = end - start;
    std::cout << "number of int: " << length << "  elapsed time: " << elapsed_seconds.count() << "s\n";

}

void run_shuffle2 (size_t length) {

    std::vector<int> container;

    for (int i = 0; i < length; i++) container.push_back(i+1);

    timer_object start, end;

    start = std::chrono::system_clock::now();

    shuffle::shuffle_2(container);

    end = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds = end - start;
    std::cout << "number of int: " << length << "  elapsed time: " << elapsed_seconds.count() << "s\n";

}

void run_shuffle3 (size_t length) {

//    container Container;

    std::vector<int> Container;

    for (int i = 0; i < length; i++) Container.push_back(i+1);

//    for (int i = 0; i < length; i++) Container.append(i+1);

    timer_object start, end;

    start = std::chrono::system_clock::now();

    shuffle::shuffle_3(Container);

    end = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds = end - start;
    std::cout << "number of int: " << length << "  elapsed time: " << elapsed_seconds.count() << "s\n";



}