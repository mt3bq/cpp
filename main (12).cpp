#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;
//class start
class student_universitey{
private:
int k=0;
string firstname[100];
string listname[100];
int acnumber[100];
char ba[100];
int phone[100];
string email[100];
int aa_search;
string search_string;
int search_int;
int aa_edit;
string edit_string;
int edit_int;
string delete_string;
int delete_int;
int aa_delete;

public:
void add_student();
void showall();
void search_student();
void edit_student();
void delete_student();
void seve_student();
void showfile();
void listall(){
cout<<"==========================================================================================================="<<endl;
cout<<"[1]Add student:"<<endl;
cout<<"[2]Show ALL Student"<<endl;
cout<<"[3]search for student"<<endl;
cout<<"[4]Edit for Student"<<endl;
cout<<"[5]Delete student"<<endl;
cout<<"[6]For Save student data"<<endl;
cout<<"[7]opne file All date"<<endl;
cout<<"[0]Exit"<<endl;
cout<<"==========================================================================================================="<<endl;
}
};
void student_universitey::add_student(){
do{
cout<<"============================================================================"<<endl;
cout<<"STUDENT"<<k+1<<endl;
cout<<"****************************************************************************"<<endl;
cout<<"Enter First name:";
cin>>firstname[k];
cout<<"Enter list name:";
cin>>listname[k];
cout<<"Enter University ID:";
cin>>acnumber[k];
cout<<"Enter phone number:";
cin>>phone[k];
cout<<"Enter Email:";
cin>>email[k];
cout<<"you need Back Enter[b]or not Enter[c]:";
cin>>ba[k];
system("cls");
}while(ba[k++]!='b');
}
void student_universitey::showall(){

cout<<"ID\tFirstname\tListname\tUniversityID\tPhonenumber\tEmail"<<endl;

for(int i=0;i<k;i++){
 cout<<i<<"\t";
cout<<firstname[i]<<"\t\t";
cout<<listname[i]<<"\t\t";
cout<<acnumber[i]<<"\t";
cout<<phone[i]<<"\t";
cout<<email[i]<<endl;

};
};
void student_universitey::search_student(){
cout<<"[1]For Search First name or List name or Email"<<endl;
cout<<"[2]For Search Phone number or UniversityID"<<endl;
cout<<"============================================================================="<<endl;
cout<<"Enter Your choice:";
cin>>aa_search;
switch(aa_search){
case 1:
cout<<"Enter First name or List name or Email :";
cin>>search_string;
cout<<"ID\tFirstname\tListname\tUniversityID\tPhonenumber\tEmail"<<endl;
for(int j=0;j<100;j++){
 if(search_string==firstname[j]||search_string==listname[j]||search_string==email[j]){
 cout<<j<<"\t";
cout<<firstname[j]<<"\t\t";
cout<<listname[j]<<"\t\t";
cout<<acnumber[j]<<"\t";
cout<<phone[j]<<"\t";
cout<<email[j]<<endl;
break;
}else if(j==99){
cout<<"Not fond"<<endl;
}
}
break;
case 2:
cout<<"Enter Phone number or UniversityID:";
cin>>search_int;
cout<<"ID\tFirstname\tListname\tUniversityID\tPhonenumber\tEmail"<<endl;
for(int y=0;y<100;y++){
if(search_int==phone[y]||search_int||acnumber[y]){
  cout<<y<<"\t";
cout<<firstname[y]<<"\t\t";
cout<<listname[y]<<"\t\t";
cout<<acnumber[y]<<"\t";
cout<<phone[y]<<"\t";
cout<<email[y]<<endl;
break;
}else if(y==99){
cout<<"Not fond"<<endl;
}
}
break;
default:
    cout<<"Not fond"<<endl;
}
}
void student_universitey::edit_student(){
cout<<"[1]For Edit First name or List name or Email"<<endl;
cout<<"[2]For Edit Phone number or UniversityID "<<endl;
cout<<"============================================================================="<<endl;
cout<<"Enter Your choice:";
cin>>aa_edit;
switch(aa_edit){
case 1:
cout<<"Enter First name or List name or Email you need Edit :";
cin>>edit_string;
for(int i=0;i<100;i++){
if(edit_string==firstname[i]||edit_string==listname[i]||edit_string==email[i]){
cout<<"============================================================================"<<endl;
cout<<"ACOUNT"<<i+1<<endl;
cout<<"****************************************************************************"<<endl;
cout<<"Enter New First name:";
cin>>firstname[i];
cout<<"Enter New list name:";
cin>>listname[i];
cout<<"Enter New University ID:";
cin>>acnumber[i];
cout<<"Enter New phone number:";
cin>>phone[i];
cout<<"Enter New Email:";
cin>>email[i];
break;
}else if(i==99){
    cout<<"Not fond"<<endl;
}
}
break;
case 2:
cout<<"Enter Phone number or UniversityID you need Edit:";
cin>>edit_int;
for(int u=0;u<100;u++){
if(edit_int==phone[u]||edit_int==acnumber[u]){
cout<<"============================================================================"<<endl;
cout<<"ACOUNT"<<u<<endl;
cout<<"****************************************************************************"<<endl;
cout<<"Enter New First name:";
cin>>firstname[u];
cout<<"Enter New list name:";
cin>>listname[u];
cout<<"Enter New University ID:";
cin>>acnumber[u];
cout<<"Enter New phone number:";
cin>>phone[u];
cout<<"Enter New Email:";
cin>>email[u];
break;
}else if(u==99){
cout<<"Not fond"<<endl;
}
}
break;
default:
cout<<"Not fond"<<endl;
}




//
}
void student_universitey::delete_student(){
cout<<"[1]For Delete First name or List name or Email"<<endl;
cout<<"[2]For Delete Phone number or University ID " <<endl;
cout<<"====================================================================="<<endl;
cout<<"Enter Your choice:";
cin>>aa_delete;
switch(aa_delete){
case 1:
cout<<"Enter First name or List name or Email You need Delete:";
cin>>delete_string;
for(int r=0;r<100;r++){
if(delete_string==firstname[r]||delete_string==listname[r]||delete_string==email[r]){
firstname[r]=" ";
listname[r]=" ";
email[r]="  ";
phone[r]=0;
acnumber[r]=0;
cout<<"Done"<<endl;
break;
}else if(r==99){
cout<<"Not fond"<<endl;
}
}
break;
case 2:
cout<<"Enter Phone number or  University ID:";
cin>>delete_int;
for(int v=0;v<100;v++){
if(delete_int==phone[v]||delete_int==acnumber[v]){
firstname[v]=" ";
listname[v]=" ";
email[v]="  ";
phone[v]=0;
acnumber[v]=0;
cout<<"Done"<<endl;
break;
}else if(v==99){
cout<<"Not fond"<<endl;
}
}
break;
default:
    cout<<"Not fond"<<endl;





}
};
void student_universitey::seve_student(){
ofstream db;
db.open("student.txt",ios::app);
db<<"Firstname\tListname\tUniversityID\tPhonenumber\tEmail"<<endl;
for(int t=0;t<k;t++){
db<<firstname[t]<<"\t\t";
db<<listname[t]<<"\t\t";
db<<acnumber[t]<<"\t\t";
db<<phone[t]<<"\t\t";
db<<email[t]<<endl;
}
db.close();
cout<<"Done........"<<endl;




}
void student_universitey::showfile(){
ifstream db;
db.open("student.txt");
cout<<db.rdbuf();
db.close();
}




















int main(){
bool lo=true;
student_universitey add1;
do{



add1.listall();
int a;
cout<<"Enter Your choice:";
cin>>a;
switch(a){
case 1:
add1.add_student();
break;
case 2:
add1.showall();
break;
case 3:
add1.search_student();
break;
case 4:
add1.edit_student();
break;
case 5:
add1.delete_student();
break;
case 6:
add1.seve_student();
break;
case 7:
add1.showfile();
break;

case 0:
cout<<"Tank you for using program"<<endl;
lo=false;






};
}while(lo!=false);


return 0;
}
