#include "libft.h"
#include <stdio.h>

void	f_del(void *content)
{
	free(content);
}

void	*f_f(void *content)
{
	char	*str;

	str = ft_strdup(content);
	return (ft_strtrim(str, "ls"));
}

int	main(void)
{
	char	*str1 = ft_strdup("lst1");
	char	*str2 = ft_strdup("lst2");
	char	*str3 = ft_strdup("lst3");
	char	*str4 = ft_strdup("lst4");
	char	*str5 = ft_strdup("lst5");
	t_list	*lst1 = ft_lstnew(str1);
	t_list	*lst2 = ft_lstnew(str2);
	t_list	*lst3 = ft_lstnew(str3);
	t_list	*lst4 = ft_lstnew(str4);
	t_list	*lst5 = ft_lstnew(str5);
	t_list	*lst;
	t_list	*tst;
	t_list	*tst1;

	lst1->next = lst2;
	lst2->next = lst3;
	lst3->next = lst4;
	lst4->next = lst5;
	lst5->next = NULL;
	lst = lst1;
	// printf("%s / %p @ %p\n", (char *)lst1->content, lst1->next, lst1);
	// printf("%s / %p @ %p\n", (char *)lst2->content, lst2->next, lst2);
	// printf("%s / %p @ %p\n", (char *)lst3->content, lst3->next, lst3);
	while (lst)
	{
		printf("%s / %p @ %p\n", (char *)lst->content, lst->next, lst);
		lst = lst->next;
	}
	tst1 = ft_lstmap(lst1, f_f, f_del);
	tst = tst1;
	while (tst)
	{
		printf("%s / %p @ %p\n", (char *)tst->content, tst->next, tst);
		tst = tst->next;
	}
	ft_lstclear(&lst1, f_del);
	ft_lstclear(&tst1, f_del);

}
