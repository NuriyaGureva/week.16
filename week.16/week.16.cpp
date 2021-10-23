// week.16.cpp : 
//
using namespace std;
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
int main()
{
    setlocale(LC_ALL, "rus");
    // Задание. 10 

    //srand((int)time(0));
    //const int n = 7, m = 5; // 7 паралелей, по 5 классов в каждой
    //int a[n][m];
    //int sum = 0;
    //int max = 0;

    //int classNumber = 5;

    //for (int i = 0; i < n; i++)
    //{
    //    cout << "Параллель " << classNumber++ << " класса: ";

    //    for (int j = 0; j < m; j++)
    //    {
    //        a[i][j] = rand() % 30 + 10;
    //        cout << a[i][j] << " ";
    //    }
    //    cout << endl;
    //}
    //
    //cout << endl;
    //classNumber = 5;

    //for (int i = 0; i < n; i++)
    //{
    //    sum=0;   
    //   
    //    for (int j = 0; j < m; j++) {
    //        sum += a[i][j];
    //    }

    //    cout <<"Количество учащихся в параллели "<< classNumber << " класса:"<< sum <<endl;

    //    if (sum>120 && sum>max) 
    //        max = classNumber;

    //    classNumber++;
    //}    
    //  cout <<"Самая старшая параллель: "<< max <<endl;

   //Задание 11.     

    //const int n = 100;
    //int arr[n];    
    //srand(time(NULL)); 

    //cout << "Массив: ";

    //for (int i = 0; i < n; i++)
    //{
    //    arr[i] = rand() % 100 - (-100);
    //    cout << arr[i] << "; ";
    //}
    //
    //cout << endl;

    //bool isExists = false;
    //for (int i = 0; i < n; i++)
    //{
    //    if (arr[i] == 170)
    //    {
    //        isExists = true;
    //        cout << "Ученик с ростом 170 присутствует.";
    //        break;
    //    }
    //}
    //cout << endl;

    // if (!isExists)
    //   cout << "Ученика с таким ростом нет.";


    // Задание. 12

    //srand(time(NULL));
    //const int n = 15;
    //int arr[n];
    //cout << "Массив: ";
    //int min = 0;

    //for (int i = 0; i < n; i++)
    //{
    //    arr[i] = rand() % 1000 - (-200);
    //    cout << arr[i] << "; ";
    //}
    //    
    //cout << endl;
    //min = arr[0];
    //
    //for (int i = 0; i < n; i++)
    //{
    //    if (arr[i] < min)
    //    {
    //        min = arr[i];
    //    }
    //}          
    //
    //cout << "Минимальное расстояние от Москвы = " << min<< endl;

    //Задание.13

    //srand(time(NULL));  
    //int arr[31];
    //cout << "Массив: ";
    //int max = 0;

    //for (int i = 0; i < 31; i++)
    //{
    //    arr[i] = rand() % 30+(-10);
    //    cout << arr[i] << "; ";
    //}
    //cout << endl; 
    //max = arr[0];

    //for (int i = 0; i < 31; i++)
    //{
    //    if (arr[i] > max)
    //    {
    //        max = arr[i];
    //    }
    //}
    //cout << "Max = " <<max<< endl;

   //Задание.14
  //srand(time(NULL));
  // const int n=28;
  // int arr[n];
  // int day = 0;
  // int max = 0;
  // cout << "Массив: ";
  // 
  // for (int i = 0; i < n; i++)
  // {
  //     arr[i] = rand() % 30 + (-10);
  //     cout << arr[i] << ";";
  // }
  //  cout << endl;

  //   max = arr[0];
  //   day = 1;

  //  for (int i = 0; i < n; i++)
  //  {
  //      if (arr[i] >= max)
  //      {
  //          max = arr[i];
  //          day = i+1;
  //      }
  //  }
  //      cout << endl;

  //  cout << "Максимальная температура " <<max<< " градусов была " << day << " числа." <<endl;

    //Задание.15

    //srand(time(NULL));
    //int arr[20];
    //int max = 0;

    //cout << "Массив: ";
    //for (int i = 0; i < 20; i++)
    //{
    //    arr[i] = rand() % 30;
    //    cout << arr[i] << ";";
    //}
    //   cout<< endl;
    //   bool isExists = false;

    //for (int i = 0; i < 20; i++)
    //{
    //   if (arr[i]%2==0 && arr[i]>max)
    //   {
    //        isExists = true;        
    //        max = arr[i];        
    //   }
    //}

    //if (!isExists) {
    //    cout << "Четных чисел нет:";
    //}
    //else {
    //    cout << "Четное число имеется." << endl;
    //    cout << "Max= " << max << endl;
    //}

// Задание 17

    //const int size = 5;
    //int arr[size] = { 10, 20, 30, 50, 120 };

    //for (int i = 0; i < size; i++)
    //{
    //    cout << arr[i] << ";";
    //}
    //
    //cout << endl;

    //for (int i = 0; i < size; i++)
    //{
    //    if (arr[i] < 100 && arr[i + 1]>100)
    //    {
    //    cout << "100 должно стоять на месте " << i + 1;
    //    break;
    //    }
    //}

     // Задание. 18

    //const int a = 5;
    //int index5 = 0;
    //int index15 = 0;
    //int arr[a] = { 2, 3, 15, 6, 5 };
    //cout << "Массив: "; 
    //for (int i = 0; i < a; i++)
    //{    
    //    cout << arr[i] << ";";
    //}

    //cout << endl;

    //for (int i = 0; i < a; i++)
    //{
    //    if (arr[i] == 5)
    //        index5 = i;

    //    if (arr[i] == 15)
    //        index15 = i;       
    //}

    //int temp = arr[index5];
    //arr[index5] = arr[index15];
    //arr[index15] = temp;
    //
    //cout << "Массив после вычислений: ";

    //for (int i = 0; i < a; i++)
    //{
    //    cout << arr[i] << ";";
    //}

    // Задание 19
    //const int n = 13;
    //int arr[n];    
    //srand(time(NULL)); 

    //cout << "Массив: ";

    //for (int i = 0; i < n; i++)
    //{
    //    arr[i] = rand() % 100 - (-100);
    //    cout << arr[i] << "; ";
    //}
    //
    //cout << endl;

    //for (int i = 2; i < n-1; i++)
    //{
    //    arr[i] = arr[i + 1];
    //}

    //cout << "Массив после вычислений: ";

    //arr[n-1] = 0;

    //for (int i = 0; i < n; i++)
    //{
    //    cout << arr[i] << ";";
    //}

    //Задание 20
    //int arr[13] = { 1,3,10,70,35,47,53,57,58,65,68,72,81 };

    //for (int i = 0; i < 12; i++)
    //{
    //    if (arr[i] > arr[i + 1])
    //    {
    //        int temp = arr[i+1];
    //        arr[i+1] = arr[i];
    //        arr[i] = temp;
    //    }
    //}
    //cout << "Массив после вычислений: ";

    //for (int i = 0; i < 13; i++)
    //{
    //    cout << arr[i] << ";";
    //}

    //Задание 21
    //const int n = 20;
    //int arr[n];
    //srand(time(NULL));

    //cout << "Рост учеников: ";
    //for (int i = 0; i < n; i++)
    //{
    //    arr[i] = rand() % 100 - (-100);
    //    cout << arr[i] << "; ";
    //}

    //cout << endl;
    //cout << "Рост нового ученика: ";
    //int rost = 0;
    //cin >> rost;

    //int newArr[n + 1];
    //int previous;
    //int j = 0;
    //for (int i = 0; i < n + 1; i++)
    //{
    //    if (i == 4) {
    //        newArr[i] = rost;
    //    }
    //    else {
    //        newArr[i] = arr[j];
    //        j++;
    //    }
    //}

    //cout << "Массив после вычислений: ";

    //for (int i = 0; i < n + 1; i++)
    //{
    //    cout << newArr[i] << "; ";
    //}

   // Задача 23.
    //const int n = 5;
    //int arr1[n] = {8,6,5,3,1};
    //int arr2[n] = {1,8,5,2,3};

    //bool isNotInOrder = false;
    //cout << "Массив ";
    //for (int i = 0; i < n; i++)
    //{
    //    if (arr1[i] < arr2[i + 1]) {
    //        isNotInOrder = true;
    //    }
    //    cout << arr1[i] << "; ";
    //}
    //
    //if (isNotInOrder)
    //    cout << " неупорядочен по убыванию.";
    //else
    //    cout << " упорядочен по убыванию.";

    //cout << endl;
}
       
     

