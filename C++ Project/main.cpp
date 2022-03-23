#include<iostream>
using namespace std;
#include<conio.h>
        int main(){

    for(int r=1; r<=7; r++){
        for(int c=1; c<=4; c++){
            if((r==1||r==4||r==7)&&c!=4&&c!=1||(c==1)&&(r!=1&&r!=4&&r!=5&&r!=6)||(c==4)&&r!=2&&r!=3&&r!=4&&r!=7){
                cout<<"*";
            }else
            {
                cout<<" ";
            }
        }
        for(int s=1; s<=7; s++){
            cout<<" ";
        }
        for(int c=1; c<=4; c++){
            if(r==4||c==1||c==4){
                cout<<"*";
            }else
            {
                cout<<" ";
            }
        }
        for(int s=1; s<=7; s++){
            cout<<" ";
        }
        for(int c=1; c<=4; c++){
            if((c==1||c==4)&&r!=1||(r==1)&&c!=1&&c!=4||r==4){
                cout<<"*";
            }else
            {
                cout<<" ";
            }
        }
        for(int s=1; s<=7; s++){
            cout<<" ";
        }for(int c=1; c<=4; c++){
         if(c==1||c==4||r==4){
            cout<<"*";
         }else
         {
             cout<<" ";
         }

        }

for(int s=1; s<=7; s++){
    cout<<" ";
}for(int c=1; c<=7; c++){
if(r==1||r==7||c==7-r)
{
    cout<<"*";
}else
{
    cout<<" ";
}
}
for(int s=1; s<=7; s++){
    cout<<" ";
}for(int c=1; c<=4; c++){
if((c==1||c==4)&&r!=1||(r==1)&&c!=1&&c!=4||(r==4)){
    cout<<"*";
}else{
cout<<" ";
}
}
for(int s=1; s<=7; s++){
    cout<<" ";
}
for(int c=1; c<=3; c++){
    if(r==1||c==2||r==7){
        cout<<"*";
    }else
    {
        cout<<" ";
    }
}
for(int s=1; s<=7; s++){
    cout<<" ";
}
for(int c=1; c<=4; c++){
    if((c==1)||(r==1||r==7||r==4)&&c!=4||(c==4)&&r!=4&&r!=1&&r!=7){
        cout<<"*";
    }else
    {
        cout<<" ";
    }
}
cout<<endl;
}
cout<<"\n \n";
for(int r=1;r<=7; r++){
    for(int c=1; c<=4; c++){
        if((r==1)&&(c!=1&&c!=4)||(c==1||c==4)&&r!=1||(r==4)){
            cout<<"*";
        }else
        cout<<" ";
    }
    for(int s=1; s<=7; s++){
        cout<<" ";
    }
        for(int c=1; c<=4; c++){
            if((r==1||r==4||r==7)&&c!=4&&c!=1||(c==1)&&(r!=1&&r!=4&&r!=5&&r!=6)||(c==4)&&r!=2&&r!=3&&r!=4&&r!=7){
                cout<<"*";
            }else
            {
                cout<<" ";
            }
        }
    for(int s=1; s<=7; s++){
        cout<<" ";
    }
    for(int c=1; c<=7; c++){
        if(c==1||r==7||(c==7)&&r!=1&&r!=2&&r!=3&&r!=4&&r!=5){
            cout<<"*";
        }else
        {
            cout<<" ";
        }
    }
    for(int s=1; s<=7; s++){
        cout<<" ";
    }
    for(int c=1; c<=4; c++){
        if((r==1)&&(c!=1&&c!=4)||(c==1||c==4)&&r!=1||(r==4)){
            cout<<"*";
        }else
        {
            cout<<" ";
        }
}
for(int s=1; s<=7; s++){
        cout<<" ";
    }
    for(int c=1; c<=4; c++){
    if(c==1||c==r){
        cout<<"*";
    }else
    {
        cout<<" ";
    }
    }
for(int c=1; c<=4; c++){
    if(c==4||c==5-r){
        cout<<"*";
    }else
    {
        cout<<" ";
    }
    }
    cout<<endl;
}
cout<<endl<<"\n\n";
for(int r=1; r<=7; r++){
for(int c=1; c<=4; c++){
    if(c==1||c==r){
        cout<<"*";
    }else
    {
        cout<<" ";
    }
    }
for(int c=1; c<=4; c++){
    if(c==4||c==5-r){
        cout<<"*";
    }else
    {
        cout<<" ";
    }
    }
    for(int s=1; s<=7; s++){
        cout<<" ";
    }
    for(int c=1; c<=4; c++){
        if((r==1)&&(c!=1&&c!=4)||(c==1||c==4)&&r!=1||(r==4)){
            cout<<"*";
        }else
        {
        cout<<" ";
        }
    }
    for(int s=1; s<=7; s++){
        cout<<" ";
    }
    for(int c=1; c<=7; c++){
        if(c==1||r==7||(c==7)&&r!=1&&r!=2&&r!=3&&r!=4&&r!=5){
            cout<<"*";
        }else
        {
            cout<<" ";
        }
    }
    for(int s=1; s<=7; s++){
        cout<<" ";
    }
    for(int c=1; c<=3; c++){
    if(r==1||r==7||c==2){
        cout<<"*";
    }else{
    cout<<" ";
    }
    }
    for(int s=1; s<=7; s++){
        cout<<" ";
    }
    for(int c=1; c<=7; c++){
        if(c==1||c==7-r&&(r!=5)||(r==c)&&r!=2&&r!=3&&r!=4){
            cout<<"*";
        }else
        {
            cout<< " ";
        }
    }
    cout<<"\n";
}
getch();
return 0;
}
