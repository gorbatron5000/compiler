struct a {
   int b,c,d,e,f,g[10];
};

struct a z[100];
struct a y[10][10];
struct a x[1][2][3][4][5];

int main()
{
   z[10].d = 1;
   y[2][3].g[4] = 1;
}
