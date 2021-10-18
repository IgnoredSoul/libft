#include "libft.h"

static char	**ft_free_matrix(char **matrix, unsigned int rows)
{
	while (rows-- != 0)
		free(matrix[rows]);
	free(matrix);
	matrix = NULL;
	return (matrix);
}

static size_t	ft_rows(const char *s, char c)
{
	size_t	max_rows;

	if (*s == c)
		max_rows = 0;
	else
		max_rows = 1;
	while (*s)
	{
		if (*s == c && (*(s + 1) != c && *(s + 1) != '\0'))
			max_rows++;
		s++;
	}
	return (max_rows);
}

static size_t	ft_cols(const char *s, char c)
{
	size_t	max_cols;

	max_cols = 0;
	while (*s && *s != c)
	{
		max_cols++;
		s++;
	}
	return (max_cols);
}

static char	**ft_split_strs(const char *s, char c, size_t *row, size_t *col)
{
	char	**strs;
	size_t	n_rows;

	n_rows = ft_rows(s, c);
	strs = (char **)malloc((n_rows + 1) * sizeof(char *));
	while (*s && strs)
	{
		if (*s != c && ((*row == 0 && *col == 0) || *(s - 1) == c))
		{
			if (*col != 0)
				strs[*row][*col] = 0;
			if (*col == 0)
				*row = 0;
			else
				*row = *row + 1;
			strs[*row] = (char *)malloc((ft_cols(s, c) + 1) * sizeof(char));
			if (!strs[*row])
				return (strs = ft_free_matrix(strs, n_rows));
			*col = 0;
		}
		if (*s != c)
			strs[*row][(*col)++] = *s;
		s++;
	}
	return (strs);
}

char	**ft_split(const char *s, char c)
{
	char	**split_strs;
	size_t	row;
	size_t	col;

	if (!s)
		return (NULL);
	row = 0;
	col = 0;
	split_strs = ft_split_strs(s, c, &row, &col);
	if (!split_strs)
		return (NULL);
	if (col != 0)
		split_strs[row++][col] = 0;
	split_strs[row] = 0;
	return (split_strs);
}
