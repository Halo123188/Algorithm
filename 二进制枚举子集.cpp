#include <iostream>
using namespace std;
int main(int argc, const char * argv[]){
    int a[5] = {0,1,2,3,4};
    for(int i = 1;i<=16;i++){
        int tot = 0;
        int ten = 1;
        for(int k = 1;k<=4;k++){
            if(i&(1<<(k-1))){
                tot+=a[k]*ten;
                ten = ten*10;
            }
        }
        cout<<tot<<endl;
    }
    
    return 0;
}
