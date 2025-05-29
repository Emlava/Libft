#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char c = 'I';
	const char *s = "want";
	int d = 1345;
	void *p = &d;
	unsigned int u = UINT_MAX;
	unsigned int x = 465346;

	// ***** Test 1: csdiu%, no flags ***** //
	printf("\n\n// ***** Test 1: csdiu%%, no flags ***** //\n\n");

	printf("%d characters printed\n\n",
		ft_printf("You know %c don't %s $%d, %c %s $%u, that's 100%%\n", c, s, d, c, s, u));
	
	printf("%d characters printed\n\n",
		printf("You know %c don't %s $%d, %c %s $%u, that's 100%%\n", c, s, d, c, s, u));
	
	// ***** Test 2: di, flags ***** //
	printf("\n// ***** Test 2: di, flags ***** //\n\n");

	printf("%d characters printed\n\n", ft_printf("|%i|% i|%+i|% +i|%+ i|\n", d, d, d, d, d));

	printf("%d characters printed\n\n", printf("|%i|% i|%+i|% +i|%+ i|\n", d, d, d, d, d));
	
	// ***** Test 3: xX, flags ***** //
	printf("\n// ***** Test 3: xX, flags ***** //\n\n");

	printf("%d characters printed\n\n", ft_printf("|%#x|%x|%X|%#x|%#X|\n", UINT_MAX, x, x, x, x));

	printf("%d characters printed\n\n", printf("|%#x|%x|%X|%#x|%#X|\n", UINT_MAX, x, x, x, x));

	// ***** Test 4: p ***** //
	printf("\n// ***** Test 4: p ***** //\n\n");

	printf("%d characters printed\n\n", ft_printf("This is the address: %p\n", p));

	printf("%d characters printed\n\n", printf("This is the address: %p\n", p));
	
	// ***** Test 5: Random ***** // 
	printf("\n// ***** Test 5: Random ***** //\n\n");

	printf("%d characters printed\n\n", ft_printf("%  s%++#c%###p dfdf # +	%   +  dd%pp% +d %     i%+#x% + X%#x\n", s, c, p, d, p, d, d, x, x, x));

	printf("%d characters printed\n\n", printf("%  s%++#c%###p dfdf # +	%   +  dd%pp% +d %     i%+#x% + X%#x\n", s, c, p, d, p, d, d, x, x, x));

	char *empty_str = "";
	char *null_str = NULL;
	void *null_ptr = NULL;

	// ***** Test 6: Special cases ***** //
	printf("\n// ***** Test 6: Special cases ***** //\n\n");

	printf("%d characters printed\n\n", ft_printf("|%d|%i|%s|%s|%p|\n", 0, INT_MIN, empty_str, null_str, null_ptr));

	printf("%d characters printed\n\n", printf("|%d|%i|%s|%s|%p|\n", 0, INT_MIN, empty_str, null_str, null_ptr));

	// ***** Test 7: Error handling ***** //
	printf("\n// ***** Test 7: Error handling ***** //\n\n");

	printf("%d characters printed\n\n", ft_printf("  %+++c\n", c));

	printf("%d characters printed\n\n", printf("  %+++c\n", c));

	printf("%d characters printed\n\n", ft_printf(null_str));

	printf("%d characters printed\n", printf(null_str));

	return (0);
}
