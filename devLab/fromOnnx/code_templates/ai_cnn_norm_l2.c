{% if num_input_channels < 1 %}
//for (uint32_t i = 0; i < {{num_input_channels}}; i++) {
//norm_naive_l2({{input_buffer.name}}[i],
//{{num_input_channels}},
//{{parameter}},
//&{{output_buffer.name}});
//}
{% else %}
norm_naive_l2({{input_buffer.name}}, {{num_input_channels}},{{parameter}}, &{{output_buffer.name}});
{% endif %}
