#include "../src/ejercicios.h"
#include "gtest/gtest.h"

using namespace std;

TEST(substringTest, unElemento){
    ASSERT_EQ("H", substring(0, 0, "Hola Mundo"));
}

TEST(substringTest, unElementoDelMedio){
    ASSERT_EQ("M", substring(5, 5, "Hola Mundo"));
}


TEST(substringTest, cincoElementos){
    ASSERT_EQ("Mundo", substring(5, 9, "Hola Mundo"));
}

TEST(substringTest, seisElementos){
    ASSERT_EQ(" Mundo", substring(4, 9, "Hola Mundo"));
}


TEST(substringTest, todosLosElementos){
    ASSERT_EQ("Hola Mundo", substring(0, 9, "Hola Mundo"));
}


