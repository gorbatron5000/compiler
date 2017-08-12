struct a {
   int q,r,s,b,t,u,v;
};

struct c {
   struct a d;
   int l;
};

int main()
{
   struct a e;
   e.b = 1;
   e.t = 2;
}
