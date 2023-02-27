#include<iostream>
#include<vector>


using namespace std;
template<class T>
void display(vector<T> &v){
    cout<<"display the vector"<<endl;
    for(int i=0; i < v.size() ;i++){
        cout<<v[i]<<"";
      //  cout<<v.at(i)<<"";
    }
    cout<<endl;
}

int main(){
    vector<int> vec1;
    vector<char> vec2(4);
    vector<char> vec3(vec2);
    vector<int> v(6,13);
    int element, size=5;
    vec2.push_back('5');
    display(vec2);
    display(vec3);
    display(v);
    return 0;
}