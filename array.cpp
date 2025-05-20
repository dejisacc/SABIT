#include <iostream>
using namespace std;

int main(){
    int i;
    int A[] = {1,5,1,1,1,2};
    int n = sizeof A[n]/ sizeof A[0];
    bool sama = true;
    
    for (i = 0; i < n; i++){
        if (A[i] != A[0]){
        sama = false;
        break;
        }
    }

    if (sama){
        cout << "elemen-elemennya tdk sama";
    }else{
        cout << "elemen-elemennya sama";
    }

    return 0;

}