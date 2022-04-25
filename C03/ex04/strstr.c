/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ragnar.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 01:50:42 by ybourais          #+#    #+#             */
/*   Updated: 2022/04/03 01:50:53 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int len(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    while(len(to_find) == 0)
        return(str);
    while(str[i] != '\0')
    {
        j = 0;
        while (to_find[j] == str[i + j] )
        {
            if(len(to_find) == j + 1)
                return(str + i);
        j++;   
        }
        i++;
    }
    return (0);
}