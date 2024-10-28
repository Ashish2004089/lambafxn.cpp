auto ok = [&](int x)
 {

    int cuts=0;
    function<int(int,int)>dfs = [&](){
     

    };
    dfs();  //function call of made function

    return cuts;

 };

function<int(int)> fib = [&](int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
};
