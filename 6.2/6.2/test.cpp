#include <iostream>
using namespace std;
////
////int main()
////{
////	string s1;
////	std::string s2;
////	std::string name("����");
////	name = "����";
////}
//int main()
//{    //string��Ĺ��캯��
//	string s1;//�����޲ι���
//	string s2("����");//�ַ�������
//	string s3("hello world");//�ַ���
//	string s4(10, '*');//�ַ�+����������
//	string s5(s2);//string������
//	/*cout << s1 << endl;
//	cout << s2 << endl;
//	cout << s3 << endl;
//	cout << s4 << endl;
//	cout << s5 << endl;*/
//	/*string s6(s3, 6, 5);*///��ĳ���ַ���ĳ��λ�ÿ���n���ַ�
//	//���ַ���s3������λ�����󿽱�����ַ�
//	
//	//�ַ��Ƚ�
//	//cout << (s1 == s2) << endl;
//	//cout << (s1 > s2) << endl;
//
//	//string s6(s3, 6);
//	////ע����������һ��ȱʡ����������ֵ�ܴ�ܴ����Ĭ�ϲ�������
//	////����Ĭ�ϲ����������ַ���s3������λ��֮����ַ�ȫ����ȡ
//	//cout << s6 << endl;
//	///*cout << s3 << endl;
//	//cout << s6 << endl;*/
//	//string s8(s3, 6, 100);
//	//cout << s8 << endl;
//	
//	//��ν����ַ����и�ؼ������أ�
//	string url("https://cplusplus.com/reference/string/string/string/");
//	string sub1(url, 0, 5);
//	string sub2(url, 8, 13);
//	string sub3(url, 22, url.size() - 22);
//	cout << sub1 << endl;
//	cout << sub2 << endl;
//	cout << sub3 << endl;
//	
//	s1 = s2;//string ����ֵ
//	cout << s1 << endl;
//	s1 = "11111";//�ַ���
//	cout << s1 << endl;
//	s1 = '2';//�ַ�
//
//
//
//}
//string�ײ����һ��˳���
//������+=����������Һ�����Լ��ַ�Ҳ���Լ��ַ���
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
	//������
	string s1("helllo");
	//β��һ���ַ�
	s1.push_back('6');
	//β��һ���ַ���
	s1.append("666");
	//push_back������β���ַ���
	//append�����������ַ�����
	//���ǻ���һ�ַ���ֱ��β��,+=
	s1 += '7 ';
	s1 += "7777";
	cout << s1 << endl;
	//Ҫ��xת��Ϊstring����
	size_t x = 0;
	cin >> x;

	string xstr;
	while (x)
	{
		size_t val = x % 10;
		xstr += (val + '0');
		x /= 10;
	}
	//��ת
	reverse(xstr.begin(), xstr.end());
	cout << xstr << endl;
}