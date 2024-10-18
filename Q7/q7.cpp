#include<iostream>

using namespace std;

int main(){

        int n=5;

        for(int i=1;i<=n;i++){

            if(i==1 || i==3){
                for(int j = 1;j<=5;j++){
                    cout << "* ";
                }
            }

            else if ( i==2){
                cout<< "*       *";
            }

            else{
                cout << "*";
            }


            cout << endl;
        }
    
}