double my_pow (double c, unsingned int multiplier) {
    for (int i = 0; i < multiplier; i++)
        c *= c;
    return c;
} 