#include<stdio.h>
  int main()
  {
      int A,B,C,D;
      int Sab,Pab,Sac,Pac,Sad,Pad,Sbc,Pbc,Sbd,Pbd,Scd,Pcd;

      printf("Insira o valor de A:");
      scanf("%i",&A);
      printf("Insira o valor de B:");
      scanf("%i",&B);
      printf("Insira o valor de C:");
      scanf("%i",&C);
      printf("Insira o valor de D:");
      scanf("%i",&D);

      Sab= A+B;
      Pab= A*B;
      Sac= A+C;
      Pac= A*C;
      Sad= A+D;
      Pad= A*D;
      Sbc= B+C;
      Pbc= B*C;
      Sbd= B+D;
      Pbd= B*D;
      Scd= C+D;
      Pcd= C*D;

      printf("\nA+B=%i\n",Sab);
      printf("A*B=%i\n",Pab);
      printf("A+C=%i\n",Sac);
      printf("A*C=%i\n",Pac);
      printf("A+D=%i\n",Sad);
      printf("A*D=%i\n",Pad);
      printf("B+C=%i\n",Sbc);
      printf("B*C=%i\n",Pbc);
      printf("B+D=%i\n",Sbd);
      printf("B*D=%i\n",Pbd);
      printf("C+D=%i\n",Scd);
      printf("C*D=%i\n",Pcd);

      return 0;
  }
