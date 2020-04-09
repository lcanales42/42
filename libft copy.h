/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcanales <lcanales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 18:37:12 by lcanales          #+#    #+#             */
/*   Updated: 2019/11/15 20:19:59 by lcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <stdlib.h>
typedef struct s_list
{
	void			*content;
	struct s_list 	*next;
} 					t_list;

//int		ft_atoi(const char *str); //Convierte una cadena a su valor numérico (entero), devuel el int del numero.
//void	ft_bzero(void *s, size_t n); //Pone a cero los primeros n bytes del área de bytes que comienza en s.
//void	*ft_calloc(size_t count, size_t size);// Reserva memoria y inicializa a 0 la memoria reservada, retorna la cadena de carracteres.
int		ft_isalnum(int c);//Indica si un carácter es alfabético o numérico. Devuelve "verdadero" (un valor distinto de cero) si el carácter es alfabético o numérico.
int		ft_isalpha(int c);//Indica si un carácter es alfabético. Devuelve "verdadero" (un valor distinto de cero) si el carácter está entre A y Z o entre a y z.
int		ft_isascii(int c);//Indica si un carácter es ASCII. Devuelve "verdadero" (un valor distinto de cero) si el carácter es ASCII.
int		ft_isdigit(int c);//Indica si un carácter es numérico. Devuelve "verdadero" (un valor distinto de cero) si el carácter es numérico (0 a 9).
int		ft_isprint(int c);//Indica si el carácter es imprimible, incluyendo el espacio en blanco. Devuelve "verdadero" (un valor distinto de cero) si el carácter es imprimible.
//char    *ft_itoa(int n);//Reserva memoria (con malloc(3)) para la cadena decaracteres que va a devolver, que representa elinteger pasado como argumento. Se deben gestionarlos números negativos.
//void	*ft_memccpy(void *dst, const void *src, int c, size_t n);//Copia  como mucho n bytes desde el área de memoria orig al área de memoria dest, parando cuando se encuentra el carácter c. Devuelve un puntero al siguiente carácter de dest tras c, o NULL si c no estaba en los n primeros caracteres de orig.
//void	*ft_memchr(const void *s, int c, size_t n);//Localiza la primera aparición del carácter c (convertido a unsigned char) en los primeros n caracteres (cada uno interpretado como un unsigned char) del objeto apuntado por s. Devuelve un puntero al carácter localizado, o un puntero nulo si el carácter no apareció en el objeto.
//int		ft_memcmp(const void *s1, const void *s2, size_t n);//Compara los primeros n caracteres del objeto apuntado por s1 (interpretado como unsigned char) con los primeros n caracteres del objeto apuntado por s2 (interpretado como unsigned char). Devuelve un número entero mayor, igual, o menor que cero, apropiadamente según el objeto apuntado por s1 es mayor, igual, o menor que el objeto apuntado por s2.
//void	*ft_memcpy(void *dst, const void *src, size_t n);//Copia n bytes desde el area de memoria src al area dest. Devuelve el dest.
//void	*ft_memmove(void *dst, const void *src, size_t len);//Copia n bytes del área de memoria src al área de memoria dest. Las áreas de memoria pueden solaparse. Devuelve un puntero a dest.
//void	*ft_memset(void *b, int c, size_t len); //Rellena los primeros n bytes del área de memoria apuntada por s con el byte constante c. Devuelve un puntero al área de memoria s.
void	ft_putchar_fd(char c, int fd);//Muestra un carácter en pantalla. Devuelve el carácter a mostrar
void	ft_putendl_fd(char *s, int fd);//Escribe la cadena de caracteres s sobre el filedescriptor proporcionado, seguida de un salto de línea
void	ft_putnbr_fd(int n, int fd);//Escribe el entero n sobre el file descriptorproporcionado.
void	ft_putstr_fd(char *s, int fd);//Escribe la cadena de caracteres c sobre el descriptor de fichero proporcionado.
char    **ft_split(char const *s, char c);//Reserva memoria (con malloc(3)) para la tabla decadena de caracteres que va a devolver, obtenidaseparando s con el carácter c, que se utiliza comodelimitador. La tabla debe terminar con NULL.
//char	*ft_strchr(const char *str, int c);//Busca cierta letra dentro de una cadena de texto. Devuelve NULL si no la contiene, o un puntero a la posición en que se encuentra, en caso contrario.
//char	*ft_strdup(const char *s1);//Copia la cadena de caracteres s1 en una cadena de caracteres destino pero que se ha creado con Malloc, contando el NULL.
//char	*ft_strjoin(char const *s1, char const *s2);//Reserva memoria (con malloc(3)) para la cadena decaracteres que va a devolver, y que resulta de laconcatenación de s1 y s2.
//size_t	ft_strlcat(char *dst, const char *src, size_t destsize);//Concatena n caracteres una cadena de caracteres origen en otra destino . Devuelve en temaño del origen mas los caracteres copiedos.
//size_t	ft_strlcpy(char *dst, const char *src, size_t destsize);
//size_t	ft_strlen(const char *str);//Devuelve la longitud (número de letras almacenadas) en una cadena de texto, sin contar el carácter nulo final. Devuelve un número entero.
//char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));//Aplica la función f a cada carácter de la de cadenade caracteres pasada como argumento para crear unanueva cadena de caracteres (con malloc (3)) queresulte de las aplicaciones sucesivas de f.
//int		ft_strncmp(const char *s1, const char *s2, size_t n);// Compara no más de n caracteres (caracteres posteriores al carácter nulo no se tienen en cuenta) de la cadena apuntada por s1 con la cadena apuntada por s2. Devuelve un número entero mayor, igual, o menor que cero, apropiadamente según el objeto apuntado por s1 es mayor, igual, o menor que el objeto apuntado por s2.
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *str, int c);//Localiza la última aparición de c (convertido a unsigned char) en la cadena apuntada por s (incluyendo el carácter nulo). Devuelve un puntero al carácter localizado, o un puntero nulo si el carácter no apareció en el objeto.
//char	*ft_strtrim(char const *s1, char const *set);//Reserva memoria (con malloc(3)) para la cadena decaracteres que va a devolver, que es una copiade la cadena de caracteres pasada como argumento,sin los caracteres indicados en el set pasado comoargumento al principio y al final de la cadena decaracteres.
//char	*ft_substr(const char *s, unsigned int start, size_t len);//Reserva memoria (con malloc(3)) para la cadena de caracteres que va a devolver, y que proviene de la (scadena pasada como argumento.Esta nueva cadena comienza en el índice ’start’ y tiene como tamaño máximo ’len.
int		ft_tolower(int c);//Convierte una carácter entre la A y la Z (mayúsculas) a minúsculas. Si es minúscula u otro símbolo, no se altera. Devuelve el carácter en minúsculas.
int		ft_toupper(int c);//Convierte una carácter entre la a y la z (minúsculas) a mayúsculas. Si es mayúscula u otro símbolo no se altera. Devuelve el carácter en mayúsculas.
#endif
