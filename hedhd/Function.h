#ifndef FUNCTION_H
#define FUNCTION_H

#include <iostream>

#define INTEGER

#ifdef INTEGER
#define ShowArray ShowArrayInt
#define FillArray FillArrayInt
#define MinElement MinElementInt
#define MaxElement MaxElementInt
#define SortArray SortArrayInt
#define EditElement EditElementInt
#endif

#ifdef CHAR
#define ShowArray ShowArrayChar
#define FillArray FillArrayChar
#define MinElement MinElementChar
#define MaxElement MaxElementChar
#define SortArray SortArrayChar
#define EditElement EditElementChar
#endif

#ifdef DOUBLE
#define ShowArray ShowArrayDouble
#define FillArray FillArrayDouble
#define MinElement MinElementDouble
#define MaxElement MaxElementDouble
#define SortArray SortArrayDouble
#define EditElement EditElementDouble
#endif

void FillArrayInt(int* arr, int size);
void ShowArrayInt(int* arr, int size);
int MinElementInt(int* arr, int size);
int MaxElementInt(int* arr, int size);
void SortArrayInt(int* arr, int size);
void EditElementInt(int* arr, int index, int newValue);

void FillArrayChar(char* arr, int size);
void ShowArrayChar(char* arr, int size);
char MinElementChar(char* arr, int size);
char MaxElementChar(char* arr, int size);
void SortArrayChar(char* arr, int size);
void EditElementChar(char* arr, int index, char newValue);

void FillArrayDouble(double* arr, int size);
void ShowArrayDouble(double* arr, int size);
double MinElementDouble(double* arr, int size);
double MaxElementDouble(double* arr, int size);
void SortArrayDouble(double* arr, int size);
void EditElementDouble(double* arr, int index, double newValue);

#endif