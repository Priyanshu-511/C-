int gcd(int m, int n) {
    while (m%n !=0) {
        int rem = m%n;
        m=n;
        n=rem;
    }

    return n;
}