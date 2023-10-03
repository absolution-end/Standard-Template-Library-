#include<iostream>
#include<list>

using namespace std;

void display(list<int> &lst){
    list<int> ::iterator irt;
    for (irt=lst.begin(); irt != lst.end(); irt++)
    {
        cout<<*irt<<" ";
    }
        
    }
int main()
{
    list<int> list1;
    list1.push_back(5);
    list1.push_back(9);
    list1.push_back(8);
    list1.push_back(7);
    list1.push_back(6);
    list1.sort();
    display(list1);
    cout<<endl;
    //deleting operations
    //list1.pop_back();
    //list1.pop_front();
    //list1.remove(7);
    list<int> list2(3);
    list<int> :: iterator itre;
    itre = list2.begin();
    *itre = 27;
    itre++;
        *itre = 87;
    itre++;
        *itre = 25;
    itre++;
        *itre = 57;
    itre++;
    list2.sort();
    display(list2);
    cout<<endl;
    list1.merge(list2);
    display(list1);  
    return 0;
}