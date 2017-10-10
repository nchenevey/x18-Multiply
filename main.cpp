//Authors:
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;

int main()
{

vector < vector < int > > multi;
int totalRows;
int totalCols;

totalRows = 12;
totalCols = 12;


for(int row = 0; row < totalRows; row++)
{
multi.resize(totalRows);
    for(int col = 0; col < totalCols; col++)
    {
        multi[row].resize(totalCols);
        int twelve;
        twelve = (row+1)*(col+1);
        multi[row][col] = twelve;
        if(col == 11)
        {
            if(multi[row][col] > 0 && multi[row][col] < 100)
            {
            cout<<"| "<<multi[row][col]<<endl;
            } 
            else
            {
            cout<<"|"<<multi[row][col]<<endl;
            }
        }
        else
        {
            if(multi[row][col] > 9 && multi[row][col] < 100)
            {
            cout<<"| "<<multi[row][col];
            }
            else if(multi[row][col] > 99)
            {
            cout<<"|"<<multi[row][col];
            }
            else
            {
            cout<<"| "<<multi[row][col]<<" ";
            }
        }
    }

}


 
return 0;
}
