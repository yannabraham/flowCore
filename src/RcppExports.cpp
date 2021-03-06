// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "flowCore_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// biexponential_transform
std::vector<double> biexponential_transform(std::vector<double> input, double A, double B, double C, double D, double F, double W, double tol, int maxIt);
RcppExport SEXP flowCore_biexponential_transform(SEXP inputSEXP, SEXP ASEXP, SEXP BSEXP, SEXP CSEXP, SEXP DSEXP, SEXP FSEXP, SEXP WSEXP, SEXP tolSEXP, SEXP maxItSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector<double> >::type input(inputSEXP);
    Rcpp::traits::input_parameter< double >::type A(ASEXP);
    Rcpp::traits::input_parameter< double >::type B(BSEXP);
    Rcpp::traits::input_parameter< double >::type C(CSEXP);
    Rcpp::traits::input_parameter< double >::type D(DSEXP);
    Rcpp::traits::input_parameter< double >::type F(FSEXP);
    Rcpp::traits::input_parameter< double >::type W(WSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type maxIt(maxItSEXP);
    __result = Rcpp::wrap(biexponential_transform(input, A, B, C, D, F, W, tol, maxIt));
    return __result;
END_RCPP
}
// convertRawBytes
std::vector<double> convertRawBytes(BYTES bytes, bool isInt, std::vector<unsigned short> colSize, unsigned short ncol, bool isBigEndian);
RcppExport SEXP flowCore_convertRawBytes(SEXP bytesSEXP, SEXP isIntSEXP, SEXP colSizeSEXP, SEXP ncolSEXP, SEXP isBigEndianSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< BYTES >::type bytes(bytesSEXP);
    Rcpp::traits::input_parameter< bool >::type isInt(isIntSEXP);
    Rcpp::traits::input_parameter< std::vector<unsigned short> >::type colSize(colSizeSEXP);
    Rcpp::traits::input_parameter< unsigned short >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< bool >::type isBigEndian(isBigEndianSEXP);
    __result = Rcpp::wrap(convertRawBytes(bytes, isInt, colSize, ncol, isBigEndian));
    return __result;
END_RCPP
}
// fcsTextParse
myPairs fcsTextParse(std::string txt, bool emptyValue);
RcppExport SEXP flowCore_fcsTextParse(SEXP txtSEXP, SEXP emptyValueSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type txt(txtSEXP);
    Rcpp::traits::input_parameter< bool >::type emptyValue(emptyValueSEXP);
    __result = Rcpp::wrap(fcsTextParse(txt, emptyValue));
    return __result;
END_RCPP
}
// hyperlog_transform
std::vector<double> hyperlog_transform(std::vector<double> input, double T, double W, double M, double A, bool isInverse);
RcppExport SEXP flowCore_hyperlog_transform(SEXP inputSEXP, SEXP TSEXP, SEXP WSEXP, SEXP MSEXP, SEXP ASEXP, SEXP isInverseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector<double> >::type input(inputSEXP);
    Rcpp::traits::input_parameter< double >::type T(TSEXP);
    Rcpp::traits::input_parameter< double >::type W(WSEXP);
    Rcpp::traits::input_parameter< double >::type M(MSEXP);
    Rcpp::traits::input_parameter< double >::type A(ASEXP);
    Rcpp::traits::input_parameter< bool >::type isInverse(isInverseSEXP);
    __result = Rcpp::wrap(hyperlog_transform(input, T, W, M, A, isInverse));
    return __result;
END_RCPP
}
// inPolygon
std::vector<bool> inPolygon(NumericMatrix data, NumericMatrix vertices);
RcppExport SEXP flowCore_inPolygon(SEXP dataSEXP, SEXP verticesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type vertices(verticesSEXP);
    __result = Rcpp::wrap(inPolygon(data, vertices));
    return __result;
END_RCPP
}
// inPolytope
std::vector<bool> inPolytope(NumericMatrix data, NumericMatrix A, NumericVector b);
RcppExport SEXP flowCore_inPolytope(SEXP dataSEXP, SEXP ASEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    Rcpp::traits::input_parameter< NumericVector >::type b(bSEXP);
    __result = Rcpp::wrap(inPolytope(data, A, b));
    return __result;
END_RCPP
}
// logicle_transform
std::vector<double> logicle_transform(std::vector<double> input, double T, double W, double M, double A, bool isInverse);
RcppExport SEXP flowCore_logicle_transform(SEXP inputSEXP, SEXP TSEXP, SEXP WSEXP, SEXP MSEXP, SEXP ASEXP, SEXP isInverseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector<double> >::type input(inputSEXP);
    Rcpp::traits::input_parameter< double >::type T(TSEXP);
    Rcpp::traits::input_parameter< double >::type W(WSEXP);
    Rcpp::traits::input_parameter< double >::type M(MSEXP);
    Rcpp::traits::input_parameter< double >::type A(ASEXP);
    Rcpp::traits::input_parameter< bool >::type isInverse(isInverseSEXP);
    __result = Rcpp::wrap(logicle_transform(input, T, W, M, A, isInverse));
    return __result;
END_RCPP
}
// sortBytes
BYTES sortBytes(BYTES bytes, std::vector<unsigned short> byte_order);
RcppExport SEXP flowCore_sortBytes(SEXP bytesSEXP, SEXP byte_orderSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< BYTES >::type bytes(bytesSEXP);
    Rcpp::traits::input_parameter< std::vector<unsigned short> >::type byte_order(byte_orderSEXP);
    __result = Rcpp::wrap(sortBytes(bytes, byte_order));
    return __result;
END_RCPP
}
// uint2double
std::vector<double> uint2double(std::vector<unsigned> input, bool isBigEndian);
RcppExport SEXP flowCore_uint2double(SEXP inputSEXP, SEXP isBigEndianSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector<unsigned> >::type input(inputSEXP);
    Rcpp::traits::input_parameter< bool >::type isBigEndian(isBigEndianSEXP);
    __result = Rcpp::wrap(uint2double(input, isBigEndian));
    return __result;
END_RCPP
}
