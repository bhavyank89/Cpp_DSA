#include<bits/stdc++.h>
using namespace std;

void pattern1(int row=3,int coloumn=4){
    for(int r=0;r<row;r++){
        for(int c=0;c<coloumn;c++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
void pattern2(int row=3,int coloumn=4){
    for(int r=0;r<row;r++){
        for(int c=0;c<coloumn;c++){
            cout<<r+1<<" ";
        }
        cout<<endl;
    }
}
void pattern3(int row=3,int coloumn=4){
    for(int r=0;r<row;r++){
        for(int c=0;c<coloumn;c++){
            cout<<c+1<<" ";
        }
        cout<<endl;
    }
}
void pattern4(int row=3,int coloumn=4){
    for(int r=0;r<row;r++){
        for(int c=0;c<coloumn;c++){
            cout<<coloumn-c<<" ";
        }
        cout<<endl;
    }
}
void pattern5(int row=3,int coloumn=4){
    int m=1;
    for(int r=0;r<row;r++){
        for(int c=0;c<coloumn;c++){
            cout<<m<<"\t";
            m++;
        }
        cout<<endl;
    }
}
void pattern6(int row=3,int coloumn=4){
    for(int r=0;r<row;r++){
        for(int c=0;c<=r;c++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
void pattern7(int row=3,int coloumn=4){
    for(int r=0;r<row;r++){
        for(int c=0;c<=r;c++){
            cout<<r+1<<"\t";
        }
        cout<<endl;
    }
}
void pattern8(int row=3,int coloumn=4){
    int m=1;
    for(int r=0;r<row;r++){
        for(int c=0;c<=r;c++){
            cout<<m<<"\t";
            m++;
        }
        cout<<endl;
    }
}
void pattern9(int row=3,int coloumn=4){
    for(int r=0;r<row;r++){
        int m=r+1;
        for(int c=0;c<=r;c++){
            cout<<m<<"\t";
            m++;
        }
        cout<<endl;
    }
}
void pattern10(int row=3,int coloumn=4){
    for(int r=0;r<row;r++){
        int m=r+1;
        for(int c=0;c<=r;c++){
            cout<<m<<"\t";
            m--;
        }
        cout<<endl;
    }
}
void pattern11(int row=3,int coloumn =4){
    char ch = 'A';
    for(int r=0;r<row;r++){
        for(int c=0;c<coloumn;c++){
            cout<<ch<<" ";
        }
        ch = ch + 1;
        cout<<endl;
    }
}
void pattern12(int row=3,int coloumn =4){
    char ch = 'A';
    for(int r=0;r<row;r++){
        for(int c=0;c<coloumn;c++){
            cout<<char(ch+c)<<" ";
        }
        cout<<endl;
    }
}
void pattern13(int row=3,int coloumn =4){
    char ch = 'A';
    for(int r=0;r<row;r++){
        for(int c=0;c<coloumn;c++){
            cout<<ch<<" ";
            ch = ch + 1;
        }
        cout<<endl;
    }
}
void pattern14(int row=3,int coloumn =4){
    for(int r=0;r<row;r++){
    char ch = 'A'+r;
        for(int c=0;c<coloumn;c++){
            cout<<ch<<" ";
            ch = ch + 1;
        }
        cout<<endl;
    }
}
void pattern15(int row=3,int coloumn =4){
    char ch = 'A';
    for(int r=0;r<row;r++){
        for(int c=0;c<=r;c++){
            cout<<ch<<" ";
            ch = ch + 1;
        }
        cout<<endl;
    }
}
int main(){
    // pattern1();
    // pattern2();
    // pattern3();
    // pattern4();
    // pattern5();
    // pattern6();
    // pattern7();
    // pattern8();
    // pattern9();
    // pattern10();
    // pattern11();
    // pattern12();
    // pattern13();
    // pattern14();
    // pattern15();
}