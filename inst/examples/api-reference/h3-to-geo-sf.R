road_safety_greater_manchester[1:3, ] %>%
  geo_to_h3() %>%
  h3_to_geo_sf()
