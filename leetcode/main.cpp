#include<vector>
#include"20200831/twoIntersectionofArrays.h"
int main()
{
	
	vector<int> V1 =  {1,2,2,1};
	vector<int> V2 = {2,2};
	Solution *S = new Solution();
	vector<int> V3 = S->intersect(V1,V2);	
	for(int i=0;i<V3.size();i++)
	{
		cout<<V3[i]<<",";
	}
	cout<<endl;
	V1 =  {4,9,5};
	V2 = {9,4,9,8,4};
	V3 = S->intersect(V1,V2);	
	for(int i=0;i<V3.size();i++)
	{
		cout<<V3[i]<<",";
	}
	delete S;
	S = NULL;
	return 0;
}
