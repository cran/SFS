// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// read
Rcpp::DataFrame read(SEXP data, double zero_epsilon, bool symmetric, bool identical_val);
RcppExport SEXP SFS_read(SEXP dataSEXP, SEXP zero_epsilonSEXP, SEXP symmetricSEXP, SEXP identical_valSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type data(dataSEXP);
    Rcpp::traits::input_parameter< double >::type zero_epsilon(zero_epsilonSEXP);
    Rcpp::traits::input_parameter< bool >::type symmetric(symmetricSEXP);
    Rcpp::traits::input_parameter< bool >::type identical_val(identical_valSEXP);
    rcpp_result_gen = Rcpp::wrap(read(data, zero_epsilon, symmetric, identical_val));
    return rcpp_result_gen;
END_RCPP
}
// sfs
arma::Row<int> sfs(SEXP matrix, double sfs_epsilon, bool dissimilarity, bool Robinsonian, int num_sweeps);
RcppExport SEXP SFS_sfs(SEXP matrixSEXP, SEXP sfs_epsilonSEXP, SEXP dissimilaritySEXP, SEXP RobinsonianSEXP, SEXP num_sweepsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type matrix(matrixSEXP);
    Rcpp::traits::input_parameter< double >::type sfs_epsilon(sfs_epsilonSEXP);
    Rcpp::traits::input_parameter< bool >::type dissimilarity(dissimilaritySEXP);
    Rcpp::traits::input_parameter< bool >::type Robinsonian(RobinsonianSEXP);
    Rcpp::traits::input_parameter< int >::type num_sweeps(num_sweepsSEXP);
    rcpp_result_gen = Rcpp::wrap(sfs(matrix, sfs_epsilon, dissimilarity, Robinsonian, num_sweeps));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"SFS_read", (DL_FUNC) &SFS_read, 4},
    {"SFS_sfs", (DL_FUNC) &SFS_sfs, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_SFS(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
