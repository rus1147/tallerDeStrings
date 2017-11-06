#include "../src/ejercicios.h"
#include "gtest/gtest.h"

using namespace std;

TEST(reversoCadaTest, todoElString){
    ASSERT_EQ("aloh", reversoCada("hola", 4));
}

TEST(reversoCadaTest, justo){
    ASSERT_EQ("libros", reversoCada("ilrbso", 2));
}

TEST(reversoCadaTest, tePasaste){
    ASSERT_EQ("moctupodaar", reversoCada("computadora", 3));
}

TEST(reversoCadaTest, noDarVuelta){
    ASSERT_EQ("computadora", reversoCada("computadora", 1));
}
