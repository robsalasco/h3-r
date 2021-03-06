% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/h3_indexing.R
\name{h3_to_geo_boundary_sf}
\alias{h3_to_geo_boundary_sf}
\title{Get the polygons of the given H3 indexes as \code{sf} object.}
\usage{
h3_to_geo_boundary_sf(h3_index)
}
\arguments{
\item{h3_index}{character vector of H3 indexes}
}
\value{
object of class \code{sf}
}
\description{
Get the polygons of the given H3 indexes as \code{sf} object.
}
\examples{
road_safety_greater_manchester[1:3, ] \%>\%
  geo_to_h3() \%>\%
  h3_to_geo_boundary_sf()
}
