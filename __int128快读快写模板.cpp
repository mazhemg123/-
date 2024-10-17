inline string sread()
{
string s = " ";
char e = getchar();
while (e == ' ' || e == '\n')e = getchar();
while (e != ' ' && e != '\n')s += e, e = getchar();
return s;
}
inline void swrite(string s)
{
for (char e: s)putchar(e);
printf("\n");
}
inline ll read()
{
ll x = 0, y = 1;
char c = getchar();
while (!isdigit(c))
{
if (c == '-')y = -1;
c = getchar();
}
while (isdigit(c))
{
x = (x << 3) + (x << 1) + (c ^ 48);
c = getchar();
取模模板
}
return x *= y;
}
inline void write(ll x)
{
if (x < 0)x = -x, putchar('-');
ll sta[35], top = 0;
do sta[top++] = x % 10, x /= 10; while (x);
while (top)putchar(sta[--top] + '0');
}
