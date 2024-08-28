#include <iostream>
#include<fstream>
#include "string"
#include "vector"
using namespace std;
bool prinum(int num){
    bool flag=1;
    for(int i=2;i<num/2;i++){
        if(num%i==0)
            return 0;
        break;
    }
    return flag;
}
int  divfuc(int num){
    int count=0;
    int *result=new int[num+1];
    int temp=num;
    int total=1;
    vector<int>newnums;
    for (int i = 0; i < num+1; ++i) {
        result[i]=0;
    }
    for (int i = 2; i <= num/2; ++i) {
        if(prinum(i)){
           if(temp%i==0){
               count++;
               temp=temp/i;
           }
           result[i]=count;
        }
    }
    for (int i = 2; i <=num ; ++i) {
        total=total*(result[i]+1);
    }
   return total;

}
string read(){
    string data;
    ifstream infile;
    infile.open("C:/Users/Administrator/Desktop/1.txt");
    infile>>data;
    infile.close();
   return data;
}
string write(){
    ofstream outfile;
    outfile.open("C:/Users/Administrator/Desktop/2.txt");
    outfile<<result;
    outfile.close();
}
int main() {
    char data[1];
    read();
    return 0;
}
