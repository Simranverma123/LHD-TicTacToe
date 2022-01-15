//TIC TAC TOE GAME

#include<iostream>
using namespace std;

int check(char a[][3],char n)
{
 if(a[0][0]==a[0][1]&&a[0][1]==a[0][2]&&a[0][2]==n)
    return 1;
 else if(a[0][0]==a[1][0]&&a[1][0]==a[2][0]&&a[2][0]==n)
  return 1;
 else if(a[0][0]==a[1][1]&&a[1][1]==a[2][2]&&a[2][2]==n)
  return 1;
 else if(a[0][1]==a[1][1]&&a[1][1]==a[2][1]&&a[2][1]==n)
  return 1;
 else if(a[1][0]==a[1][1]&&a[1][1]==a[1][2]&&a[1][2]==n)
  return 1;
 else if(a[2][0]==a[2][1]&&a[2][1]==a[2][2]&&a[2][2]==n)
  return 1;
 else if(a[0][2]==a[1][2]&&a[1][2]==a[2][2]&&a[2][2]==n)
  return 1;
 else if(a[2][0]==a[1][1]&&a[1][1]==a[0][2]&&a[0][2]==n)
  return 1;
else
 return 0;
}

void display(char a[][3])
{
cout<<"Displaying current game:"<<endl; 
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{ 
   cout<<"\t"<<a[i][j]<<"\t";
  
 }
 cout<<"\n"; 
}

} 
int main()
{

char a[3][3];
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{ 
   a[i][j]=' ';
 }
}

int r,c;
int R,C;
int w=0;
while(w==0)
{
cout<<"Your turn: "<<endl;
cout<<"Enter the row and column:";
cin>>r>>c;
a[r][c]= '0';
display(a);
w=check(a,'0');
if(w==1)
{
cout<<"\nYou won";
break;
}
while(true)
{
R=rand()%3;
C=rand()%3;
 if(a[R][C]==' ')
    break;
}
a[R][C]='1';
cout<<"\nComputer's turn:"<<endl;
display(a);
w=check(a,'1');
if(w==1)
{
cout<<"\nComputer won";
break;
}

}
return 0;
}

