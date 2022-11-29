double my_pow (double c, unsingned int multiplier) {
	if (multiplier == 1)
		return c;
	return my_pow(c, multiplier) * c;
} 