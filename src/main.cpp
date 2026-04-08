//This is the basic logic of the tbr generator which will be changed when integerating with a real library and a frontend
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;



int main()
{
    cout<<"Welcome!\nThis is a simple TBR genrator, to help you choose what to read next.\nPress [ENTER] to start";
    cin.get();
    cout<<endl;
    string ans,book;
    char b1[100],b2[100],b3[100],b4[100],b5[100];
    int i=0,tbr;
    srand(time(0));
    while(i<5)
    {
        
         cout<<"Do you want to read? ";
         cin>>ans;
         cout<<endl;
        
        if(ans=="yes"||ans=="Yes"||ans=="y"||ans=="Y")
        {   
             
             cout<<"Give five books your in the mood to read (English only): "<<endl;
             cout<<"1. ";cin.ignore();cin.getline(b1,100);
             cout<<"2. ";cin.getline(b2,100);
             cout<<"3. ";cin.getline(b3,100);
             cout<<"4. ";cin.getline(b4,100);
             cout<<"5. ";cin.getline(b5,100);
             cout<<endl;
              
              tbr= (rand() % 5) +1;
             
            cout<<"Randomizing...\n....\n....\n....\n"; 
            
             
             switch(tbr)
             {
                case 1:
                    cout<<"You should read '"<<b1<<"' next!"<<" Have fun reading!";
                    break;
                case 2: 
                    cout<<"You should read '"<<b2<<"' next!"<<" Have fun reading!";
                    break;
                case 3:
                    cout<<"You should read '"<<b3<<"' next!"<<" Have fun reading!";
                    break;
                case 4:
                    cout<<"You should read '"<<b4<<"' next!"<<" Have fun reading!";
                    break;
                case 5:
                    cout<<"You should read '"<<b5<<"' next!"<<" Have fun reading!";
                    break;
                
             }
             break;
        }     
                
            
            else if(ans=="no"||ans=="No"||ans=="N"||ans=="n") 
        {
            cout<<"Okay, Bye!";
                break;
        }
            
        else 
        {
            cout<<"Inavlid answer";
            
        }        
        
         cout<<endl<<endl;   
            
             
        
        i++;
        
    }
    
    
    return 0;
}



