#include <iostream>
using namespace std;
class Person{
public:
	Person(){
		cout<<"hello nakin"<<endl;
	}
	Person(int a){
		m_age = a;	
	}
	void show(void)
	{
		cout<<"hello nakin"<<endl;
	}
	int m_age;
};
int main(int argc,const char *argv[])
{
	Person p1;
	
	return 0;
}
