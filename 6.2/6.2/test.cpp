#include <iostream>
using namespace std;
////
////int main()
////{
////	string s1;
////	std::string s2;
////	std::string name("张三");
////	name = "李四";
////}
//int main()
//{    //string类的构造函数
//	string s1;//可以无参构造
//	string s2("张三");//字符串构造
//	string s3("hello world");//字符串
//	string s4(10, '*');//字符+个数；构造
//	string s5(s2);//string对象构造
//	/*cout << s1 << endl;
//	cout << s2 << endl;
//	cout << s3 << endl;
//	cout << s4 << endl;
//	cout << s5 << endl;*/
//	/*string s6(s3, 6, 5);*///从某个字符串某个位置拷贝n各字符
//	//从字符串s3第六个位置往后拷贝五个字符
//	
//	//字符比较
//	//cout << (s1 == s2) << endl;
//	//cout << (s1 > s2) << endl;
//
//	//string s6(s3, 6);
//	////注意后面给的是一个缺省参数，参数值很大很大，如果默认不给参数
//	////则走默认参数，即将字符串s3第六个位置之后的字符全部读取
//	//cout << s6 << endl;
//	///*cout << s3 << endl;
//	//cout << s6 << endl;*/
//	//string s8(s3, 6, 100);
//	//cout << s8 << endl;
//	
//	//如何进行字符串切割关键部分呢？
//	string url("https://cplusplus.com/reference/string/string/string/");
//	string sub1(url, 0, 5);
//	string sub2(url, 8, 13);
//	string sub3(url, 22, url.size() - 22);
//	cout << sub1 << endl;
//	cout << sub2 << endl;
//	cout << sub3 << endl;
//	
//	s1 = s2;//string 对象赋值
//	cout << s1 << endl;
//	s1 = "11111";//字符串
//	cout << s1 << endl;
//	s1 = '2';//字符
//
//
//
//}
//string底层就是一个顺序表
//重载了+=运算符，并且后面可以加字符也可以加字符串
//class string//
//{
//	operator+=(char ch);
//	operator+=(const char* str);
//private:
//	char* _str;
//	size_t _size;
//	size_t _capatity;
//};

int main()
{
	//增操作
	string s1("helllo");
	//尾插一个字符
	s1.push_back('6');
	//尾插一个字符串
	s1.append("666");
	//push_back是用来尾插字符的
	//append是用来插入字符串的
	//但是还有一种方法直接尾插,+=
	s1 += '7 ';
	s1 += "7777";
	cout << s1 << endl;
	//要求将x转化为string对象？
	size_t x = 0;
	cin >> x;

	string xstr;
	while (x)
	{
		size_t val = x % 10;
		xstr += (val + '0');
		x /= 10;
	}
	//逆转
	reverse(xstr.begin(), xstr.end());
	cout << xstr << endl;
}