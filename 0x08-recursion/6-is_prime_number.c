/**
 * helper - does it for me
 * @i: helper int
 * @n: integer I'm testing
 * Return: value
 */
int helper(int i, int n)
{
if (n % i == 0 && n != i)
return (0);
if (n % i != 0 && i < n)
eturn (helper(i + 1, n));
return (1);
}
/**
 * is_prime_number - is prime or not
 * @n: integer to compare
 * Return: return 1 if prime, or zero if not
 */
int is_prime_number(int n)
{
int i = 2;

if (n < 2)
return (0);
return (helper(i, n));
}
