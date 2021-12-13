/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmiseren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 15:15:49 by gmiseren          #+#    #+#             */
/*   Updated: 2021/12/05 15:44:58 by gmiseren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strupcase(char *str)
{
	if (*str >= 'a' && *str <= 'z')
		*str = *str -32;
	return (str);
}

int	not_alphanumberic(char *c)
{
	if (*c < '0' || *c > '9')
		if (*c < 'A' || *c > 'Z')
			if (*c < 'a' || *c > 'z')
				return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	ft_strlowcase(str);
	ft_strupcase(&str[0]);
	while (str[i] != 0)
	{
		if (not_alphanumberic(&str[i - 1]))
			ft_strupcase(&str[i]);
		i++;
	}
	return (str);
}
