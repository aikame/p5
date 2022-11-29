double my_pow (double c, int multiplier) {
    if (multiplier > 0)
       for (int i = 1; i < multiplier; i++)
           c *= c;
    else {
	c = 1.0/c;
	for (int i = -2; i > multiplier; i--)
           c *= c;
    }
    return c;
}

double my_pow (double c, unsingned int multiplier) {
	if (multiplier == 1)
		return c;
	return my_pow(c, multiplier) * c;
}