#pragma once

#include <stdio.h>    

#define MaxSize 1000  //���ѧ����Ϣ����

typedef struct {
	int _num; //ѧ��
	char *_name; //����
	float _height; //���
	float _weight; //����
	int _englishScore; //Ӣ��ɼ�
	int _mathScore; //��ѧ�ɼ�
	int _chineseScore; //���ĳɼ�
	int _integratedScienceScore; //���۳ɼ�
	int _size[8]; //�жϡ���
	int _usesize[8];
}DataType; //�Լ��������������

typedef struct
{
	DataType list[MaxSize]; 
	int size; //��ǰ���õĿռ�
	int max; //˳�������ռ�
	int control[8]; //�ַ����ƿ���
} SeqList; //��ѧ�������ݱ�

void ListInitiate(SeqList *L, int x); //��ʼ������
void Print(SeqList *L); //��ӡ
void Sort(SeqList *L); //����
// ListInsert(SeqList *L, int i, DataType x); //����
ListInsert(SeqList *L, int i); //����

void Xget(DataType *x); //��һ�����뺯��

int ListDelete(SeqList *L, int i, DataType *x); //ɾ��
int ListGet(SeqList L,int i, DataType *x); //��ȡ
int ListFind(SeqList L); //����
int OutPut(SeqList L); //��������ı���
int InPut(SeqList *L); //���루���ı���
int PrintWordI(SeqList L); //�ַ��������1
int PrintWordII(SeqList L, int i); //�ַ��������2
int PrintWordIII(SeqList L, int i); //�ַ��������3
int PrintWordIV(SeqList L); //�ַ��������4