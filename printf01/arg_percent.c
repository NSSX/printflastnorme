/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_percent.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/02 17:24:14 by avella            #+#    #+#             */
/*   Updated: 2016/05/02 17:24:15 by avella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_printf.h"

void	the_percent(t_main *main)
{
	main->size++;
	main->print = ft_strjoin_carac(main->print, '%');
}
