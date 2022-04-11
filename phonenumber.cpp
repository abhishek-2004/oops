#include<iostream>
using namespace std;
struct student {
    int roll_no;
    int phone_no;
    float marks;
    string name;
};
int main(){
    student s1;
    cin>>s1.roll_no>>s1.phone_no>>s1.marks>>s1.name;
    student s2;
    cin>>s2.roll_no>>s2.phone_no>>s2.marks>>s2.name;
    
    if(s1.marks > s2.marks){
        cout<<s1.name;}
        else{
        cout<<s2.name;
    }
}
