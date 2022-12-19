#include<stdio.h>
int main()
{
  int unit;
  float sur_charge,amt,Total;

  printf("\n Enter units used :");
  scanf("%d",&unit);

  if(unit <= 50)
  {
    amt = unit*0.50;
  }
  else if(unit <=150)
  {
    amt = 25 +(unit-50)*0.75;
  }
  else if(unit <= 250)
  {
     amt = 100 + (unit-150)*1.20;
  }
  else if (unit > 250)
  {
    amt = 220 + (unit-250)*1.50;
  }
  else
  {
    printf("\n invalid");
  }

  sur_charge = amt * 0.20;
  Total = amt + sur_charge;
  printf("\n Total Pay :Rs%.2f",Total);
  return 0;

}