#include <iostream>
#include "gtest/gtest.h"
#include "src/ejercicios.h"

int main(int argc, char **argv) {
    std::cout << "Implementando GTest!!" << std::endl;
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
