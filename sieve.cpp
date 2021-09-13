
vector<bool> is_prime;

void init(int n){
    is_prime.resize(n + 1,true);
    is_prime[0] = is_prime[1] = false;
    for(int i = 2;i*i<=n;i++){
        for(int j = i*i;j<=n;j+=i){
            is_prime[j] = false;
        }
    }
}