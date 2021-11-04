#include <stdio.h>
#include <conio.h>

 
int main()
{
   
    //A
	int ia; 
	ia = (1 || 2) % (1 | 2);
	printf("i = % d\n", ia);
	
	//B
	//int ab, bb, mb, nb, zb;
	//mb = nb = 5;
	//zb = ab = bb = 0;
	//zb--, (ab = bb) = zb + (mb != nb);
	//printf("%d% d% d% d% d\n", ab, bb, mb, nb, zb);

	//C
	int ic = 1;
	ic = ic << ic | ic;
	printf("i = % d\n", ic);

	//D
	double xd = 1.9; int ad;
	double bd = 3.7;
	ad = bd += (1 && 2 || 3) != (int)xd;
	printf("% f % d % f\n", xd, ad, bd);

	//E
	//int xe;
	//xe = 5; ++xe = 10;
	//printf("%d\n", xe);

	//F
	int if1, xf, yf; xf = 5; yf = 10; if1 = 15;
	xf = (yf = 0, if1 = 1);
	printf("%d %d %d\n", if1, xf, yf);
	(xf = yf == 0), if1 = 1;
	printf("%d %d %d\n", if1, xf, yf);

	//G
	int xg, yg; 
	xg = 5; yg = xg && ++xg;
	printf("%d %d\n", xg, yg);

	//H
	int xh = 2, yh, zh;
	xh *= 3 + 2; xh *= yh = zh = 4;
	printf("%d %d %d\n", xh, yh, zh);
	xh = yh == zh; xh == (yh = zh);
	printf("%d %d %d\n", xh, yh, zh);

	 //I
	int xi = 2, yi = 1, zi = 0;
	yi = xi && yi || zi;
	xi = xi || !yi && zi;
	zi = xi / ++xi;
	printf(" %d %d %d\n", xi, yi, zi);

	 //J
	int xj = 03, yj = 02, zj = 01;
	printf("%d\n", xj | yj & -zj);
	printf("%d\n", xj ^ yj & -zj);
	printf("%d\n", xj & yj && zj);
	printf("%d\n", xj << 3);

	 //K
	int xk, yk, zk; 
	xk = yk = zk = 1;
	xk += yk += zk;
	printf("%d\n", xk < yk ? yk++ : xk++);
	printf("%d\n", zk += xk < yk ? ++xk : yk--);
	printf("%d %d %d\n", xk, yk, zk);
	printf("%d\n", zk >= yk && yk >= xk);

	 //L
	int xl, yl, zl, il; xl = yl = zl = 1;
	il = ++xl || ++yl && ++zl;
	printf("%d%d%d%d\n", xl, yl, zl, il);
	il = xl++ <= --yl || ++zl >= il;
	printf("%d%d%d%d\n", xl, yl, zl, il);


    
}