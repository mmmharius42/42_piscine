
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	c;
	int	d;

	c = 0;
	d = 0;
	while (dest[c] != '\0')
		c++;
	while (src[d] != '\0')
	{
		dest[c] = src[d];
		c++;
		d++;
	}
	dest[c] = '\0';
	return (dest);
}

int	calc_total(int size, char **strs, char *sep)
{
	int	total;
	int	i;

	total = 0;
	i = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	total += ft_strlen(sep) * (size - 1);
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*resultat;
	int		total;
	int		i;

	if (size == 0)
	{
		resultat = malloc(sizeof(char));
		resultat[0] = '\0';
		return (resultat);
	}
	total = calc_total(size, strs, sep);
	resultat = malloc(sizeof(char) * (total + 1));
	if (resultat == NULL)
		return (NULL);
	i = 0;
	resultat[0] = '\0';
	while (i < size)
	{
		ft_strcat(resultat, strs[i]);
		if (i < size - 1)
			ft_strcat(resultat, sep);
		i++;
	}
	return (resultat);
}

/*
#include <stdio.h>

int main(void)
{
	char *strs[4] = {"shrek est un", "Il est beau et sens bon"};
	char *sep = "ogres.";
	char *resultat;

	ret = ft_strjoin(4, strs, sep);
	printf("%s\n", resultat);
	free(resultat);
	return (0);
}
*/