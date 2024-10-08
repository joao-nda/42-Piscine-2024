/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-barr <hde-barr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 09:00:21 by hde-barr          #+#    #+#             */
/*   Updated: 2024/08/03 16:45:13 by jnuno-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char e);

void	rush(int x, int y)
{
	int	r;
	int	c;

	r = 0;
	c = 0;
	while (r < y)
	{
		while (c < x)
		{
			if ((r == 0 && c == 0) || (r == y - 1 && c == 0))
				ft_putchar('A');
			if (((c == 0 || c == x - 1) && (r >= 1 && r <= y - 2))
				|| ((r == 0 || r == y - 1) && (c >= 1 && c <= x - 2)))
				ft_putchar('B');
			if (x > 1 && ((r == 0 && c == x - 1) || (r == y - 1 && c == x - 1)))
				ft_putchar('C');
			if ((r >= 1 && r <= y - 2) && (c >= 1 && c <= x - 2))
				ft_putchar(' ');
			c++;
		}
		if (x > 0)
			ft_putchar('\n');
		c = 0;
		r++;
	}
}
