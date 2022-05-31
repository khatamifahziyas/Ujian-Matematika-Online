#include <stdio.h>
#include <math.h>
int faktorial(int A){
    if(A<=1)
        return 1;
    return A*faktorial(A-1);
}

int fibo(int A){
    if(A<=1)
        return 1;
    return fibo(A-1)+fibo(A-2);
}

int FPB(int E, int F){
    if(E)
        return FPB(F%E, E);
    return F;
}

int Pangkat(int A, int D){
    if(!D)
        return 1;
    return A*Pangkat(A, D-1);
}

int KPK(int A, int B){
    return A/FPB(A, B)*B;
}

int PangkatModif1(int A, int D, int C){
	return Pangkat(A,D)-C;
}

int PangkatModif2(int A, int D, int C){
	return Pangkat(A,D)+C;
}

int faktormodif1(int A, int B, int C){
	return faktorial(A) + B - C;
}

int faktormodif2(int A, int B, int C){
	return faktorial(A) - B + C;
}

int faktormodif3(int A, int B, int C){
	return faktorial(A) + B + C;
}

int faktormodif4(int A, int B, int C){
	return faktorial(A) - B - C;
}
