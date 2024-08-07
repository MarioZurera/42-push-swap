/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzurera- <mzurera-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 03:25:00 by mzurera-          #+#    #+#             */
/*   Updated: 2024/08/02 20:48:01 by mzurera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*init_stack(int amount_of_nums)
{
	t_stack			*stack;

	if (amount_of_nums == 0)
		return (NULL);
	stack = malloc(sizeof(t_stack));
	if (stack == NULL)
		return (NULL);
	stack->size = amount_of_nums;
	stack->list = malloc(amount_of_nums * sizeof(int));
	return (stack);
}

void	free_stack(t_stack *stack)
{
	free(stack->list);
	free(stack);
}