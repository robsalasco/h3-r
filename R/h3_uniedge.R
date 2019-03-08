#' Get all of the unidirectional edges from the given H3 index.
#' @param h3_index character scalar; H3 index
#' @example inst/examples/api-reference/get-h3-unidirectional-edges-from-hexagon.R
#' @export
get_h3_unidirectional_edges_from_hexagon <- function(h3_index) {
  rcpp_get_h3_unidirectional_edges_from_hexagon(h3_index)
}