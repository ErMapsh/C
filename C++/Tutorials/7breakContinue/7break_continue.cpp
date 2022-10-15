#include<iostream>
using namespace std;

int main(){

    // ----------break-------
    // cout<<"Break"<<endl;
    // for (int i = 0; i < 40; i++)
    // {
    //     if(i==2){
    //         break;
    //     }
    //     cout<<i<<endl;
    // }

    // ---------continue--------
    cout<<"Continue"<<endl;
    for (int i = 0; i < 5; i++)
    {
        if(i==2){
            continue;
        }
        cout<<i<<endl;
    }

    
    return 0;
}
