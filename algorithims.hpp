#include "classcustvar_template.hpp"


namespace shuffle {


    typedef cstd::cont_array_dyn<int> container;


    container shuffle_1(std::vector<int>& array) {

        container copy;
        size_t n = array.size();


        std::srand(std::time(0));


        while (n) {

            size_t i = std::rand() % array.size();

            if (i < array.size()) {
                copy.append(array[i]);
                array.erase(array.begin() + i);
                n--;
            }
        }

        return copy;
    }


    container shuffle_2(std::vector<int>& array) {

        container copy;
        size_t n = array.size();

        std::srand(std::time(0));

        while (n) {

            size_t i = std::rand() % n--;

            copy.append(array[i]);
            array.erase(array.begin() + i);
        }

        return copy;
    }

    std::vector<int> shuffle_3(std::vector<int>& array) {

        size_t m = array.size();
        int t, i;

        std::srand(std::time(0));

        while (m) {

            i = std::rand() % m--;

            t = array[m];
            array[m] = array[i];
            array[i] = t;
        }

        return array;
    }

    container shuffle_(container& array) {

        size_t m = array.length();
        int t, i;

        std::srand(std::time(0));

        while (m) {

            i = std::rand() % m--;

            t = array[m];
            array[m] = array[i];
            array[i] = t;
        }

        return array;
    }

}
