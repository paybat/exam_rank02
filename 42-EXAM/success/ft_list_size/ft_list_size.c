
typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *begin_list)
{
	t_list *tmp;
	int		len;

	tmp = begin_list;
	len = 0;
	while (tmp)
	{
		len++;
		tmp = tmp ->next;
	}
	return (len);
}