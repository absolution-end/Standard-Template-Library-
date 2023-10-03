#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<string, int> marksmap;
    marksmap["chirayu"]=100;
    marksmap["rohit"]=12;
    marksmap["vashali"]=0;
    marksmap["cooldude"]=69;
    marksmap.insert({{"callme", 69},{"hellobro",58}});
    map<string, int> :: iterator iter;
    for(iter=marksmap.begin();iter!=marksmap.end();iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<" "<<endl;
    }
    return 0;
}