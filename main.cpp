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
//// 处理Unhandled Exception的回调函数  
////  
//LONG ApplicationCrashHandler(EXCEPTION_POINTERS *pException)  
//{     
//	// 在这里添加处理程序崩溃情况的代码  
//	// 现在很多软件都是弹出一个发送错误报告的对话框  
//
//	// 这里以弹出一个错误对话框并退出程序为例子  
//	//  
//	FatalAppExit(-1,  (L"*** Unhandled Exception! ***"));  
//
//	return EXCEPTION_EXECUTE_HANDLER;  
//}  
//
//int main()  
//{  
//	// 设置处理Unhandled Exception的回调函数  
//	//   
//	SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)ApplicationCrashHandler);   
//
//	// 除零，人为的使程序崩溃  
//	//  
//	int i = 13;  
//	int j = 0;  
//	int k = i / j;  
//
//	return 0;  
//}  



















