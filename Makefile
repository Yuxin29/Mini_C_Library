NAME = libft_0all_libs

.PHONY: all clean fclean re

all:
	$(MAKE) -C libft_0
	$(MAKE) -C Ft_printf
	$(MAKE) -C Get_next_line

clean:
	$(MAKE) -C libft_0 clean
	$(MAKE) -C Ft_printf clean
	$(MAKE) -C Get_next_line clean

fclean:
	$(MAKE) -C libft_0 fclean
	$(MAKE) -C Ft_printf fclean
	$(MAKE) -C Get_next_line fclean

re: fclean all
