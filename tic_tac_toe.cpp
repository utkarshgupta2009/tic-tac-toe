#include<iostream>
#include<stdlib.h>
using namespace std;
char a='1';
char b='2';
char c='3';
char d='4';
char e='5';
char f='6';
char g='7';
char h='8';
char i='9';
int assign;
int checking[9];
int z;
int count=1;
int temp=1;


void input(int o){
    if((a=='0' && b=='0' && c=='0')||(d=='0' && e=='0' && f=='0')||(g=='0' && h=='0' && i=='0')||(a=='0' && d=='0' && g=='0')||(b=='0' && e=='0' && h=='0')||(c=='0' && f=='0' && i=='0')||(a=='0' && e=='0' && i=='0')||(c=='0' && e=='0' && g=='0')){
                cout<<" "<<endl;
                cout<<"PLAYER 1 WINS"<<endl;  
                exit(0);
}

    if((a=='X' && b=='X' && c=='X'||d=='X' && e=='X' && f=='X'||g=='X' && h=='X' && i=='X'||a=='X' && d=='X' && g=='X'||b=='X' && e=='X' && h=='X'||c=='X' && f=='X' && i=='X'||a=='X' && e=='X' && i=='X'||c=='X' && e=='X' && g=='X')){
                cout<<" "<<endl;
                cout<<"PLAYER 2 WINS"<<endl;
                exit(0);
            }
    if(count==10){
        cout<<" "<<endl;
        cout<<"IT IS A TIE, NO ONE WINS"<<endl;
        exit(0);
    }
    cout<<" "<<endl;
    cout<<"PLAYER "<<o<<" TURN: ";
    cin>>assign;
    cout<<" "<<endl;
    

    if (assign>9){
                cout<<"ENTER VALID NUMBER: "<<endl;
                input(o);
            }
 
    for(z;z<count;z++){
                
                if(checking[z]==assign){
                    cout<<"POSITION ALREADY TAKEN, ENTER AGAIN: "<<endl;
                    input(o);
                    }
                
                else{
                    checking[z]=assign;
                    count++;
                    temp++;
                    break;
                }
                
                }
    }

void structure(){
        cout<<a<<" |"<<b<<" |"<<c<<endl;
        cout<<"__|__|__"<<endl;
        cout<<d<<" |"<<e<<" |"<<f<<endl;
        cout<<"__|__|__"<<endl;
        cout<<g<<" |"<<h<<" |"<<i<<endl;
        };

int main(){

cout<<"            "<<"--------------------"<<endl;
cout<<"            "<<"| TIC TAC TOE GAME |"<<endl;
cout<<"            "<<"--------------------"<<endl;
cout<<"                                             "<<endl;
cout<<" "<<"* ENTER THE NUMBER WHERE YOU WANT TO DISPLAY X OR 0"<<endl;
cout<<"                                             "<<endl;
cout<<"                                             "<<endl;
cout<<"                PLAYER X= 0               PLAYER 2= X"<<endl;
cout<<"                                             "<<endl;

structure();


while(count==temp){
        if(count%2==0){
            input(2);

            switch(assign){
            case 1:
            a='X';
            structure();
            break;
           
            case 2:
            b='X';
            structure();
            break;
            
            case 3:
            c='X';
            structure();
            break;
            
            case 4:
            d='X';
            structure();
            break;
            
            case 5:
            e='X';
            structure();
            break;
            
            case 6:
            f='X';
            structure();
            break;
            
            case 7:
            g='X';
            structure();
            break;
            
            case 8:
            h='X';
            structure(); 
            break;
            
            case 9:
            i='X';
            structure();
            break;
            }
            
        }

        else{
            input(1);
        
            switch(assign){
            case 1:
            a='0';
            structure();
            break;
           
            case 2:
            b='0';
            structure();
            break;
            
            case 3:
            c='0';
            structure();
            break;
            
            case 4:
            d='0';
            structure();
            break;
            
            case 5:
            e='0';
            structure();
            break;
            
            case 6:
            f='0';
            structure();
            break;
           
            case 7:
            g='0';
            structure();
            break;
            
            case 8:
            h='0';
            structure();
            break;
           
            case 9:
            i='0';
            structure();
            break;
            
        }
            }

};

return 0;}
