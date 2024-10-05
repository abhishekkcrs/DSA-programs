#include<bits/stdc++.h> 
#include<algorithm>

using namespace std;
void print1(int n){
    for(int i=0;i<n;i++){
        for (int j=0;j<=i;j++)
            cout<<i+1;
        cout<<endl;
    }
}

void print2(int n){
    for(int i =0;i<n;i++){
        for(int j=0;j<n-i; j++)
            cout<<j+1;
        cout<<endl;
    }
}

void print3(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++)
            cout<<" ";
        for (int k=0;k<2*i+1;k++)
            cout<<"*";
        cout<<endl;
    }
}

void print4(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++)
            cout<<" ";
        for (int k=0;k<2*(n-i)-1;k++)
            cout<<"*";
        for(int j=0;j<i;j++)
            cout<<" ";
        cout<<endl;
    }
}

void print5(int n){
    for(int i=1; i<=2*n-1;i++){
        int stars=i;
        if(i>n)  stars=2*n-i;
        for(int j=1;j<=stars;j++)
            cout<<"*";
        
        cout<<endl;
    }
}

void print6(int n){

    for(int i=1;i<=5 ; i++){
        int start = i;
        if( start % 2 !=0 )
            start=1;
        else start=0;
        for(int j=1;j<=i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
}

void print7(int n){

    for(int i=1;i<=n;i++){
        for (int j=1;j<=i;j++)
            cout<<j;
        
        for(int k=1;k<=2*n-2*i; k++)
            cout<<" ";
        
        for (int j=1;j<=i;j++)
            cout<<i-j+1;
        
        cout<< endl;
    }

}

void print8(int n){

    for(int i=0;i<n;i++){
        for(char ch='A';ch<= 'A' + n-i-1; ch++)
            cout<<ch;
        cout<<endl;
    }
}

void print9(int n){

    for(int i=1;i<=n;i++){

        for(int j=1;j<=n-i;j++)
            cout<< " ";
        char ch='A';
        int breakpoint=((2*i)-1)/2;
        for (int  k=1; k<=(2*i)-1; k++){
            cout<<ch;
            if(k>breakpoint)
                ch--;
            else
                ch++;

        }
        cout<< endl;

    }
}

void print10(int n){

    char ch='A'+n-1;
    for(int i=0;i<n;i++){
        char c=ch-i;
        for (int j=0;j<=i;j++){
            cout<<c;
            c++;
        }
        cout<<endl;
    }
}

void print11(int n){

    int space=n-1;

    for(int i=1;i<=n;i++){
        
        //stars
        int stars=i;
        if(i>=n/2){
            stars=n-i+1;
        }
        
        for(int j=1;j<=stars;j++)
            cout<<"*";
    
        //space
        for(int k=1;k<=space;k++){
            cout<<" ";
        }

        //stars
        for(int j=1;j<=stars;j++)
            cout<<"*";

        if (i<=n/2)
                space-=2;
        else
            space+=2;

        cout<<endl;
    }

}

void print12(int n){

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n || j==1 || j==n)
                cout<<"*";
            else  cout<<" ";
        }

        cout<<endl;

    }


}