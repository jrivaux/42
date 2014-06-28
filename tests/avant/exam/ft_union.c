/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_union.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/28 15:51:47 by jrivaux           #+#    #+#             */
/*   Updated: 2014/01/30 09:01:12 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_union(char *s1, char c[128])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i]) // temps que je suis dans s1
	{
		j = 0; // je met j a 0 pour parcourir plusieurs fois mon tableau
		while (c[j] && s1[i] != c[j]) // temps que j'ai mon tableau et je n'ai pas les eme caracteres dans s1 et c
			j++; // j'avance
		if (!c[j]) // quand j'ai fini de parcourir mon tableau
		{
			write(1, &s1[i], 1);// j'ecris s1
			c[j] = s1[i];// je copie s1 dans mon tableau
			c[j + 1] = 0;// je met le \0 a la fin de mon tableau
		}
		i++;// j'avance dans ma chaine
	}
}

int	main(int argc, char **argv)
{
	char	c[128];//on declare un tableau statiquement

	c[0] = 0;
	if (argc == 3)// si j'ai 3 arguments
	{
		ft_union(argv[1], c);// je fais ft_union dans mon tableau sur le 2eme argument
		ft_union(argv[2], c);// je fais ft_union dans mon tableau sur le 3eme argument
	}
	write(1, "\n", 1);//puis je fais le retour a la ligne
	return (0);
}
