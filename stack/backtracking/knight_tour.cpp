#include<iostream>
#include<stack>
#include<vector>
#include<iterator>
using namespace std;
stack <vector<int> > s;  //stack created which will store vector location of the block to be validated
int main()
{
    vector <vector<int> > vi;    //2-d vector of chess board
    vi.resize(8,vector<int>(8));    //defining size of chess board 8x8
    for (int i=0;i<8;i++)
    {
        for (int j=0;j<8;j++)
        {
            vi[i][j]=0; //declairing that location is unvisited till yet by 0
        }
    }
    int x=1,y=0,k=0;    //x gives x-coordinate of knight location, y gives y-coordinate of knight location, k is the number of blocks knight has covered
    vector<int>c;   //vector that store the location that is to pushed at top or to be poped from th top for backtracking
    do{
    k++;//increases the number of blocks covered by knight by 1
    if((x-1)>=0 && (y+2)<=7 && vi[x-1][y+2]==0)
    {
        x=x-1;y=y+2;
        vi[x][y]=k; //store the STEP NO. OF BLOCK by night
        c.insert(c.end(),vi[x][y]); //create array of location of night to be pushed to stack
        s.push(c);
    }
    else if((x-2)>=0 && (y+1)<=7 && vi[x-2][y+1]==0)
    {
        x=x-2;y=y+1;
        vi[x][y]=k; //store the STEP NO. OF BLOCK by night
        c.insert(c.end(),vi[x][y]); //create array of location of night to be pushed to stack
        s.push(c);
    }
    else if((x-2)>=0 && (y-1)>=0 && vi[x-2][y-1]==0)
    {
        x=x-2;y=y-1;
        vi[x][y]=k; //store the STEP NO. OF BLOCK by night
        c.insert(c.end(),vi[x][y]); //create array of location of night to be pushed to stack
        s.push(c);
    }
    else if((x-1)>=0 && (y-2)>=0 && vi[x-1][y-2]==0)
    {
        x=x-1;y=y-2;
        vi[x][y]=k; //store the STEP NO. OF BLOCK by night
        c.insert(c.end(),vi[x][y]); //create array of location of night to be pushed to stack
        s.push(c);
    }
    else if((x+1)<=7 && (y-2)>=0 && vi[x+1][y-2]==0)
    {
        x=x+1;y=y-2;
        vi[x][y]=k; //store the STEP NO. OF BLOCK by night
        c.insert(c.end(),vi[x][y]); //create array of location of night to be pushed to stack
        s.push(c);
    }
    else if((x+2)<=7 &&(y-1)>=0 && vi[x+2][y-1]==0)
    {
        x=x+2;y=y-1;
        vi[x][y]=k; //store the STEP NO. OF BLOCK by night
        c.insert(c.end(),vi[x][y]); //create array of location of night to be pushed to stack
        s.push(c);
    }
    else if((x+2)>=7 &&(y+1)<=7 && vi[x+2][y+1]==0)
    {
        x=x+2;y=y+1;
        vi[x][y]=k; //store the STEP NO. OF BLOCK by night
        c.insert(c.end(),vi[x][y]); //create array of location of knight to be pushed to stack
        s.push(c);
    }
    else if((x+1)<=7 &&(y+2)<=7 && vi[x+1][y+2]==0)
    {
        x=x+1;y=y+2;
        vi[x][y]=k; //store the STEP NO. OF BLOCK by night
        c.insert(c.end(),vi[x][y]); //create array of location of night to be pushed to stack
        s.push(c);
    }
    else
    {
        c=s.top();

    }
     //push location arry to top
    }while(k!=64);
    return 0;
}
