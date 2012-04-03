#include <stdio.h>

class Complex {
public:
  double r;
  double i;
  Complex();
  Complex(const char *prompt);
  Complex add(Complex another);
  Complex sub(Complex another);
  Complex mul(Complex another);

};

Complex::Complex(){
	r=0;
	i=0;
}

Complex::Complex(const char *prompt)
{
  printf("%s", prompt);
  printf("実数部＝");
  scanf("%lf",&r);
  printf("虚数部＝");
  scanf("%lf",&i);

}

Complex Complex::add(Complex another){
  Complex c;
  c.r=r+another.r;
  c.i=i+another.i;
  return (c);
}

Complex Complex::sub(Complex another){
	Complex c;
    c.r=r-another.r;
    c.i=i-another.i;
  return (c);
}

Complex Complex::mul(Complex another){
	Complex c;
	c.r=r*another.r-i*another.i;
    c.i=r*another.i+i*another.r;
  return (c);
}

void  output_operation(Complex &another,Complex &another1,Complex &another2,char s){
    if(another2.i==0){
    printf("(%.2lf%+.2lfi) %c (%.2lf%+.2lfi) = (%.2lf)\n",another.r,another.i,s,another1.r,another1.i,another2.r);
    }
    else{
	  printf("(%.2lf%+.2lfi) %c (%.2lf%+.2lfi) = (%.2lf%+.2lfi)\n",another.r,another.i,s,another1.r,another1.i,another2.r,another2.i);
    }
    
  }
int main(void)
{
    printf("計算する複素数を入力してください。\n");
    Complex a("はじめの複素数\n");
    Complex b("次の複素数\n");

    Complex add = a.add(b);
    Complex sub = a.sub(b);
    Complex mul = a.mul(b);

    output_operation(a, b, add, '+');
    output_operation(a, b, sub, '-');
    output_operation(a, b, mul, '*');

    return 0;

}
