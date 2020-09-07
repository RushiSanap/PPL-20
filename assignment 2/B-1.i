# 1 "B-1.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "B-1.c"
int AddTwo(int a)
{
    a = a + 2;
    return a;
}

int main()
{
    int x = 3;
    x = AddTwo(x);
    return x;
}
