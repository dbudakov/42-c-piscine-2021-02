#include "../include/libft.h"

void c00(void)
{
    ft_putstr("c00: \n");
    ft_putchar_check();
    ft_putnbr_check();
    ft_print_reverse_alphabet_check();
    ft_print_numbers_check();
    ft_is_negative_check();
    ft_print_comb_check();
    ft_print_comb2_check();
    ft_print_combn_check();
    ft_putstr("\n");
}

void c01(void)
{
    ft_putstr("c01: \n");
    ft_ft_check();
    ft_ultimate_ft_check();
    ft_swap_check();
    ft_div_mod_check();
    ft_ultimate_div_mod_check();
    ft_putstr_check();
    ft_strlen_check();
    ft_rev_int_tab_check();
    ft_sort_int_tab_check();
    ft_putstr("\n");
}

void c02(void)
{
    ft_putstr("c02: \n");
    ft_strcpy_check();
    ft_strncpy_check();
    ft_str_is_alpha_check();
    ft_str_is_numeric_check();
    ft_str_is_lowercase_check();
    ft_str_is_uppercase_check();
    ft_str_is_printable_check();
    ft_strupcase_check();
    ft_strlowcase_check();
    ft_strcapitalize_check();
    ft_strlcpy_check();
    ft_putstr_non_printable_check();
    ft_print_memory_check();
    ft_putstr("\n");
}

void c03(void)
{
    ft_putstr("c03: \n");
    ft_strcmp_check();
    ft_strncmp_check();
    ft_strcat_check();
    ft_strncat_check();
    ft_strstr_check();
    ft_strlcat_check();
    ft_putstr("\n");
}

void c04(void)
{
    ft_putstr("c04: \n");
    ft_strlen_check();
    ft_putstr_check();
    ft_putnbr_check();
    ft_atoi_check();
    ft_putnbr_base_check();
    ft_atoi_base_check();
    ft_putstr("\n");
}

void c05(void)
{
    ft_putstr("c05: \n");
    ft_iterative_factorial_check();
    ft_recursive_factorial_check();
    ft_iterative_power_check();
    ft_recursive_power_check();
    ft_fibonacci_check();
    ft_sqrt_check();
    ft_is_prime_check();
    ft_find_next_prime_check();
    ft_ten_queens_puzzle_check();
    ft_putstr("\n");
}

void c06(int argc, char *argv[])
{
    ft_putstr("c06: \n");
    if (argc < 2)
        printf("needed args\n");
    else
    {
        ft_print_program_name_check(argc, argv);
        ft_print_params_check(argc, argv);
        ft_rev_params_check(argc, argv);
        ft_sort_params_check(argc, argv);
    }    
    ft_putstr("\n");
}

void c07()
{
    ft_putstr("c07: \n");
    ft_strdup_check();
    ft_range_check();
    ft_ultimate_range_check();
    ft_strjoin_check();
    ft_convert_base_check();
    ft_split_check();
    ft_putstr("\n");
}

void c08(int argc, char *argv[])
{
    ft_putstr("c08: \n");
    ft_boolean_check(argc, argv);
    ft_point_check();
    ft_strs_to_tab_check();
    ft_show_tab_check();
    ft_putstr("\n");
}

void c10(int argc,char *argv[])
{
    if (argc < 1)   
        argc = argv[0][0];
    ft_putstr("c10: \n");
    display_file_check(argc, argv);
    ft_cat_check(argc, argv);
    ft_tail_check(argc, argv);
    ft_hexdump_check(argc, argv);
    ft_putstr("\n");
}

void c11(int argc,char *argv[])
{
    if (argc < 1)   
        argc = argv[0][0];
    ft_putstr("c11: \n");
    ft_foreach_check();
    ft_map_check();
    ft_any_check();
    ft_count_if_check();
    ft_is_sort_check();
    ft_do_op_check(argc, argv);
    ft_sort_string_tab_check();
    ft_advanced_sort_string_tab_check();
    ft_putstr("\n");
}

void c12()
{
    ft_putstr("c12: \n");
    ft_create_elem_check();
    ft_list_push_front_check();
    ft_list_size_check();
    ft_list_last_check();
    ft_list_push_back_check();
    ft_list_push_strs_check();
    ft_list_clear_check();
    ft_list_at_check();
    ft_list_reverse_check();
    ft_list_foreach_check();
    ft_list_foreach_if_check();
    ft_list_find_check();
    ft_list_remove_if_check();
    ft_list_merge_check();
    ft_list_sort_check();
    ft_sorted_list_insert_check();
    ft_sorted_list_merge_check();
    ft_putstr("\n");  
}

void c13(){
    ft_putstr("c13: \n");
    btree_create_node_check();
    btree_insert_data_check();
    btree_apply_prefix_check();
    btree_apply_infix_check();
    btree_apply_suffix_check();
    btree_search_item_check();
    btree_level_count_check();
    btree_apply_by_level_check();
    ft_putstr("\n");
}

int main(int argc, char *argv[])
{
    if (argc < 1)   
        argc = argv[0][0];
    c00();
    c01();
    c02();
    c03();
    c04();
    c05();
    c06(argc, argv);
    c07();
    c08(argc, argv);
    c10(argc, argv);
    c11(argc, argv);
    c12();
    c13();

}
