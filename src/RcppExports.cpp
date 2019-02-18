// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_h3_to_parent
CharacterVector rcpp_h3_to_parent(String h3s, int res);
RcppExport SEXP _h3_rcpp_h3_to_parent(SEXP h3sSEXP, SEXP resSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type h3s(h3sSEXP);
    Rcpp::traits::input_parameter< int >::type res(resSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_h3_to_parent(h3s, res));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_h3_to_children
CharacterVector rcpp_h3_to_children(String h3s, int res);
RcppExport SEXP _h3_rcpp_h3_to_children(SEXP h3sSEXP, SEXP resSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type h3s(h3sSEXP);
    Rcpp::traits::input_parameter< int >::type res(resSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_h3_to_children(h3s, res));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_geo_to_h3
CharacterVector rcpp_geo_to_h3(NumericMatrix latlng, int res);
RcppExport SEXP _h3_rcpp_geo_to_h3(SEXP latlngSEXP, SEXP resSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type latlng(latlngSEXP);
    Rcpp::traits::input_parameter< int >::type res(resSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_geo_to_h3(latlng, res));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_h3_to_geo
NumericMatrix rcpp_h3_to_geo(CharacterVector h3s);
RcppExport SEXP _h3_rcpp_h3_to_geo(SEXP h3sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type h3s(h3sSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_h3_to_geo(h3s));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_h3_to_geo_boundary
List rcpp_h3_to_geo_boundary(CharacterVector h3s);
RcppExport SEXP _h3_rcpp_h3_to_geo_boundary(SEXP h3sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type h3s(h3sSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_h3_to_geo_boundary(h3s));
    return rcpp_result_gen;
END_RCPP
}
// h3_get_resolution
NumericVector h3_get_resolution(CharacterVector h3Str);
RcppExport SEXP _h3_h3_get_resolution(SEXP h3StrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type h3Str(h3StrSEXP);
    rcpp_result_gen = Rcpp::wrap(h3_get_resolution(h3Str));
    return rcpp_result_gen;
END_RCPP
}
// h3_is_valid
LogicalVector h3_is_valid(CharacterVector h3Str);
RcppExport SEXP _h3_h3_is_valid(SEXP h3StrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type h3Str(h3StrSEXP);
    rcpp_result_gen = Rcpp::wrap(h3_is_valid(h3Str));
    return rcpp_result_gen;
END_RCPP
}
// h3_get_base_cell
NumericVector h3_get_base_cell(CharacterVector h3Str);
RcppExport SEXP _h3_h3_get_base_cell(SEXP h3StrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type h3Str(h3StrSEXP);
    rcpp_result_gen = Rcpp::wrap(h3_get_base_cell(h3Str));
    return rcpp_result_gen;
END_RCPP
}
// num_hexagons
NumericVector num_hexagons(NumericVector res);
RcppExport SEXP _h3_num_hexagons(SEXP resSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type res(resSEXP);
    rcpp_result_gen = Rcpp::wrap(num_hexagons(res));
    return rcpp_result_gen;
END_RCPP
}
// hex_area
NumericVector hex_area(NumericVector res, String unit);
RcppExport SEXP _h3_hex_area(SEXP resSEXP, SEXP unitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type res(resSEXP);
    Rcpp::traits::input_parameter< String >::type unit(unitSEXP);
    rcpp_result_gen = Rcpp::wrap(hex_area(res, unit));
    return rcpp_result_gen;
END_RCPP
}
// edge_length
NumericVector edge_length(NumericVector res, String unit);
RcppExport SEXP _h3_edge_length(SEXP resSEXP, SEXP unitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type res(resSEXP);
    Rcpp::traits::input_parameter< String >::type unit(unitSEXP);
    rcpp_result_gen = Rcpp::wrap(edge_length(res, unit));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_k_ring
CharacterVector rcpp_k_ring(String h3s, int radius);
RcppExport SEXP _h3_rcpp_k_ring(SEXP h3sSEXP, SEXP radiusSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type h3s(h3sSEXP);
    Rcpp::traits::input_parameter< int >::type radius(radiusSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_k_ring(h3s, radius));
    return rcpp_result_gen;
END_RCPP
}
// h3_distance
NumericVector h3_distance(String origin, CharacterVector destinations);
RcppExport SEXP _h3_h3_distance(SEXP originSEXP, SEXP destinationsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type origin(originSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type destinations(destinationsSEXP);
    rcpp_result_gen = Rcpp::wrap(h3_distance(origin, destinations));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_k_ring_distances
List rcpp_k_ring_distances(String h3s, int radius);
RcppExport SEXP _h3_rcpp_k_ring_distances(SEXP h3sSEXP, SEXP radiusSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type h3s(h3sSEXP);
    Rcpp::traits::input_parameter< int >::type radius(radiusSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_k_ring_distances(h3s, radius));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_h3_rcpp_h3_to_parent", (DL_FUNC) &_h3_rcpp_h3_to_parent, 2},
    {"_h3_rcpp_h3_to_children", (DL_FUNC) &_h3_rcpp_h3_to_children, 2},
    {"_h3_rcpp_geo_to_h3", (DL_FUNC) &_h3_rcpp_geo_to_h3, 2},
    {"_h3_rcpp_h3_to_geo", (DL_FUNC) &_h3_rcpp_h3_to_geo, 1},
    {"_h3_rcpp_h3_to_geo_boundary", (DL_FUNC) &_h3_rcpp_h3_to_geo_boundary, 1},
    {"_h3_h3_get_resolution", (DL_FUNC) &_h3_h3_get_resolution, 1},
    {"_h3_h3_is_valid", (DL_FUNC) &_h3_h3_is_valid, 1},
    {"_h3_h3_get_base_cell", (DL_FUNC) &_h3_h3_get_base_cell, 1},
    {"_h3_num_hexagons", (DL_FUNC) &_h3_num_hexagons, 1},
    {"_h3_hex_area", (DL_FUNC) &_h3_hex_area, 2},
    {"_h3_edge_length", (DL_FUNC) &_h3_edge_length, 2},
    {"_h3_rcpp_k_ring", (DL_FUNC) &_h3_rcpp_k_ring, 2},
    {"_h3_h3_distance", (DL_FUNC) &_h3_h3_distance, 2},
    {"_h3_rcpp_k_ring_distances", (DL_FUNC) &_h3_rcpp_k_ring_distances, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_h3(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
