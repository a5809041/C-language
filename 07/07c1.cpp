#include <stdio.h>

class Temperature {
  double degree;
public:
  Temperature();
  void set_celsius(double input);
  void set_fahrenheit(double input);
  void set_kelvin(double input);
  double get_celsius();
  double get_fahrenheit();
  double get_kelvin();
};

Temperature::Temperature():degree(0){
  
}

void Temperature::set_celsius(double input){
  if(input<-273.15){
  degree=-273.15;
  }
  else{
  degree=input;
  }
}

void Temperature::set_fahrenheit(double input){
  if(input<-459.67){
  degree=-273.15;
  }
  else{
  degree=(input-32)*5.0/9.0;
  }
}

void Temperature::set_kelvin(double input){
  if(input<0){
  degree=-273.15;
  }
  else{
  degree=(input-273.15);
  }
}

double Temperature::get_celsius(){
  return degree;
}

double Temperature::get_fahrenheit(){
  return degree*9.0/5.0+32;
}

double Temperature::get_kelvin(){
  return degree+273.15;
}


int main(void)
{
    Temperature degrees[10];
    int count, i;
    double input, output;
    char unit;
    char dummy[100];
    
    for (i=0; i<10; i++) {
        printf("Input temperature number %d: ", i+1);
        if (scanf("%lf %c", &input, &unit)<2)
            break;
        switch(unit) {
            case 'C':
                degrees[i].set_celsius(input);
                break;
            case 'F':
                degrees[i].set_fahrenheit(input);
                break;
            case 'K':
                degrees[i].set_kelvin(input);
                break;
            default:
                printf("Invalid input, units should be one of C/F/K.\n");
                break;
        }
    }
    
    fgets(dummy, 100, stdin);
    printf("Select unit for output (C/F/K): ");
    scanf("%c", &unit);
    for (i=0; i<10; i++) {
        switch(unit) {
            case 'F':
                output = degrees[i].get_fahrenheit();
                break;
            case 'K':
                output = degrees[i].get_kelvin();
                break;
            default:
                unit = 'C';
                output = degrees[i].get_celsius();
                break;
        }
        printf("Temperature number %d: %.2lf%c\n", i+1, output, unit);
    }
    return 0;
}
