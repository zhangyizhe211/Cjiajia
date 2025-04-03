#include"testproject.h"



int max(int a, int b) {
	int c = a > b ? a : b;
	return c;
}
void mains(int a) {
	int* p;//指针变量

	p = &a;//指针变量赋值
	cout << p << endl;

	//使用指针
	//通过解引用的方式找到指针指向的内容
	//指针前加*代表解引用，找到指针指向的内存中的数据
	cout << *p << endl;
}
//指针所占内存空间
void sizofp(int a) {
	int* p = &a;
	cout << sizeof(p) << endl;
}
void voidp(int a) {//空指针指向的内存无法访问
	//用于给指针变量进行初始化
	int* p = NULL;
	cout << p << endl;
}
void yep(int a) {
	//避免野指针
	int* p = (int*)0x1100;
}
void constp(int a) {
	//const修饰指针
	const int* p = &a;//常量指针，特点：指针的指向可修改，但指针指向的值不可更改
	//const修饰常量
	int* const p1 = &a;//指针常量,特点：指针的指向不可修改，但指针指向的值可更改
	//const即修饰指针又修饰常量
	const int* const p2 = &a;//特点：指针的指向不可修饰，指针指向的值也不可更改
}

void pints(int arr[]) {

	cout << "指针访问元素" << endl;
	int* p = arr;
	cout << *p << endl;//利用指针访问第一个元素
	p++;//指针向后偏移4个字节
	cout << *p << endl;
	int* p2 = arr;
	for (int i = 0; i < 6; i++)
	{
		cout << *p2 << endl;
		p2++;
	}
}
void pma(int* p, int* p2) {
	int mun1 = *p;
	int mun2 = *p2;
	int c = mun1 > mun2 ? mun1 : mun2;
	cout << "最大：" << c << endl;
}
void maxs(int arr[]) {

}