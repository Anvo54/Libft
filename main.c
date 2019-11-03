#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

void	striter_test(char *c)
{
	*c = ft_toupper(*c);
}
void	striteri_test(unsigned int i, char *c)
{
	*c = ft_toupper(*c) + i;
}


char	testmap(char c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

char	testmapi(unsigned int i, char c)
{
	if (c >= 97 && c <= 122)
		c -= (32 - i);
	return (c);
}


int main()
{
	/*******Testing for ft_Memset**************/ 
	char str[50] = "Hello, here is a test text";
	char str2[50] = "Hello, here is a test text";
	
	printf("Original memset:\n%s\n", str);
	printf("Original ft_memset:\n%s\n\n", str2);
	memset(str + 13, '.', 8);
	printf("memset:\n%s\n\n", str);	
	ft_memset(str2 + 13, '.', 8);
	printf("ft_memset:\n%s\n\n", str2);

	/**********Testing bzero*******************/

	int i;

	i = 0;
    char bzstr[34] = "This is a test string before bzero";
	char ft_bzstr[34] = "This is a test string before bzero";

    printf("\n\nBZERO\n\n");

    while (i < 34)
    {
        if(bzstr[i] == '\0')
        {
            printf("'\\0\' ");
        } else
        {
            printf("%c", bzstr[i]);
        }
        i++;
    }


	printf("\n");
    bzero(bzstr, 4);

    i = 0;
    while (i < 34)
    {
        if(bzstr[i] == '\0')
        {
            printf("'\\0\' ");
        } else
        {
            printf("%c", bzstr[i]);
        }
        i++;
    }


	printf("\n");


    printf("\n\nFT_BZERO\n\n");

	i = 0;
	while (i < 34)
    {
        if(ft_bzstr[i] == '\0')
        {
            printf("'\\0\' ");
        } else
        {
            printf("%c", ft_bzstr[i]);
        }
        i++;
    }
	printf("\n");
	bzero(ft_bzstr, 4);

    i = 0;
    while (i < 34)
    {
        if(ft_bzstr[i] == '\0')
        {
            printf("'\\0\' ");
        } else
        {
            printf("%c", ft_bzstr[i]);
        }
        i++;
    }

	/********Testing ft_memcpy**************/

	printf("FT_MEMCPY TEST\n\n\n\n");

	char strcpy[50] = "Hello this is memcpy";
	char deststr[50];

	char ft_strcpy_str[50] = "Hello this is memcpy";
	char ft_deststr[50];


	memcpy(deststr, &strcpy, 5);
	printf("memcpy, 5 characters\n\n");
	printf("%s\n\n\n", deststr);

	ft_memcpy(ft_deststr, &ft_strcpy_str, 5);
	printf("ft_memcpy, 5 characters\n\n");
	printf("%s\n\n\n", ft_deststr);

	memcpy(deststr, &strcpy, 15);
	printf("memcpy, 15 characters\n\n");
	printf("%s\n\n\n", deststr);

	ft_memcpy(ft_deststr, &ft_strcpy_str, 15);
	printf("ft_memcpy, 15 characters\n\n");
	printf("%s\n\n\n", ft_deststr);

	memcpy(deststr, &strcpy, 21);
	printf("memcpy, 21 characters\n\n");
	printf("%s\n\n\n", deststr);

	ft_memcpy(ft_deststr, &ft_strcpy_str, 21);
	printf("ft_memcpy, 21 characters\n\n");
	printf("%s\n\n\n", ft_deststr);

	memcpy(deststr, &strcpy, 40);
	printf("memcpy, 40 characters\n\n");
	printf("%s\n\n\n", deststr);

	ft_memcpy(ft_deststr, &ft_strcpy_str, 40);
	printf("ft_memcpy, 40 characters\n\n");
	printf("%s\n\n\n", ft_deststr);

	printf("MEMCPY |||  All reserved memory from ft_dstcpy\n");
	i = 0;

	while (i <= 40)
	{
		printf("%c",deststr[i]);
		i++;
	}
	printf("\n");
	i = 0;

	printf("FT__MEMCPY |||  All reserved memory from dstcpy\n");
	i = 0;

	while (i <= 40)
	{
		printf("%c",ft_deststr[i]);
		i++;
	}
	printf("\n\n");
	i = 0;

	printf("TESTING SAME SRC & DST\n\n\n\n");

	ft_memcpy(strcpy, strcpy+5, 21);
	while (i <= 40)
	{
		printf("%c",strcpy[i]);
		i++;
	}

	i = 0;
	printf("\n\n");
	
	printf("TESTING SAME MEMCPY SRC & DST\n\n\n\n");

	memcpy(ft_strcpy_str, ft_strcpy_str+5, 21);
	while (i <= 40)
	{
		printf("%c",strcpy[i]);
		i++;
	}

	i = 0;
	printf("\n\n");



	/***Test of memmove********/

	char mstr[50] = "Shpongle - Tales of the inexpressible";
	char e_mstr[50];

	char ft_mstr[50] = "Shpongle - Tales of the inexpressible";
	char ft_e_mstr[50];

	memmove(&e_mstr, &mstr, 25);

	printf("memmove 25 result: %s\n", e_mstr);
	printf("memmove source: %s\n", mstr);

	//memmove(&e_mstr, &mstr, -3);

	printf("memmove: %s", e_mstr);
    printf("ft_memmove: %s\n", ft_e_mstr);
    //printf("%s\n", ft_mstr);

	/********* Testing MEMCHR **************/

	char *pch;
	char chr_str[] = "Example string";
	pch = (char*)ft_memchr(chr_str, 'p', ft_strlen(chr_str));
	if (pch!=NULL)
		printf ("'p' found at position %ld.\n", pch-chr_str+1);
	else
		printf ("'p' not found.\n");


	/********* MEMCMP **********************/

	char memcmpstr_1[25] = "This is a test";
	char memcmpstr_2[25] = "This is a test";
	char memcmpstr_1_diff[25] = "This is a bost";
	
	printf("\n\nHere is original memcmp with same string \n\n\n%i", memcmp(memcmpstr_1,memcmpstr_2,15));
	
	printf("\n\nHere is original memcmp with different string \n\n\n%i", memcmp(memcmpstr_1,memcmpstr_1_diff,15));
	
	printf("\n\nHere is ft_memcmp with same string \n\n\n%i", ft_memcmp(memcmpstr_1,memcmpstr_2,15));
	
	printf("\n\nHere is ft_memcmp with different string \n\n\n%i", ft_memcmp(memcmpstr_1,memcmpstr_1_diff,15));
	
	/********************* STRDUP *******************************/

	char str_ds[50] = "This is a test string";
	char *str_e = strdup(str_ds);
	char *ft_str_e = ft_strdup(str_ds);
	printf("\nOriginal: %s\nft_strdup: %s\n", str_ds, ft_str_e);

	/******************** FT_STRCPY *****************************/

	char str_cpy_test[50] =  "This is the strcpy test";
	char strcpydst[50];
	strcpy(strcpydst, str_cpy_test);
	printf("%s",strcpydst);

	char ft_str_cpy_test[50] =  "This is the strcpy test";
	char ft_strcpydst[50];

	ft_strcpy(ft_strcpydst, ft_str_cpy_test);


	printf("\n%s", ft_strcpydst);	


	/****************** STRNCPY *******************************/

	char strncpy_str[50] = "test string for n copy";
	char strn_dst[50];

	strncpy(strn_dst, strncpy_str, 15);
	printf("\n%s", strn_dst);

	char ft_strn_str[50] = "Hello darkness my old friend";
	char ft_strn_dst[50];

	ft_strncpy(ft_strn_dst, ft_strn_str, 15);
	printf("\n%s", ft_strn_dst);

	/***************** STRCAT ********************************/

	char strcat_orig[100] = "Hello darkness my old friend";
	char strcat_orig_1[100] = " I came to talk with you again";
	strcat(strcat_orig, strcat_orig_1);

	printf("\n%s", strcat_orig);

	char ft_strcat_orig[100] = "Hello darkness my old friend";
	char ft_strcat_orig_1[100] = " I came to talk with you again";
	ft_strcat(ft_strcat_orig, ft_strcat_orig_1);

	printf("\n%s", ft_strcat_orig);



	/**************** STRLCAT *******************************/

	char strlcat_str[50] = "How does this work";
	char strlcat_str_1[11] = " and this?";
	char ploks[50];

	strlcat(strlcat_str, strlcat_str_1, 29);

	printf("strlcat:\n%s\n",strlcat_str);


	char ft_strlcat_str[50] = "How does this work";
	char ft_strlcat_str_1[11] = " and this?";


	ft_strlcat(ft_strlcat_str, ft_strlcat_str_1, 29);

	printf("%s", ploks);
	printf("ft_strlcat:\n%s\n",ft_strlcat_str);


	/*************Testing strchr *************/

	char strchr_str[50] = "Hello everyonye!";

	char *ptr_strchr;
	ptr_strchr = (char*)strchr(strchr_str, 'y');
	if (ptr_strchr!=NULL)
		printf ("Original strchr\n'y' found at position %ld.\n", ptr_strchr-strchr_str+1);
	else
		printf ("'y' not found.\n");


	ptr_strchr = (char*)ft_strchr(strchr_str, 'y');
	if (ptr_strchr!=NULL)
		printf ("ft_strchr\n'y' found at position %ld.\n", ptr_strchr-strchr_str+1);
	else
		printf ("'y' not found.\n");


	/*****************strrchr****************/

	ptr_strchr = (char*)strrchr(strchr_str, 'y');
	if (ptr_strchr!=NULL)
		printf ("Original strrchr\n'y' found at position %ld.\n", ptr_strchr-strchr_str+1);
	else
		printf ("'y' not found.\n");


	ptr_strchr = (char*)ft_strrchr(strchr_str, 'y');
	if (ptr_strchr!=NULL)
		printf ("ft_strchr\n'y' found at position %ld.\n", ptr_strchr-strchr_str+1);
	else
		printf ("'y' not found.\n");

	/**************** strstr ****************/

	const char haystack[25] = "Needle from haystack";
	const char needle[10] = "haystack";
	char *ret;
	char *ft_ret;

	ret = strstr(haystack, needle);
	ft_ret = ft_strstr(haystack, needle);
	printf("strstr\nNeedle is: %s\n", ret);
	printf("ft_strstr\nNeedle is: %s\n", ft_ret);


	/**************** strnstr ****************/

	char *strnret;
	char *ft_strnret;

	strnret = strnstr(haystack, needle, 24);
	ft_strnret = ft_strnstr(haystack, needle, 24);
	printf("strNstr\nNeedle is: %s\n", strnret);
	printf("ft_strstr\nNeedle is: %s\n", ft_strnret);

	/********** srtcmp ************************/

	char str_1[20] = "Hello";
	char str_2[20] = "Hella";

	int valres = strcmp(str_1,str_2);

	printf("STRCMP\n\ns1: Hello\ns2: Hella\nResult is: %i\n\n", valres);
	valres = ft_strcmp(str_1,str_2);

	printf("FT_STRCMP\n\ns1: Hello\ns2: Hella\nResult is: %i", valres);

	valres = strncmp(str_1,str_2, 5);

	printf("STRNCMP\n\ns1: Hello\ns2: Hella\nResult is: %i\n\n", valres);
	
	valres = ft_strncmp(str_1,str_2, 5);

	printf("FT_STRNCMP\n\ns1: Hello\ns2: Hella\nResult is: %i", valres);
	
	/***************** ATOI ***************************/

	char atoi_test[35] = "00";
	int atoi_result = atoi(atoi_test);
	int	ft_atoi_result = atoi(atoi_test);
	printf("\n%d", atoi_result);
	printf("\n%d\n", ft_atoi_result);


	/************** isAlpha **************************/

	printf("\nOriginal isAlpha:\n%i", isalpha('b'));
	printf("\nft_isAlpha:\n%i", ft_isalpha('b'));
	printf("\nOriginal isAlpha:\n%i", isalpha('?'));
	printf("\nft_isAlpha:\n%i", ft_isalpha('?'));
	
	/***************** isdigit ***********************/

	printf("\nOriginal isdigit:\n%i", isdigit(6));
	printf("\nft_isdigit:\n%i", ft_isdigit(6));
	printf("\nOriginal isdigit:\n%i", isdigit('9'));
	printf("\nft_isdigit:\n%i", ft_isdigit('9'));

	/***************** isalnum ***********************/

	printf("\nOriginal isalnum:\n%i", isalnum(6));
	printf("\nft_isalnum:\n%i", ft_isalnum(6));
	printf("\nOriginal isalnum:\n%i", isalnum('9'));
	printf("\nft_isalnum:\n%i", ft_isalnum('9'));

	/***************** isascii ***********************/

	printf("\nOriginal isascii:\n%i", isascii(6));
	printf("\nft_isascii:\n%i", ft_isascii(6));
	printf("\nOriginal isascii:\n%i", isascii('9'));
	printf("\nft_isascii:\n%i", ft_isascii('9'));

	/***************** isprint ***********************/

	printf("\nOriginal isprint:\n%i", isprint(6));
	printf("\nft_isprint:\n%i", ft_isprint(6));
	printf("\nOriginal isprint:\n%i", isprint('9'));
	printf("\nft_isprint:\n%i", ft_isprint('9'));

	/***************** toupper ***********************/

	printf("\nOriginal toupper:\n%c", toupper('a'));
	printf("\nft_toupper:\n%c", ft_toupper('a'));
	printf("\nOriginal toupper:\n%c", toupper('r'));
	printf("\nft_toupper:\n%c", ft_toupper('r'));
	printf("\nOriginal toupper:\n%c", toupper('9'));
	printf("\nft_toupper:\n%c", ft_toupper('9'));


	/***************** toupper ***********************/

	printf("\nOriginal toupper:\n%c", tolower('Q'));
	printf("\nft_toupper:\n%c", ft_tolower('Q'));
	printf("\nOriginal toupper:\n%c", tolower('a'));
	printf("\nft_toupper:\n%c", ft_tolower('a'));
	printf("\nOriginal toupper:\n%c", tolower('9'));
	printf("\nft_toupper:\n%c\n", ft_tolower('9'));
	
	/***************** putchar *********************/
	printf("\nputchar\n");
	putchar('a');
	printf("\nft_putchar\n");
	ft_putchar('a');
	
	/***************** putstr ***********************/
	printf("\nft_putstr\n");
	char putstr_str[50] = "Hello everyone! Whats up";

	ft_putstr(putstr_str);

	/**************** putchar fd ********************/
	printf("\nft_putchar_fd: character l\n");
	ft_putchar_fd(putstr_str[3], 1);

	/**************** putchar fd ********************/
	printf("\nft_putstr_fd: \n");
	ft_putstr_fd(putstr_str, 1);

	/***************** ft_putnbr ********************/
	printf("\nft_putnbr\n");
	ft_putnbr(-57);
	printf("\n");
	ft_putnbr(-2147483648);

	/***************** ft_putnbr_fd ********************/
	printf("\nft_putnbr_fd\n");
	ft_putnbr_fd(-57, 2);
	printf("\n");
	ft_putnbr_fd(-2147483648, 1);

	/***************** ft_putendl ********************/
	printf("\nft_putendl\n");
	ft_putendl("Hello everyone!");
	printf("\n");
	ft_putendl("");

	/***************** ft_putendl_fd ********************/
	printf("\nft_putendl_fd\n");
	ft_putendl_fd("Hello everyone!", 1);
	printf("\n");
	ft_putendl_fd("Error output", 2);

	/***************** ft_srtclr ********************/
	printf("\nft_strclr: %s\n",putstr_str);
	printf("\n");
	ft_strclr(putstr_str);
	printf("After strclr: %s", putstr_str);

	/***************** memalloc **********************/
	printf("\n\nMemelloc\n\n");

	char *test_area = ft_memalloc(9);

	int memstest = 0;
	int fill = '1';

	while (memstest != 20)
	{
		test_area[memstest] = fill;
		fill++;
		memstest++;
	}

	printf("%s\n", test_area);

	/***************** strnew *************************/
	char *str_new_str = ft_strnew(15);

	while(*str_new_str != '\0')
	{
		printf("x");
		str_new_str++;
	}


	/****************** ft_memdel *******************/

	void *str_free;

	str_free = malloc(150);

	printf("\n%p\n", str_free);

	ft_memdel(&str_free);
	printf("\n%p\n", str_free);
	

	/****************** ft_striter *******************/


	char striter_str[500] = "Hello!";

	
	printf("\n");
	printf("%s", striter_str);
	printf("\n");

	ft_striter(striter_str, striter_test);
	printf("\n\n");


	/****************** ft_striteri *******************/

	char striteri_str[500] = "STRITERI!";

	
	printf("\n");
	printf("%s", striteri_str);
	printf("\n");

	ft_striteri(striteri_str, striteri_test);
	printf("\n\n");

	printf("%s\n", striteri_str);

	/****************** ft_strdel *******************

	char *str_des;

	str_des = malloc(20);

	printf("%p\n",str_des);
	//ft_strdel(&str_des);

	printf("%p\n",str_des);

	printf("\n");

	****************** ft_strmap ******************/

	char *old_string = "Old string";
	char *fresh_string;

	fresh_string = ft_strmap(old_string, testmap);

	printf("%s", fresh_string);

	/****************** ft_strmapi ******************/

	char *mapi_string = "Everything on sale!";
	char *mapi_result;

	mapi_result = ft_strmapi(mapi_string, testmapi);

	printf("%s", mapi_result);

	/****************** ft_strequ ******************/

	char *equ1 = "Hello";
	char *equ2 = "Hello";
	printf("\nstrequ:\n");
	if (ft_strequ(equ1, equ2))
		printf("\nSame!\n");
	else
		printf("\nNot same!\n");
	
	char *equ1_1 = "Hellu";
	char *equ2_1 = "Hello";

	if (ft_strequ(equ1_1, equ2_1))
	{
		printf("\nSame!\n");
	} else
	{
		printf("\nNot same!\n");
	}
	
	/****************** ft_strnequ ******************/

	printf("strNequ:\n");
	if (ft_strnequ(equ1, equ2, 3))
			printf("\nSame!\n");
	else
		printf("\nNot same!\n");
	if (ft_strnequ(equ1_1, equ2_1, 15))
		printf("\nSame!\n");
	else
		printf("\nNot same!\n");


	/****************** ft_strsub ******************/

	printf("strsub:\n");

	char *str_sub = "Hello everyone, this is a substring test!";
	char *result_str;

	result_str = ft_strsub(str_sub,5, 8);

	printf("%s\n", result_str);



	/***************** ft_strjoin ******************/

	char *string_1 = "Apple";
	char *string_2 = "Microsoft";
	char *string_3;

	string_3 = ft_strjoin(string_1, string_2);

	printf("%s", string_3);

	/***************** ft_strjoin ******************/

	char *trimstr = "    Moi    ";
	//char *trimstr = "     		Ruutu vi	hko     ";
	char *fresh_trimstr;

	fresh_trimstr = ft_strtrim(trimstr);

	printf("\n%s\n",fresh_trimstr);

	char **string_array = ft_strsplit("Hello****Everybody***My name is***Gekko***nen*****", '*');
	
	printf("%s", string_array[1]);

	char *tsf = ft_itoa(9154264);
	char *asd = ft_itoa(-9154264);
	printf("\n%s\n", asd);
	printf("\n%s\n", tsf);

	/*********memccpy******************/
	char testccpy[50] = "-zyxwvutsjjjjjjjjjjjjjjjjjjjjj";
	char testccpy_dst[50];

	ft_memccpy(testccpy_dst, testccpy, 's', 25);
	//printf("%s", testccpy_dst);
	//memccpy(testccpy_dst, testccpy, 's', 25);
	printf("%s", testccpy_dst);

	/**************** STRNCAT ********************************/
	char ft_strn_str_o[50] = "ABCDEF";
	char ft_strn_str_o_2[50] = "GHIJKL";

	ft_strncat(ft_strn_str_o_2, ft_strn_str_o, 2);
	printf("\n\nft_strncat:\n\n%s\n", ft_strn_str_o_2);

	char strn_str_o[50] = "ABCDEF";
	char strn_str_o_2[50] = "GHIJKL";

	strncat(strn_str_o_2, strn_str_o, 2);
	printf("\n\nOriginal strncat:\n\n%s\n", strn_str_o_2);

	printf("\n%zu", ft_strlcat(ft_strn_str_o, ft_strn_str_o_2, 25));
	printf("\n%zu", strlcat(ft_strn_str_o, ft_strn_str_o_2, 25));
	
	char *str_des;

	str_des = malloc(20);

	//printf("%p\n",str_des);
	ft_strdel(&str_des);

	//printf("%p\n",str_des);

	printf("\n");

	char	*destroy;
	char	*tronmsasd;
	if (!(destroy = (char *)malloc(sizeof(*destroy) * 15)))
		return (0);
	memset(destroy, 0, 15);
	memset(destroy, 'r', 6);
	destroy[11] = 'a';
	printf("%zu",ft_strlcat(destroy, "lorem", 15));
	write(1, "\n", 1);
	write(1, destroy, 15);

	if (!(tronmsasd = (char *)malloc(sizeof(*tronmsasd) * 15)))
	return (0);
	memset(tronmsasd, 0, 15);
	memset(tronmsasd, 'r', 6);
	tronmsasd[11] = 'a';
	printf("%zu", strlcat(tronmsasd, "lorem", 15));
	write(1, "\n", 1);
	write(1, tronmsasd, 15);

	printf("\n\nstrchr\n\n");


	printf("%i\n",ft_strcmp("test\200", "test\0"));
	printf("%i\n",strcmp("test\200", "test\0"));


	printf("%i\n",ft_strcmp("Antti", "Antti"));
	printf("%i\n",strcmp("Antti", "Antti"));

	printf("%i\n",ft_strncmp("abcdefgh", "", 0));
	printf("%i\n",strncmp("abcdefgh", "", 0));

	printf("%i\n",ft_strncmp("abcdefghij", "abcdefgxyz", 3));
	printf("%i\n",strncmp("abcdefghij", "abcdefgxyz", 3));

	printf("%i\n",ft_strncmp("abcdefgh", "abcdwxyz", 4));
	printf("%i\n",strncmp("abcdefgh", "abcdwxyz", 4));

	printf("%i\n",atoi(""));
	printf("%i\n",ft_atoi(""));

	printf("\n%i\n",ft_atoi("+-54"));
	printf("\n%i\n",atoi("+-54"));

	printf("\nft: -+54\n%i",ft_atoi("-+54"));
	printf("\natoi: -+54\n%i",atoi("-+54"));

	printf("\nft: \t\n\r\v\f  469 \n%i",ft_atoi("\t\n\r\v\f  469 \n"));
	printf("\natoi: \t\n\r\v\f  469 \n%i",atoi("\t\n\r\v\f  469 \n"));

	return(0);
}
