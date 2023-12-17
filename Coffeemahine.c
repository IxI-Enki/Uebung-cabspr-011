/*------------------------------------------------------------------------------
 *                      HTBLA-Leonding / Class: 3ACIF
 *------------------------------------------------------------------------------
 *                      Jan Ritt
 *------------------------------------------------------------------------------
 *  Description:
 *----------------------------------------------------------------------------*/
#include <stdio.h>  // input/output library    -  printf, scanf, ..
#include <string.h> // string handling library -  strlen, strcpy, strcmp, ..

int main(void)
{
  /*  VARIABLES  */
  float userCoin; //  Userinput
  float valueIn = 0;
  int numberOfCoins = 0;
  float difference = 0;
  int abort = 0;

  printf("\n   Kaffeemaschine   ");
  printf("\n====================");
  printf("\n 50c - ein Kaffee");

  while (valueIn < 50 && numberOfCoins <= 5 && abort == 0)
  {
    printf("\n werfen Sie eine Muenze ein (10,20,50,100,200 Cent)");
    scanf(" %f", &userCoin);
    valueIn = valueIn + userCoin;
    numberOfCoins++;

    if (valueIn >= 50)
    {
      printf("\n Sie haben %.0f Cent eingeworfen, \n hier kommt ihr Kaffee.", valueIn);
      abort = 1;

      if (valueIn > 50)
      {
        difference = valueIn - 50;
        printf("\n Ihr Restgeld betraegt: %.0f", difference);
        abort = 1;
      }
    }

    printf("\n Es wurden %.0d Muenzen eingeworfen", numberOfCoins);
  }

  //  END PROGRAM  //
  printf("\n Eingabetaste zum Beenden druecken.");
  while (getchar() != '\n'); //  wait for [Enter]-Key
  getchar();
  return 0;
}