{% if num_input_channels > 1 %}
for (uint32_t i = 0; i < {{num_input_channels}}; i++) {
    relu6_naive({{input_buffer.name}}[i],
               {{input_height}},
               {{input_width}},
               {{output_buffer.name}}[i]);
}
{% else %}
relu6_naive({{input_buffer.name}}, {{input_height}}, {{input_width}}, {{output_buffer.name}});
{% endif %}
