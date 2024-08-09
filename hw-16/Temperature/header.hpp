// WRITE YOUR CODE HERE
#ifndef Pen
#define Pen

struct Temperature{
  double temp;
  char unit;

  double AsCelsius();
  double AsFahrenheit();
  double AsKelvin();
  double AsRankine();
};


#endif