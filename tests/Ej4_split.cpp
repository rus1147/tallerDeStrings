#include "../src/ejercicios.h"
#include "gtest/gtest.h"

using namespace std;

TEST(splitTest, vacio){
    vector<string> v = {};
    ASSERT_EQ(v, split("", ' '));
}

TEST(splitTest, frase){
    vector<string> v = {"hola", "mundo", "se", "programar"};
    ASSERT_EQ(v, split("hola mundo se programar", ' '));
}

TEST(splitTest, sinEspacios){
    vector<string> v = {"hola"};
    ASSERT_EQ(v, split("hola", ' '));
}

TEST(splitTest, EspacioAlFinal){
    vector<string> v = {"hola"};
    ASSERT_EQ(v, split("hola ", ' '));
}

TEST(splitTest, EspacioAlPrincipio){
    vector<string> v = {"hola"};
    ASSERT_EQ(v, split(" hola", ' '));
}

TEST(splitTest, variosEspciosEnElMedio){
    vector<string> v = {"Esto", "es", "un", "string", "con", "distintos", "espaciados"};
    ASSERT_EQ(v, split("Esto   es un   string  con distintos   espaciados", ' '));
}

TEST(splitTest, otroDelimitador){
    vector<string> v = {"Toto", " Cholo", " Tom", " Moncho", " Rodolfo", " Otto", " Pololo"};
    ASSERT_EQ(v, split("Toto, Cholo, Tom, Moncho, Rodolfo, Otto, Pololo", ','));
}

