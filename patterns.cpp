#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void print1(int n){
    for (int i =0;i<n;i++){
        for (int j =0;j<n;j++){
            cout<<"#";
        }
        cout<<endl;
    }
}
int main() {
    int t,n;
    cin>>t;
    for (int i =0;i<t;i++){
        int n;
        cin>>n;
        print1(n);
    }
    return 0;

}
