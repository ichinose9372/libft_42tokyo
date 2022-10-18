/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:32:01 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2022/10/17 13:08:09 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<string.h>
#include<stdio.h>

int main(void)
{
	unsigned char mem1[]  = {0x15, 0x34, 0x56, 0x78};		//	コピー元
	unsigned char mem2[5] = {0xff, 0xff, 0xff, 0xff, 0xff};	//	コピー先

	memcpy(mem2, mem1, sizeof(mem1));

	printf("mem2[]:%x %x %x %x %x", mem2[0], mem2[1], mem2[2], mem2[3], mem2[4]);

	return 0;
}
