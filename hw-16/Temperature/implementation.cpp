// WRITE YOUR CODE HERE
#include "header.hpp"

double Temperature :: AsCelsius(){
  double converted = temp;
  if(unit == 'C'){
    converted = converted;
  }

  else if(unit == 'F'){
    converted = (converted * (9.0/5)) + 32;
  }

  else if(unit == 'R'){
    converted = (converted - 491.67) * (5.0/9);
  }

  else if(unit == 'K'){
    converted -= 273.15;
  }
  return converted;
}

double Temperature :: AsFahrenheit(){
  double converted = temp;
  if(unit == 'C'){
    converted = (converted - 32) * (5.0/9);
  }

  else if(unit == 'F'){
    converted = converted;
  }

  else if(unit == 'R'){
    converted -= 459.67;
  }

  else if(unit == 'K'){
    converted = ((converted - 273.15) * (9.0/5)) + 32;
  }
  return converted;
}

double Temperature :: AsKelvin(){
  double converted = temp;
  if(unit == 'C'){
    converted += 273.15;
  }

  else if(unit == 'F'){
    converted = ((converted -32) * (5.0/9)) + 273.15;
  }

  else if(unit == 'R'){
    converted *= (5.0/9);
  }

  else if(unit == 'K'){
    converted = converted;
  }
  return converted;
}

double Temperature :: AsRankine(){
  double converted = temp;
  if(unit == 'C'){
    converted = (converted * (9.0/5)) + 491.67;
  }

  else if(unit == 'F'){
    converted += 459.67;
  }

  else if(unit == 'R'){
    converted = converted;
  }

  else if(unit == 'K'){
    converted *= 1.8;
  }
  return converted;
}