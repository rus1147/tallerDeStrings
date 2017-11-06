#include "../src/ejercicios.h"
#include "gtest/gtest.h"

using namespace std;

TEST(darVueltaPalabraTest, unaPalabra){
    ASSERT_EQ("hola", darVueltaPalabra("hola"));
}

TEST(darVueltaPalabraTest, variosPalabras){
    ASSERT_EQ("programar se mundo hola", darVueltaPalabra("hola mundo se programar"));
}

TEST(darVueltaPalabraTest, variosEspacios){
    ASSERT_EQ("programar se mundo hola", darVueltaPalabra("  hola   mundo   se   programar  "));
}

TEST(darVueltaPalabraTest, vacio){
    ASSERT_EQ("", darVueltaPalabra(""));
}
