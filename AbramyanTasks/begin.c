#include <math.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void main()
{
    // Begin 1
    // float p = 0, a = 0;
    // scanf("%f", &a);
    // p = a * 4;
    // printf("Begin 1: \nP = %.2f \n", p);

    // Begin 2
    // float s, a = 0;
    // scanf("%f", &a);
    // s = a * a;
    // printf("Begin 2: \nS = %.2f \n", s);

    // Begin 3
    // float a = 0, b = 0, s = 0, p = 0;
    // scanf("%f", &a);
    // scanf("%f", &b);
    // s = a * b;
    // p = 2 * (a + b);
    // printf("Begin 3: \nS = %.2f, P = %.2f \n", s, p);

    // Begin 4
    // float d = 0, l = 0;
    // const float pi = 3.14f;
    // scanf("%f", &d);
    // l = pi * d;
    // printf("Begin 4: \nL = %.2f \n", l);
    
    // Begin 5
    // float a = 0, v = 0, s = 0;
    // scanf("%f", &a);
    // v = a * a * a;
    // s = 6 * a * a;
    // printf("Begin 5: \nV = %.2f, S = %.2f", v, s);

    // Begin 6
    // float a = 0, b = 0, c = 0, v = 0, s = 0;
    // scanf("%f", &a);
    // scanf("%f", &b);
    // scanf("%f", &c);
    // v = a * b * c;
    // s = 2 * (a * b + b * c + a * c);
    // printf("Begin 6: \nV = %.2f, S = %.2f", v, s);

    // Begin 7
    // float l = 0, s = 0, r = 0;
    // const float pi = 3.14f;
    // scanf("%f", &r);
    // l = 2 * pi * r;
    // s = pi * (r * r);
    // printf("Begin 7: \nL = %.2f S = %.2f", l, s);

    // Begin 8
    // float a = 0, b = 0;
    // scanf("%f", &a);
    // scanf("%f", &b);
    // printf("egin 8: \nArithmetical Middle = %.2f \n", (a + b) / 2);

    // Begin 9
    // float a = 0, b = 0;
    // scanf("%f", &a);
    // scanf("%f", &b);
    // printf("Begin 9: \nGeometrical Middle = %.2f \n", sqrtf(a * b));

    // Begin 10
    // float a = 0, b = 0;
    // float sqrSumm = 0, sqrDiffnce = 0, sqrProduct = 0,sqrQuotient = 0;
    // scanf("%f", &a);
    // scanf("%f", &b);
    // sqrSumm = powf(a, 2) + powf(b, 2);
    // sqrDiffnce = powf(a, 2) - powf(b, 2);
    // sqrProduct = powf(a, 2) * powf(b, 2);
    // sqrQuotient = powf(a, 2) / powf(b, 2);
    // printf("Begin 10: \nSquare summ = %.2f \nSquare difference = %.2f \nSquare product = %.2f \nSquare quotient = %.2f \n", sqrSumm, sqrDiffnce, sqrProduct, sqrQuotient);
    
    // Begin 11
    // float a = 0 ,b = 0;
    // scanf("%f", &a);
    // scanf("%f", &b);
    // a = fabs(a);
    // b = fabs(b);
    // printf("Begin 11: \nAbs Summ = %.2f \nAbs difference = %.2f \nAbs product = %.2f \nAbs product = %.2f", a + b, a - b, a * b, a / b);

    // Begin 12
    // float a = 0, b = 0, c = 0, p = 0;
    // scanf("%f", &a);
    // scanf("%f", &b);
    // c = sqrtf(powf(a, 2) + powf(b, 2));
    // p = a + b + c;
    // printf("Begin 12: \nHypotenuse = %.2f \nPerimeter = %.2f \n", c, p);


    // Begin 13
    // r1 need to be > than r2
    // float r1 = 0, r2 = 0, s1 = 0, s2 = 0, s3 = 0;
    // const float pi = 3.14f;
    // scanf("%f", &r1);
    // scanf("%f", &r2);
    // s1 = pi * powf(r1, 2);
    // s2 = pi * powf(r2, 2);
    // s3 = s1 - s2;
    // printf("Begin 13: \nSquare 1 = %.2f  \nSquare 2 = %.2f \nSquare 3 = %.2f \n", s1, s2, s3);

    // Begin 14
    // float l = 0, r = 0, s = 0;
    // const float pi = 3.14f;
    // scanf("%f", l);
    // r = l / (2 * pi);
    // s = pi * powf(r, 2);
    // printf("Begin 14: \nRadius = %.2f \nSqare = %.2f");

    // Begin 15
    // float s = 0, d = 0, l = 0, r = 0;
    // const float pi = 3.14;
    // scanf("%f", &s);
    // r = sqrt(s / pi);
    // d = r * 2;
    // l = 2 * pi * r;
    // printf("Begin 15: \nDiametr = %.2f \nCircumference = %.2f \n", d, l);

    // Begin 16
    // float x1 = 0, x2 = 0, dist = 0;
    // scanf("%f", &x1);
    // scanf("%f", &x2);
    // dist = fabs(x2 - x1);
    // printf("Begin 16: \nDistance between 2 points = %.2f \n", dist);

    // Begin 17
    // float a = 0, b = 0, c = 0, ac = 0, bc = 0, summ = 0;
    // scanf("%f", &a);
    // scanf("%f", &b);
    // scanf("%f", &c);
    // ac = fabs(c - a);
    // bc = fabs(c - b);
    // summ = ac + bc;
    // printf("Begin 17: \nAC lenght = %.2f \nBC lenght = %.2f \nSumm = %.2f", ac, bc, summ);

    // Begin 18
    // float a = 0, b = 0, c = 0, ac = 9, bc = 0, product = 0;
    // scanf("%f", &a);
    // scanf("%f", &b);
    // scanf("%f", &c);
    // ac = fabs(c - a);
    // bc = fabs(c - b);
    // product = ac * bc;
    // printf("Begin 18: \nProguct of AC and BC = %.2f \n", product);

    // Begin 19
    // float x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    // float a = 0, b = 0, p = 0, s = 0;
    // scanf("%f", &x1);
    // scanf("%f", &y1);
    // scanf("%f", &x2);
    // scanf("%f", &y2);
    // a = fabs(y2 - y1);
    // b = fabs(x2 - x1);
    // p = 2 * (a + b);
    // s = a * b;
    // printf("Begin 19: \nP = %.2f \nS = %.2f \n", p, s);

    // Begin 20
    // float x1 = 0, y1 = 0, x2 = 0, y2 = 0, dist = 0;
    // scanf("%f", &x1);
    // scanf("%f", &y1);
    // scanf("%f", &x2);
    // scanf("%f", &y2);
    // dist = sqrtf(powf(x2 - x1, 2) + powf(y2 - y1, 2));
    // printf("Begin 20: \nDistance = %.2f \n");

    // Begin 21
    // float x1 = 0, y1 = 0, x2 = 0, y2 = 0, x3 = 0, y3 = 0;
    // float a = 0, b = 0, c = 0, p = 0, halfP = 0, s = 0;
    // scanf("%f", &x1);
    // scanf("%f", &y1);
    // scanf("%f", &x2);
    // scanf("%f", &y2);
    // scanf("%f", &x3);
    // scanf("%f", &y3);
    // a = sqrtf(fabs(powf(x2 - x1, 2)) + fabs(powf(y2 - y1, 2)));
    // b = sqrtf(fabs(powf(x3 - x2, 2)) + fabs(powf(y3 - y2, 2)));
    // c = sqrtf(fabs(powf(x3 - x1, 2)) + fabs(powf(y3 - y1, 2)));
    // p = a + b + c; // Perimetr
    // halfP = p / 2; // Half perimetr
    // s = sqrtf(halfP * (halfP - a) * (halfP - b) * (halfP - c));
    // printf("Begin 21: \nP = %.2f \nS = %.2f", p, s);

    // Begin 22
    // float a = 0, b = 0;
    // scanf("%f", &a);
    // scanf("%f", &b);
    // a += b, b = a - b, a -= b;
    // printf("Begin22: \nswap magic A = %.2f, B = %.2f \n", a, b);

    // Begin 23
    // float a = 0, b = 0, c = 0;
    // scanf("%f", &a);
    // scanf("%f", &b);
    // scanf("%f", &c);
    // a += b + c, b = a - b - c, c = a - b - c, a = a - b - c;
    // printf("Begin23: \nswap magic A = %.2f, B = %.2f, C = %.2f \n", a, b, c);

    // Begin 24
    // float a = 0, b = 0, c = 0;
    // scanf("%f", &a);
    // scanf("%f", &b);
    // canf("%f", &c);
    // a += b + c, c = a - b - c, b = a - b - c, a = a - b - c;
    // printf("Begin23: \nswap magic A = %.2f, B = %.2f, C = %.2f \n", a, b, c);

    // Begin 25
    // float x = 0, y = 0;
    // scanf("%f", &x);
    // y = (3 * powf(x, 6)) - (6 * pow(x, 2)) - 7;
    // printf("Begin 25: \nY = %.2f \n", y);

    // Begin 26
    // float x = 0, y = 0;
    // scanf("%f", &x);
    // y = (4 * powf(x - 3, 6)) - (7 * powf(x - 3, 3)) + 2;
    // printf("Begin 26: \nY = %.2f \n", y);
    
    // Begin 27
    // float a = 0, res = 0;
    // scanf("%f", &a);
    // res = a;
    // printf("Begin 27: \nA = %.2f \nA = %.2f \nA = %.2f \n", res *= res, res *= res, res *= res);

    // Begin 28
    float a = 8, b = 0, c = 0;
    b = a;
    c = a;
    printf("Begin 28: \nA = %.2f \nA = %.2f \nA = %.2f \nA = %.2f \nA = %.2f", );


}