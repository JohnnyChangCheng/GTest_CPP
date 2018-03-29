#include <iostream>
using namespace std;
class ForTesting{
	private:
		int num;
	public:
		int ReturnAdd(int a,int b){
			return a+b;
		}
		void SetNum(int target){
			num = target;
		}
		int ReturnNum(){
			return num;
		}
};