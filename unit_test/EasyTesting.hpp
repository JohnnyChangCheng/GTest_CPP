#include <iostream>
using namespace std;
class EasyTesting{
	private:
		int num;
	public:
		EasyTesting(int i) : num(i){
		}
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