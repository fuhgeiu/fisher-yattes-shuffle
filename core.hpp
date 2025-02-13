#include "algorithims.hpp"
#include <vector>
#include <iostream>

typedef cstd::cont_array_dyn<int> container;

void run_shuffle1 (size_t length) {

    std::vector<int> container;

    for (int i = 0; i < length; i++) container.push_back(i+1);

    // call algorithim func and pass in array
    shuffle::shuffle_1(container);
    // option to print array


}

void run_shuffle2 (size_t length) {

    std::vector<int> container;

    for (int i = 0; i < length; i++) container.push_back(i+1);

    // call algorithim func and pass in array
    shuffle::shuffle_2(container);
    // option to print array

}

void run_shuffle3 (size_t length) {

//    container Container;

    std::vector<int> Container;

    for (int i = 0; i < length; i++) Container.push_back(i+1);

//    for (int i = 0; i < length; i++) Container.append(i+1);

    // call algorithim func and pass in array
    shuffle::shuffle_3(Container);
    // option to print array



}