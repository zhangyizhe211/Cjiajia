#include"testproject.h"



int max(int a, int b) {
	int c = a > b ? a : b;
	return c;
}
void mains(int a) {
	int* p;//ָ�����

	p = &a;//ָ�������ֵ
	cout << p << endl;

	//ʹ��ָ��
	//ͨ�������õķ�ʽ�ҵ�ָ��ָ�������
	//ָ��ǰ��*��������ã��ҵ�ָ��ָ����ڴ��е�����
	cout << *p << endl;
}
//ָ����ռ�ڴ�ռ�
void sizofp(int a) {
	int* p = &a;
	cout << sizeof(p) << endl;
}
void voidp(int a) {//��ָ��ָ����ڴ��޷�����
	//���ڸ�ָ��������г�ʼ��
	int* p = NULL;
	cout << p << endl;
}
void yep(int a) {
	//����Ұָ��
	int* p = (int*)0x1100;
}
void constp(int a) {
	//const����ָ��
	const int* p = &a;//����ָ�룬�ص㣺ָ���ָ����޸ģ���ָ��ָ���ֵ���ɸ���
	//const���γ���
	int* const p1 = &a;//ָ�볣��,�ص㣺ָ���ָ�򲻿��޸ģ���ָ��ָ���ֵ�ɸ���
	//const������ָ�������γ���
	const int* const p2 = &a;//�ص㣺ָ���ָ�򲻿����Σ�ָ��ָ���ֵҲ���ɸ���
}

void pints(int arr[]) {

	cout << "ָ�����Ԫ��" << endl;
	int* p = arr;
	cout << *p << endl;//����ָ����ʵ�һ��Ԫ��
	p++;//ָ�����ƫ��4���ֽ�
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
	cout << "���" << c << endl;
}
void maxs(int arr[]) {

}