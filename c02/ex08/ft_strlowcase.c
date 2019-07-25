/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 09:21:00 by tmarx             #+#    #+#             */
/*   Updated: 2019/07/04 11:30:09 by tmarx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (*(str + i))
	{
		if (*(str + i) >= 65 && *(str + i) <= 90)
			*(str + i) += 32;
		i++;
	}
	return (str);
}