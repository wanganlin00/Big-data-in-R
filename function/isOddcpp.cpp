#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
LogicalVector isOddcpp(IntegerVector x) {
    int n = x.size();
    LogicalVector result(n); // 初始化result向量，大小为n
    
    for (int i = 0; i < n; i++) {
        result[i] = (x[i] % 2 == 1); // 奇数判断条件
    }
    
    return result; // 返回逻辑向量
}
// R example

/*** R
isOddcpp(1:5)
*/