/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 16:22:28 by tfolly            #+#    #+#             */
/*   Updated: 2016/01/07 16:25:04 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_next_line(int fd, char **line)
{
	static t_stock	*stock;

	if (!stock)
	{
		stock = (t_stock*)ft_memalloc(sizeof(t_stock));
		
	}
}
