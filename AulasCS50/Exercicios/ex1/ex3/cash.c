{
    float m;
    int r = 0;
    int q = 25;
    int d = 10;
    int n = 5;
    int p = 1;

    do
    {
        m = get_float("Troco: ");
    }
    while (m <= 0);
    int t = round(m * 100);

    {
        while (t >= q )
        r++;
    }

    printf("O troco é: %i\n", r);
}