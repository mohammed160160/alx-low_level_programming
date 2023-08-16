/**
 * main - writes the first 98 values of fibonacci sequence
 * Return: 0
 */
int main(void)
{
int x;
double t;
double pt;
double ppt;

t = 0;
pt = 1;
ppt = 0;

for (x = 0; x <= 97; x++)
{
t = ppt + pt;
printf("%.0f", t);
ppt = pt;
pt = t;
if (x != 97)
{
printf(", ");
}
}
printf("\n");
return (0);
}
