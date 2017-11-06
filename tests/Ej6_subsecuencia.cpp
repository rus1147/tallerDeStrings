#include "../src/ejercicios.h"
#include "gtest/gtest.h"

using namespace std;

TEST(subsecuenciaTest, vacias){
    ASSERT_TRUE(subsecuencia("", ""));
}

TEST(subsecuenciaTest, s1MasGrande){
    ASSERT_FALSE(subsecuencia("asdas", "sd"));
}

TEST(subsecuenciaTest, iguales){
    ASSERT_TRUE(subsecuencia("asds", "asds"));
}

TEST(subsecuenciaTest, substring){
    ASSERT_TRUE(subsecuencia("asd", "juasdop"));
}

TEST(subsecuenciaTest, subsec){
    ASSERT_TRUE(subsecuencia("asd", "laaidsakikdop"));
}

TEST(subsecuenciaTest, desordendos){
    ASSERT_FALSE(subsecuencia("aiksd", "lllaaiiissskikdop"));
}

TEST(subsecuenciaTest, s1Repes){
    ASSERT_FALSE(subsecuencia("asdasdds", "aadasdasds"));
    ASSERT_TRUE(subsecuencia("asdasdds", "laaiskjhsdsmamksmdsds"));
}
