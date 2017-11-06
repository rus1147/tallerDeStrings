#include "../src/ejercicios.h"
#include "gtest/gtest.h"

using namespace std;

TEST(esPalindromoTest, impar){
    ASSERT_TRUE(esPalindromo("menem"));
}

TEST(esPalindromoTest, par){
    ASSERT_TRUE(esPalindromo("roor"));
    ASSERT_FALSE(esPalindromo("pkjiejkp"));
}

TEST(esPalindromoTest, unaLetra){
    ASSERT_TRUE(esPalindromo("l"));
}

TEST(esPalindromoTest, dosLetras){
    ASSERT_TRUE(esPalindromo("ll"));
    ASSERT_FALSE(esPalindromo("lk"));
}
