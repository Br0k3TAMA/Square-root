#include <bits/stdc++.h>
using namespace std;
bool type = false;
unsigned int nrlength;
int v[2499];
void checker(){
    if(!(nrlength%2)) type = true;
    else type = false;
    
}
void reader(){
    printf("Just add spaces between the numbers!Thank you! \n");
    cin>>nrlength;
    for(int i=1;i<=nrlength;i++)
        cin>>v[i];
}


void TYPE1(){
    long long nr,guessed,aux;
    long long doubler;
    int c=v[1]*10+v[2];
    for(int i=1;i<=c;i++)
     if(i*i>c)break;
     else nr=i;
     cout<<nr;
     c-=nr*nr;
   
    for(int i=3;i<nrlength;i+=2)
    {
        c*=100;
        c+=(v[i]*10 + v[i+1]);
       
        doubler=nr*2;
        for(int i=0;i<=9;i++)
           if((doubler*10 + i)*i>c)
            break;
           else guessed = (doubler*10+i)*i,aux=i;
               
        c-=guessed;
        cout<<aux;
        nr*=10;
        nr+=aux;
        
    }if(c){
    cout<<',';
     for(int i=1;i<=7;i++){
        c*=100;
        doubler=nr*2;
        for(int i=0;i<=9;i++)
           if((doubler*10 + i)*i>c)
            break;
           else guessed = (doubler*10+i)*i,aux=i;
               
        c-=guessed;
        nr*=10;
        nr+=aux;
        cout<<aux;}
    
}}

void TYPE2(){
    long long nr,guessed,aux;
    long long doubler;
    int c=v[1];
    for(int i=1;i<=c;i++)
     if(i*i>c)break;
     else nr=i;
     cout<<nr;
     c-=nr*nr;
    
    for(int i=2;i<nrlength;i+=2)
    {
        c*=100;
        c+=(v[i]*10 + v[i+1]);
       
        doubler=nr*2;
        for(int i=0;i<=9;i++)
           if((doubler*10 + i)*i>c)
            break;
           else guessed = (doubler*10+i)*i,aux=i;
               
        c-=guessed;
        cout<<aux;
        nr*=10;
        nr+=aux;
        
    }if(c){
    cout<<',';
    
    for(int i=1;i<=7;i++){
        c*=100;
        doubler=nr*2;
        for(int i=0;i<=9;i++)
           if((doubler*10 + i)*i>c)
            break;
           else guessed = (doubler*10+i)*i,aux=i;
               
        c-=guessed;
        nr*=10;
        nr+=aux;
        cout<<aux;
    }}
    
}
void selector(){ 
    
    if(type)
       TYPE1();
    else TYPE2();
    
}
int main()
{   reader();
    checker();
    selector();
   
    
    
}
//TYPE 1 EVEN
//TYPE 2 ODD
