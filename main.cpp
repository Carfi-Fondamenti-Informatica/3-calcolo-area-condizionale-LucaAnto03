#include <iostream>
using namespace std;

int main() {
   float a=0, b=0, area=0;
    int opzione=0;
    cin >> a >> b >> opzione ;
    switch (opzione) {
        case 0:
            area = a*b*0.5;
            cout << area ;
            break;
        case 1:
            area = a*a;
            cout << area ;
            break;
        case 2:
            area = a*b;
            cout << area ;
            break;
    }
   return 0;
}
