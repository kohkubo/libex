#include "libex.h"

char *arr_to_str(char **arr)
{
	char *str;
	int i;
	int len;

	i = 0;
	len = 0;
	while (arr[i])
	{
		len += ft_strlen(arr[i]);
		i++;
	}
	str = (char *)ft_xcalloc(sizeof(char), (len + 1));
	i = 0;
	while (arr[i])
	{
		ft_strlcat(str, arr[i], SIZE_MAX);
		i++;
	}
	return (str);
}
