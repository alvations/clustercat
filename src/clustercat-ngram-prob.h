#ifndef INCLUDE_CLUSTERCAT_NGRAM_PROB
#define INCLUDE_CLUSTERCAT_NGRAM_PROB

float class_ngram_prob(const struct cmd_args cmd_args, const count_arrays_t count_arrays, struct_map_class *class_map[const], const sentlen_t i, const wclass_t class_i, const wclass_count_t class_i_count, wclass_t sent[const], const unsigned char ngram_order, const struct_model_metadata model_metadata, const float weights[const]);

float ngram_prob(struct_map_word *ngram_map[const], const sentlen_t i, const char * restrict word_i, const word_count_t word_i_count, const struct_model_metadata model_metadata, char * restrict sent[const], const short word_lengths[const], const unsigned char ngram_order, const float weights[const]);


#endif // INCLUDE_HEADER
