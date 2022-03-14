/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoon <jiyoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 00:47:49 by jiyoon            #+#    #+#             */
/*   Updated: 2022/03/14 16:54:16 by jiyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
	int *ptr;
	
	ptr = (int*)malloc(10*sizeof(int)); //크기 10 으로 동적할당
	for (int i = 0; i < 10; i++) {
		*(ptr + i) = i;
		printf("[%d] ", *(ptr+i)); // 0, 1, 2, 3, 4, 5 ... 출력
	}
	printf("\n");
	memset(ptr, 0, sizeof(int)*10); // 크기 10 만큼 0으로 초기화
	for (int i = 0; i < 10; i++) {
		printf("[%d] ", *(ptr+i)); // 0, 0, 0, 0, 0, 0 ... 출력
	}
	printf("\n");
	return 0;
}

// int	main(void)
// {
// 	int	i;

// 	i = ft_strlen("127");
// 	printf("%d", i);
// 	return (0);
// }
