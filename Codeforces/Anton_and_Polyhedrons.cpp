/*Tetrahedron. Tetrahedron has 4 triangular faces.
Cube. Cube has 6 square faces.
Octahedron. Octahedron has 8 triangular faces.
Dodecahedron. Dodecahedron has 12 pentagonal faces.
Icosahedron. Icosahedron has 20 triangular faces.*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
   // string t="Tetrahedron Cube Octahedron Dodecahedron Icosahedron";
    int a=0;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s=="Tetrahedron"){
            a+=4;
        }
        else if(s=="Cube"){
            a+=6;
        }
        else if(s=="Octahedron"){
            a+=8;
        }
        else if(s=="Dodecahedron"){
            a+=12;
        }
        else if(s=="Icosahedron"){
            a+=20;
        }
    }
    cout<<a<<endl;
    
    return 0;
}

//method 2 using map

/*#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> faces = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}
    };

    int total = 0;
    string s;

    while (n--) {
        cin >> s;
        total += faces[s];
    }

    cout << total << endl;
    return 0;
}*/