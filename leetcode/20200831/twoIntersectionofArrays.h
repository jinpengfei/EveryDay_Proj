#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
class Solution {
public:
	vector<int> intersect(vector<int>& nums1,vector<int>& nums2){
		sort(nums1.begin(),nums1.end());
		sort(nums2.begin(),nums2.end());
		int size1 = nums1.size();
		int size2 = nums2.size();
		vector<int>intersectTemp;
		int index1 = 0;
		int index2 = 0;
		while(index1<size1&&index2<size2)
		{
			if(nums1[index1]<nums2[index2])
			{
				index1++;
			}
			else if(nums1[index1]>nums2[index2])
			{
				index2++;
			}
			else
			{			
				intersectTemp.push_back(nums1[index1]);
				index1++;
				index2++;
			}
		}	
		return intersectTemp;	

	}

};
/*
1.如果给定的数组已经排好序呢？你将如何优化你的算法？
2.如果nums1的大小比nums2小很多，哪种方法更优？
3.如果Nums2的元素存储在磁盘上，内存是有限的，并且你不能一次加载所有的元素到内存中，你改怎么办？

*/
