/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avornane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 17:00:58 by avornane          #+#    #+#             */
/*   Updated: 2019/10/25 18:02:41 by avornane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>

char	*ft_strdup(const char *s1);
char	*ft_strcpy(char *dst, const char *src);
char 	*ft_strcat(char *s1, const char * s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
char	*ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strncpy(char *dst, const char *src, size_t len);
size_t	ft_strlen(char const *s);
char	*ft_strdup(const char *s1);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void * dst, const void * src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

#endif
