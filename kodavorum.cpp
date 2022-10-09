#include <iostream>
#include <vector>
using namespace std;

//ֆունկցիայի նախատիպը (prototype)
void encode(char*, int, int, char*);

int main(){
    char ch[9] = {'H', 'e', 'l', 'l', 'o', 'I', 'n', 'g','a'};
    char matric[3][3];
    cout << endl;
    //միաչափ զանգվածից ստանում ենք երկչափ զանգված
    encode(&matric[0][0], 3, 3, &ch[0]);
   
   //արտածում ենք մատրիցան
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << matric[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\n" ;
    //կոդավորում ենք 
    encode(&matric[0][0], 3, 3, &ch[0]);
   
   //տպում ենք կոդավորված տեսքով
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << matric[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    cout << "\n" ;
    //ապակոդավորում ենք
    encode(&matric[0][0], 3, 3, &ch[0]);
   
   //տպում ենք նախնականը (չկոդավորված տեսքով)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matric[i][j] << " ";
        }
        cout <<endl;
    }
    
  
    return 0;
}

void encode(char* el, int m, int n, char* ch) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            *((el + 3*j)+i) = *((ch + j) + 3*i);
        }
    }
   for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            *((ch + j) + 3*i) = *((el + 3*i)+j);
        }
    }
}
