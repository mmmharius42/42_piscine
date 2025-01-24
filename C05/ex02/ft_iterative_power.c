
int	ft_iterative_power(int nb, int power)
{
	int	resultat;

	resultat = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		resultat *= nb;
		power--;
	}
	return (resultat);
}
