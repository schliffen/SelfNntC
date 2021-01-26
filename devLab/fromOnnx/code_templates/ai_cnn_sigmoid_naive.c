//
// Created by ali on 20.01.2021.
//
{% if num_input_channels > 1 %}
for (uint32_t i = 0; i < {{num_input_channels}}; i++) {
sigmoid_naive({{input_buffer.name}}[i],
{{input_height}},
{{input_width}},
{{output_buffer.name}}[i]);
}
{% else %}
sigmoid_naive({{input_buffer.name}}, {{input_height}}, {{input_width}}, {{output_buffer.name}});
{% endif %}
