#include "ejercicios.h"



bool esPalindromo(string s){
    int i=0;
    int j=s.size();
    bool palindromo= false;
    while(i<s.size()){
        if(s[i]==s[j-i-1]){
            palindromo=true;
        } else{
            return false;
        }
        i++;
    }
    
    return palindromo;
}

bool anagramas(string s1, string s2){
    int i=0;
    bool ana= false;
    int j=0;
    int count=0;
    if(s1.size()==s2.size()){
        while(i<s1.size()){
            j=0;
            while(j<s2.size()){
                if(s1[i]==s2[j]){
                    ana=true;
                    count++;
                }
                j++;
            }
            if(count==0){
                return false;
            }
            i++;
        }
        
    }else{
        return false;
    }
    return count==s1.size();
}

string substring(int j, int k, string s){
    int i=j;
    string res{};
    if(j<=k && k<s.size()){
        while(i<=k){
            res.push_back(s[i]);
            i++;
        }
    }
    return res;
}

vector<string> split(string s, char delimitador){
    vector<string> result{};
    string palabra{};
    int i=0;
    if(s.size()!=0){
    while(i<s.size()){
        if(s[i]!=delimitador){
            while(i<s.size() && s[i]!=delimitador){
                palabra.push_back(s[i]);
                i++;
            }
            result.push_back(palabra);
            palabra={};
        }
        i++;
        }
    }
    return result;
}


string darVueltaPalabra(string s){
    
    return "";
}

bool subsecuencia(string s, string t){
    cout << "Implementame" << endl;
    return false;
}

vector<vector<string> > agruparAnagramas(vector<string> palabras){
    cout << "Implementame" << endl;
    vector<vector<string> > anagramasAgrupados;
    return anagramasAgrupados;
}


string reversoCada(string s, int k){
    cout << "Implementame" << endl;
    return "";
}

