#include <math.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void main()
{
    // Begin 1
    // float p, a = 0;
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
    
}