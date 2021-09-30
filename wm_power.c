#include "libft.h"

int	wm_power(int basis, size_t exponent)
{	
	int	basis_backup;

	basis_backup = basis;
	if (power == 0)
	{
		if (basis == 0)
			return ('\0');
		else if (basis > 0)
			return (1);
		else
			return (-1);
	}
	while (power > 1)
	{
		basis *= basis_backup;
		if (power > 0)
			--power;
	}
	return (basis);
}
