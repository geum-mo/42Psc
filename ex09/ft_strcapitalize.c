/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekang <gekang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 18:57:39 by gekang            #+#    #+#             */
/*   Updated: 2020/07/08 14:07:19 by gekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_lower(char *str, int i)
{
	int is_lowercase;

	is_lowercase = 0;
	if (96 < str[i] && str[i] < 123)
	{
		is_lowercase = 1;
	}
	return (is_lowercase);
}

int	ft_is_upper(char *str, int i)
{
	int is_upper;

	is_upper = 0;
	if (64 < str[i] && str[i] < 91)
	{
		is_upper = 1;
	}
	return (is_upper);
}

int	ft_is_num(char *str, int i)
{
	int is_numeric;

	is_numeric = 0;
	if (47 < str[i] && str[i] < 58)
	{
		is_numeric = 1;
	}
	return (is_numeric);
}

int	ft_is_alphanumeric(char *str, int i)
{
	int is_alphanumeric;

	is_alphanumeric = 0;
	if (ft_is_num(str, i) || ft_is_lower(str, i) || ft_is_upper(str, i))
	{
		is_alphanumeric = 1;
	}
	return (is_alphanumeric);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if (ft_is_lower(str, i))
				str[i] = str[i] - 32;
			i++;
		}
		else
		{
			if (ft_is_alphanumeric(str, i - 1))
			{
				if (ft_is_upper(str, i))
				{
					str[i] = str[i] + 32;
					printf("%c\n", str[i]);
				}
				i++;
			}
			else
			{
				if (ft_is_lower(str, i))
				{
					str[i] = str[i] - 32;
				}
				i++;
			}
		}
	}
	return (str);
}
