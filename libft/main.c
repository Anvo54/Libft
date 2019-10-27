#include "libft.h"
#include <stdio.h>

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

	/**************** STRNCAT ********************************/
	char ft_strn_str_o[12] = "Let's twist";
	char ft_strn_str_o_2[8] = "again ";

	ft_strncat(ft_strn_str_o_2, ft_strn_str_o, 3);
	printf("\n\nft_strncat:\n\n%s\n", ft_strn_str_o_2);

	char strn_str_o[12] = "Let's twist";
	char strn_str_o_2[8] = " again";

	//strncat(strn_str_o_2, strn_str_o, 3);
	//printf("\n\nOriginal strncat:\n\n%s\n", strn_str_o_2);



	/**************** STRLCAT *******************************/

	char strlcat_str[50] = "How does this work";
	char strlcat_str_1[11] = " and this?";

	strlcat(strlcat_str, strlcat_str_1, 29);

	printf("strlcat:\n%s\n",strlcat_str);


	char ft_strlcat_str[50] = "How does this work";
	char ft_strlcat_str_1[11] = " and this?";


	ft_strlcat(ft_strlcat_str, ft_strlcat_str_1, 29);

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

	return(0);
}
