{% if num_input_channels < 1 %}
//for (uint32_t i = 0; i < {{num_input_channels}}; i++) {
//div_by_scalar({{input_buffer.name}}[i],
//{{input_height}},
//{{input_width}},
//{{denominator.name}},
//{{output_buffer.name}}[i]);
//}
{% else %}
div_by_scalar({{input_buffer.name}}, {{num_input_channels}}, {{denominator.name}}, {{output_buffer.name}});
{% endif %}
