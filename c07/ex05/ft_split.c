/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 08:35:24 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/28 17:52:30 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_words(char *str, char *charset)
{
}

char	**ft_split(char *str, char *charset)
{
	int i;
	i = 0;
	i = ft_count_words(str, charset);
}

int	main(void)
{
	int		str_n;
	char	*str;
	char	*sep;
	char	**strs;

	str = "WfrONjnyoiSQ5GYKxJ6NSlqrUtPkklcoKR f";
	sep = "ySzX";
	strs = ft_split(str, sep);
	str_n = 0;
	while (strs[str_n] != 0)
	{
		printf("[%d]: %s\n", str_n, strs[str_n]);
		str_n++;
	}
	free(strs);
	return (0);
}
