int five()
{
    return 5;
}

// Won't compile with warnings as errors
int main()
{
    int a{2};
    int b{2 + 3};
    int c{(2 * 3) + 4};
    int d{b};
    int e{five()};
    a + b;
    c + d;
    d + e;
}
