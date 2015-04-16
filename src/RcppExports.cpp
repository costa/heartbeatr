// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// heartbeat_start
void heartbeat_start(std::string host, int port, std::string key, std::string value, int timeout, int expire);
RcppExport SEXP RedisHeartbeat_heartbeat_start(SEXP hostSEXP, SEXP portSEXP, SEXP keySEXP, SEXP valueSEXP, SEXP timeoutSEXP, SEXP expireSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type host(hostSEXP );
        Rcpp::traits::input_parameter< int >::type port(portSEXP );
        Rcpp::traits::input_parameter< std::string >::type key(keySEXP );
        Rcpp::traits::input_parameter< std::string >::type value(valueSEXP );
        Rcpp::traits::input_parameter< int >::type timeout(timeoutSEXP );
        Rcpp::traits::input_parameter< int >::type expire(expireSEXP );
        heartbeat_start(host, port, key, value, timeout, expire);
    }
    return R_NilValue;
END_RCPP
}
// heartbeat_stop
void heartbeat_stop();
RcppExport SEXP RedisHeartbeat_heartbeat_stop() {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        heartbeat_stop();
    }
    return R_NilValue;
END_RCPP
}
// heartbeat_status
bool heartbeat_status();
RcppExport SEXP RedisHeartbeat_heartbeat_status() {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        bool __result = heartbeat_status();
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// heartbeat_key
std::string heartbeat_key();
RcppExport SEXP RedisHeartbeat_heartbeat_key() {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        std::string __result = heartbeat_key();
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
