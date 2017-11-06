#include "../src/ejercicios.h"
#include "gtest/gtest.h"

using namespace std;

TEST(anagramaTest, sonAnagramas){
ASSERT_TRUE(anagramas("hola", "aloh"));
}

TEST(anagramaTest, sonAnagramas1){
    ASSERT_TRUE(anagramas("persona", "reposan"));
}

TEST(anagramaTest, unElementoIgual){
ASSERT_TRUE(anagramas("h", "h"));
}

TEST(anagramaTest, unElementoDistinto){
ASSERT_FALSE(anagramas("h", "o"));
}


TEST(anagramaTest, noSonAnagramasIgualLongitud){
ASSERT_FALSE(anagramas("hola", "lalo"));
}

TEST(anagramaTest, noSonAnagramasXlongitud){
ASSERT_FALSE(anagramas("hola", "alohasd"));
}

TEST(anagramaTest, noSonAnagramasXlongitud1){
    ASSERT_FALSE(anagramas("persona", "reposa"));
}


TEST(anagramaTest, noSonAnagramasXVariosRepetidos){
ASSERT_FALSE(anagramas("hola", "allohh"));
}
