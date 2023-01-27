#include "push_swap.h"

int	check_separator(char c)
{
	if ( c == 10 || c == 9 || c == 32)
		return (1);
	if (c == 0)
		return (1);
	return (0);
}

int	ft_strlen_sep(char *str)
{
	int	i;

	i = 0;
	while (str[i] && !check_separator(str[i]))
		i++;
	return (i);
}

char	*ft_word(char *str)
{
	int		len_word;
	int		i;
	char	*word;

	i = 0;
	len_word = ft_strlen_sep(str);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(t_num *num, char **str)
{
	char	        **strings;
    char            *first;
    static int      src;
	int             i;

	i = 1;
	strings = (char **)malloc(sizeof(char *) * (num->count + 1));
	while (i < num->argc)
	{
        first = str[i];
        while (*first)
        {
            while (*first != '\0' && check_separator(*first))
                first++;
            if (*first != '\0')
            {
                strings[src] = ft_word(first);
                src++;
            }
            while (*first && !check_separator(*first))
                first++;
        }
        i++;
	}
	strings[src] = 0;
	return (strings);
}