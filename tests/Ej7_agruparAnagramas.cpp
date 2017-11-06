#include "../src/ejercicios.h"
#include "gtest/gtest.h"

using namespace std;


TEST(agruparAnagramasTest, unElemento) {
    vector<string> in = {"hola"};
    vector<vector<string> > out = {{"hola"}};
    ASSERT_EQ(out, agruparAnagramas(in));
}

TEST(agruparAnagramasTest, unoDeCada) {
    vector<string> in = {"hola","solo","uno","otro"};
    vector<vector<string> > out = {{"hola"},{"solo"},{"uno"},{"otro"}};
    ASSERT_EQ(out, agruparAnagramas(in));
}

TEST(agruparAnagramasTest, sinRepes) {
    vector<string> in = {"hola","aloh","laoh","solo","uno", "onu","otro", "varios", "rioasv", "saovir", "irvaos"};
    vector<vector<string> > out = {{"hola","aloh","laoh"},{"solo"},{"uno", "onu"},{"otro"}, {"varios", "rioasv", "saovir", "irvaos"}};
    ASSERT_EQ(out, agruparAnagramas(in));
}

TEST(agruparAnagramasTest, conRepes) {
    vector<string> in = {"hola","aloh","laoh","solo","hola", "solo", "uno", "onu","otro", "varios", "rioasv", "saovir", "irvaos"};
    vector<vector<string> > out = {{"hola","aloh","laoh","hola"},{"solo", "solo"},{"uno", "onu"},{"otro"}, {"varios", "rioasv", "saovir", "irvaos"}};
    ASSERT_EQ(out, agruparAnagramas(in));
}

TEST(agruparAnagramasTest, enOrden) {
    vector<string> in = {"hola","rioasv", "laoh","solo","uno", "otro", "onu", "varios", "aloh", "saovir", "irvaos"};
    vector<vector<string> > out = {{"hola","laoh","aloh"}, {"rioasv","varios", "saovir", "irvaos"}, {"solo"}, {"uno", "onu"},{"otro"}};
    ASSERT_EQ(out, agruparAnagramas(in));
}
