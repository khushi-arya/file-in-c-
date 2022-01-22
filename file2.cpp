#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("khushi2.txt",ios::in);
    if (file.is_open())
    {
        string tp;
        while(getline(file,tp))
        {
            cout<<tp;
        }
}
    else 
{ 
cout<<"No such file";
}
file.close();    
return 0;

}