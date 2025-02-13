#include <benchmark/banchmark.h>
#include "core.hpp"

static void shuffle1(benchmark::State& state) {

    for (auto _ : state)
        shuffle::shuffle_1(50);


}

static void shuffle2(benchmark::State& state) {

    for (auto _ : state)
        shuffle::shuffle_2(50);

}

static void shuffle3(benchmark::State& state) {

    for (auto _ : state)
        shuffle::shuffle_3(50);

}


BENCHMARK(shuffle1);

BENCHMARK(shuffle2);

BENCHMARK(shuffle3);


BENCHMARK_MAIN();