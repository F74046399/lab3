#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
#include<cstdio>


using namespace std;
int main()
{
	int n,w;
	ifstream fileIn("file.in",ios::in);
	ofstream fileOut("stout",ios::out);
	if(!fileIn || !fileOut)
	{
		cout<<"failed to open the file.";
		return 0;
	}
	else
	{
		fileIn>>n;
		vector<int> cowWeight(n);
		
		int i=0;
		while(fileIn>>w)
		{
			cowWeight[i]=w;
			i++;
		}
		
		sort(cowWeight.begin(),cowWeight.end());
		reverse(cowWeight.begin(),cowWeight.end());
		 
		int total=0;
		for(i=0;i<5;i++)
		{
				total=total+cowWeight[i];
		}		
		fileOut<<total;
	}
	fileIn.close();
	fileOut.close();
	return 0;
}


 
