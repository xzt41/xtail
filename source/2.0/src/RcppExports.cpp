// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// likelihood
NumericVector likelihood(NumericVector k, NumericVector alpha, NumericVector intercept, NumericVector sf, NumericVector betas, NumericVector cond);
RcppExport SEXP xtail_likelihood(SEXP kSEXP, SEXP alphaSEXP, SEXP interceptSEXP, SEXP sfSEXP, SEXP betasSEXP, SEXP condSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type intercept(interceptSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sf(sfSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type betas(betasSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type cond(condSEXP);
    __result = Rcpp::wrap(likelihood(k, alpha, intercept, sf, betas, cond));
    return __result;
END_RCPP
}
// fastSum
Rcpp::NumericVector fastSum(Rcpp::NumericVector x1, Rcpp::NumericVector y1);
RcppExport SEXP xtail_fastSum(SEXP x1SEXP, SEXP y1SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x1(x1SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type y1(y1SEXP);
    __result = Rcpp::wrap(fastSum(x1, y1));
    return __result;
END_RCPP
}
// boundFC
NumericVector boundFC(NumericVector k1, NumericVector alpha1, NumericVector intercept1, NumericVector sf1, NumericVector FC1, NumericVector cond1, NumericVector k2, NumericVector alpha2, NumericVector intercept2, NumericVector sf2, NumericVector FC2, NumericVector cond2, NumericVector stepFC, NumericVector toleration);
RcppExport SEXP xtail_boundFC(SEXP k1SEXP, SEXP alpha1SEXP, SEXP intercept1SEXP, SEXP sf1SEXP, SEXP FC1SEXP, SEXP cond1SEXP, SEXP k2SEXP, SEXP alpha2SEXP, SEXP intercept2SEXP, SEXP sf2SEXP, SEXP FC2SEXP, SEXP cond2SEXP, SEXP stepFCSEXP, SEXP tolerationSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type k1(k1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type alpha1(alpha1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type intercept1(intercept1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sf1(sf1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type FC1(FC1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type cond1(cond1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type k2(k2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type alpha2(alpha2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type intercept2(intercept2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sf2(sf2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type FC2(FC2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type cond2(cond2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type stepFC(stepFCSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type toleration(tolerationSEXP);
    __result = Rcpp::wrap(boundFC(k1, alpha1, intercept1, sf1, FC1, cond1, k2, alpha2, intercept2, sf2, FC2, cond2, stepFC, toleration));
    return __result;
END_RCPP
}
// posterior
NumericVector posterior(NumericVector k, NumericVector alpha, NumericVector intercept, NumericVector sf, NumericVector priorSigma, NumericVector betas, NumericVector cond);
RcppExport SEXP xtail_posterior(SEXP kSEXP, SEXP alphaSEXP, SEXP interceptSEXP, SEXP sfSEXP, SEXP priorSigmaSEXP, SEXP betasSEXP, SEXP condSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type intercept(interceptSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sf(sfSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type priorSigma(priorSigmaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type betas(betasSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type cond(condSEXP);
    __result = Rcpp::wrap(posterior(k, alpha, intercept, sf, priorSigma, betas, cond));
    return __result;
END_RCPP
}
// overlapCoef
NumericVector overlapCoef(NumericVector a, NumericVector b);
RcppExport SEXP xtail_overlapCoef(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type b(bSEXP);
    __result = Rcpp::wrap(overlapCoef(a, b));
    return __result;
END_RCPP
}
// xtail_test
NumericVector xtail_test(NumericVector k1, NumericVector k2, NumericVector ints1, NumericVector ints2, NumericVector log2FC_1, NumericVector log2FC_2, NumericVector priorSigma1, NumericVector priorSigma2, NumericVector disper1, NumericVector disper2, NumericVector sf1, NumericVector sf2, NumericVector cond1, NumericVector cond2, IntegerVector bin);
RcppExport SEXP xtail_xtail_test(SEXP k1SEXP, SEXP k2SEXP, SEXP ints1SEXP, SEXP ints2SEXP, SEXP log2FC_1SEXP, SEXP log2FC_2SEXP, SEXP priorSigma1SEXP, SEXP priorSigma2SEXP, SEXP disper1SEXP, SEXP disper2SEXP, SEXP sf1SEXP, SEXP sf2SEXP, SEXP cond1SEXP, SEXP cond2SEXP, SEXP binSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type k1(k1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type k2(k2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ints1(ints1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ints2(ints2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type log2FC_1(log2FC_1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type log2FC_2(log2FC_2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type priorSigma1(priorSigma1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type priorSigma2(priorSigma2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type disper1(disper1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type disper2(disper2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sf1(sf1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sf2(sf2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type cond1(cond1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type cond2(cond2SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type bin(binSEXP);
    __result = Rcpp::wrap(xtail_test(k1, k2, ints1, ints2, log2FC_1, log2FC_2, priorSigma1, priorSigma2, disper1, disper2, sf1, sf2, cond1, cond2, bin));
    return __result;
END_RCPP
}