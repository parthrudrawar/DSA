 #include<iostream>
 using namespace std;
 int main() {
    string all;
    cout<<"Enter the string:"<<endl;
    getline(cin,all);

     string small;
    cout<<"Enter the substring:"<<endl;
    getline(cin,small);
    
    while (all.length()!=0 && all.find(small)<all.length()){
        all.erase(all.find(small),small.length());
    }
    cout<<"New string is:"<<all;
    
    
    return 0;
 }