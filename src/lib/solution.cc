#include "solution.h"
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;

void Solution::operate(vector<int>& v)
{
  ofstream outfile;
  outfile.open("output_file.txt");
  string str; 
  int ans=0,i;
  auto cur_loc=v.begin();
  while(ans!=5)
  {
    cout<< "*********************************************************************\n";
    cout<< "*\nVector : ";
    for(auto it=v.begin();it!=v.end();it++)
      cout<< *it << " ";
    cout<< "\n*********************************************************************\n";
    cout<< "*\n";
    cout<<"Please choose any of the following options:\n";
    cout<<"\t1. What is the first element?\n";
    cout<<"\t2. What is the last element?\n";
    cout<<"\t3. What is the current element?\n";
    cout<<"\t4. What is the ith element from the current location?\n";
    cout<<"\t5. Exit.\n";
    cout<<"*********************************************************************\n";
    cout<< "*\n";
    getline(cin,str);
    ans=stoi(str);
    if(ans==1)
    {
      cur_loc=v.begin();
      cout<<"Output: "<<*cur_loc;
      outfile<<"Output: "<<to_string(*cur_loc)<< endl;
    }
    else if(ans==2)
    {
      cur_loc=v.end()-1;
      cout<<"Output: "<<*cur_loc;
      outfile<<"Output: "<<to_string(*cur_loc)<< endl;
    }
    else if(ans==3)
    {
      cout<<"Output: "<<*cur_loc; 
      outfile<<"Output: "<<to_string(*cur_loc)<< endl;
    }  
    else if(ans==4)
    {
      cout<<"Enter the value of i::\n";
      getline(cin,str);
      i=stoi(str);
      if(i<0)
      {
        cout<<"Value of i cannot be negative";
        outfile<<"Value of i cannot be negative"<< endl;
      }  
      else if(i>v.size())
      {
        cout<<"Value of i cannot be greater than the size of vector";
        outfile<<"Value of i cannot be greater than the size of vector"<<endl;
      }  
      else     
      {
        int d=distance(cur_loc,v.end());
        if(i>(d-1)) //d holds one greater than dstance to valid elements 
        {
          cout<<"Output : Sorry! you cannot travel "<<i<<" elements from your current location";
          outfile<<"Output : Sorry! you cannot travel "<<to_string(i)<<" elements from your current location"<<endl;
        }
        else
        {
          cout<<"Output: "<<*(cur_loc+i);     
          outfile<<"Output: "<<to_string(*(cur_loc+i))<<endl;
        }  
      }       
    }
    else if(ans==5)
    { 
      cout<<"Exit !"<<endl;
      outfile<<"Exit !"<<endl;
    }
    cout<<"\n";
    outfile<<"\n";  
  }
  outfile.close();
}


