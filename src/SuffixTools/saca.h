//-----------------------------------------------
// Copyright 2009 Wellcome Trust Sanger Institute
// Written by Jared Simpson (js18@sanger.ac.uk)
// Released under the GPL license
//-----------------------------------------------
//
// saca - suffix array construction algorithms
//
#ifndef SACA_H
#include "SuffixArray.h"
#include "ReadTable.h"

// Implementation of the induced copying algorithm 
// as described by Nong, Zhang, Chan (2008)
// Modified by JTS to handle multiple strings
void saca_induced_copying(SuffixArray* pSA, const ReadTable* pRT);

void induceSAl(const ReadTable* pRT, SuffixArray* pSA, char** p_array, int* counts, int* buckets, size_t n, int K, bool end);
void induceSAs(const ReadTable* pRT, SuffixArray* pSA, char** p_array, int* counts, int* buckets, size_t n, int K, bool end);

void countBuckets(const ReadTable* pRT, int* buckets, int K);
void getBuckets(int* counts, int* buckets, int K, bool end);
inline void setBit(char** p_array, size_t str_idx, size_t bit_idx, bool b);
inline bool getBit(char** p_array, size_t str_idx, size_t bit_idx);
void printType(const ReadTable* pRT, char** p_array, size_t str_idx);


#endif