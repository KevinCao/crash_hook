#include <iostream>  
#include "MiniDumpCreater.h"  
void test()  
{  
	std::string s = "abcd";  

	try{  
		s[100] = 'b';  
	}  
	catch(std::exception& e)  
	{  
		std::cout << "with exception:[" << e.what() << "]" << std::endl;  
	}  
	catch(...)  
	{  
		std::cout << "with unknown exception" << std::endl;  
	}  
}  

void main()  
{  
	InitMinDump();  

	//test();  

	printf(NULL);

	system("pause");  
} 

















////#include "stdafx.h"  
//#include <Windows.h>  
//
//// ����Unhandled Exception�Ļص�����  
////  
//LONG ApplicationCrashHandler(EXCEPTION_POINTERS *pException)  
//{     
//	// ��������Ӵ�������������Ĵ���  
//	// ���ںܶ�������ǵ���һ�����ʹ��󱨸�ĶԻ���  
//
//	// �����Ե���һ������Ի����˳�����Ϊ����  
//	//  
//	FatalAppExit(-1,  (L"*** Unhandled Exception! ***"));  
//
//	return EXCEPTION_EXECUTE_HANDLER;  
//}  
//
//int main()  
//{  
//	// ���ô���Unhandled Exception�Ļص�����  
//	//   
//	SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)ApplicationCrashHandler);   
//
//	// ���㣬��Ϊ��ʹ�������  
//	//  
//	int i = 13;  
//	int j = 0;  
//	int k = i / j;  
//
//	return 0;  
//}  



















