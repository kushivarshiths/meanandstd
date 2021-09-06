#include <iostream>
#include <cmath>
using namespace std;

int main() {
  cout << "Enter number of entries:\n";
  int size = 0;//default
  cin >> size;

  //Declare dynamic array
  int *Array = new int[size];

  //Initialize dynamic array
  for(int i = 0;i < size;i++){
    Array[i] = i;
  }

  //Prints dynamic array
  cout << "Elements of array: ";
  for(int i = 0;i < size;i++){
    cout << Array[i] << " ";
  }
  cout << endl;

  //Calculate mean and print
  float mean = 0;
  for(int i = 0;i < size;i++){
   mean = Array[i]+mean;
  }
  mean = mean/size;
  cout << "Mean: " << mean << endl;

  //Calculate standard deviation and print
  float stdDev = 0;
  for(int i = 0;i < size;i++){
   stdDev = Array[i]*Array[i] + stdDev;
  }
  stdDev = sqrt(stdDev - mean*mean);
  stdDev = stdDev/size;
  cout << "Standard Deviation: " << stdDev << endl;

  // Deletes a memory allocated to dynamic array
  delete[] Array;
  
}
