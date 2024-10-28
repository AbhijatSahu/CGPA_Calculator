#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,max_marks;
    float CGPA=0;
    cout<<"please enter number of subjects:";
    cin>>n;
    int marks[n];
    //checking if valid input
    if(n<=0){
        cout<<"please enter a valid number!\n";
        main();
    }
    cout<<"please enter marks in each subject\n";
    for(int i=0;i<n;i++){
        cout<<i+1<<")";
        cin>>marks[i];
        //check if valid input
        if(marks[i]<0 || marks[i]>100){
            cout<<"please enter valid marks!\n";
            i--;
            continue;
        }
        //grade points on the basis of marks
        switch(marks[i]){
            case 91 ... 100 :
                CGPA+=10;
                break;
            case 81 ... 90 :
                CGPA+=9;
                break;
            case 71 ... 80 :
                CGPA+=8;
                break;
            case 61 ... 70 :
                CGPA+=7;
                break;
            case 51 ... 60 :
                CGPA+=6;
                break;
            case 41 ... 50 :
                CGPA+=5;
                break;
            case 33 ... 40 :
                CGPA+=4;
                break;
        }
    }
    if((CGPA/n)<4){
        cout<<"you fail\n";
        cout<<"your CGPA is:"<<CGPA/n<<endl;
    }
    else{
        cout<<"congratulations your CGPA is:"<<CGPA/n<<endl;
    }
}