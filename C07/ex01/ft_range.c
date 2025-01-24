
int	*ft_range(int min, int max)
{
	int	*resultat;
	int	i;

	i = 0;
	resultat = malloc(sizeof(int) * (max - min));
	if (min >= max)
		return (NULL);
	if (resultat == NULL)
		return (NULL);
	while (min < max)
	{
		resultat[i] = min;
		min++;
		i++;
	}
	return (resultat);
}
