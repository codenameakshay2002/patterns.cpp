#include<ioStream>
using namespace std;

int main(){
int n;
cin>>n;
/*
int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<n-j+1;
        j++;
    }
    cout<<endl;
    i++;
}
*/
/*
int i=1;
int count=1;
while(i<=n){

        int j=1;
        while(j<=n){
            cout<<count;
            count = count + 1;
            j++;
        }
        cout<<" " <<endl;
        i++;


}
*/
/*
int i=1;
int count=1;
while(i<=n){

        int j=1;
        while(j<=i){
            cout<< count ;
            count = count + 1;
            cout<<" ";
            j++;
        }
        cout<<" " <<endl;
        i++;


}
*/
/*
int i=1;

while(i<=n){

        int j=1;
        while(j<=i){


            cout<<"*";
            j++;
        }
        cout<<" " <<endl;
        i++;


}*/

/*
int i=1;
int count=1;
while(i<=n){

        int j=1;
        while(j<=i){
            cout<<count;
            count++;
        cout<<" " ;
            j++;
        }
        cout<<" " <<endl;
        i++;


}*/
/*
int i=1;
 int value=1;
while(i<=n){

        int j=1;


        while(j<=i){
          cout<<value;
          value =value+1;
        cout<<" " ;
            j++;
        }
        cout<<" " <<endl;
        i++;


}
*/
/*
int i=1;
char ch=65;
while(i<=n){

        int j=1;
        while(j<=n){
        cout<<ch<<" " ;

            j++;
        }
        ch= ch+1;
        cout<<" " <<endl;
        i++;
}
*/
/*
int i=1;
while(i<=n){

        int space=n-i;
        while(space){
                cout<<" ";
                space--;
        }
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
cout<<endl;

i++;
}
*/
/*
int i=1;
while(i<=n){
    int space=n-i;
    while(space){
        cout<<" ";
        space=space-1;
    }
    //traingle 1
        int j=1;
    while(j<=i){
        cout<<j;
        j++;
    }
    int s =i-1;
    while(s){
        cout<<s;
        s--;
    }
    cout<<endl;
    i++;
}*/
/*
int i=1;
while(i<=n){
    int space=n-i;
    while(space){
        cout<<" ";
        space--;
    }
    int j=1;
    while(j<=i){
        cout<<"*";
        j++;
    }
    int spp =i-1;
    while(spp){
        cout<<"*";
        spp--;
    }
    cout<<endl;
    i++;
}*/

/*
int i=1;
while(i<=n){
    int num=n-i+1;
    int p=1;
    while(num){

        cout<<p;
        p++;

        num--;
    }
    int j=1;
    while(j<i){
        cout<<"*";
        j++;
    }
    int start=j;
    while(start){
        cout<<"*";
        start--;
    }

       int pum=n-i+1;
        int p1=n-i+1;
    while(pum){

        cout<<p1;
        p1--;

        pum--;
    }

    cout<<endl;
    i++;
}
*/
return 0;
}
