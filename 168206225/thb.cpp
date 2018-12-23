#include<iostream>
using namespace std;
int main()
{
	char thief;
	int n;
	for(int i=0;i<4;i++){
		thief='A'+i;
		n=(thief!='A')+(thief=='D')+(thief=='B')+(thief!='D');
		if(n==1){
			break;
		}
	}
	cout<<thief<<"Íµ×ßÁË×êÊ¯";
	return 0; 
}