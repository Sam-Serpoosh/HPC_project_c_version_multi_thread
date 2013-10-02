#include "similarity_calculator.h"

int main(int argc, const char * argv[]) {
	char* polymerase = "ATGGATC";
	char* sequence = "ACGTCAG";
	//char* polymerase = "GAC";
	//char* sequence = "GTC";
  initialize(polymerase, sequence);
  calculate_similarity();
  pretty_print();
	return 0;
}
