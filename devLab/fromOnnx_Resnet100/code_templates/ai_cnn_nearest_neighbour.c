//
// Created by ali on 15.01.2021.
//
{% if num_input_channels > 1 %}
for (uint32_t i = 0; i < {{num_input_channels}}; i++) {
upsampling_2D_nearest_neighbour({{input_buffer.name}}[i],
{{target_height}},
{{target_width}},
{{scale}},
{{output_buffer.name}}[i]);
}
{% else %}
upsampling_2D_nearest_neighbour({{input_buffer.name}}, {{target_height}}, {{target_width}}, {{scale}}, {{output_buffer.name}});
{% endif %}

// upsampling_2D_nearest_neighbour