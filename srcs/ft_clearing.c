/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clearing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 13:43:05 by ifran             #+#    #+#             */
/*   Updated: 2019/09/11 13:46:21 by ifran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_clearing(const char *str)
{
	while ((*str == ' ') || (*str == '\t') || (*str == '\r')
			|| (*str == '\n') || (*str == '\v') || (*str == '\f'))
		++str;
	return (str);
}
