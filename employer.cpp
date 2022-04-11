#include <iostream>
using namespace std;
struct employer{
    int empid;
    char ename[50];
    int salary;
};
int main(){
    employer e1;
    cin>>e1.empid>>e1.ename>>e1.salary;

    employer e2;
    cin>>e2.empid>>e2.ename>>e2.salary;
    if(e1.salary>e2.salary){
        cout<<e1.salary<<e1.ename;
    }
    else{
        cout<<e2.salary;
    }

    return 0;
