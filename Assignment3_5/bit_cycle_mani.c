
#include <stdio.h>

/*
 ============================================================================
 Name        : bit_cycle_mani.c
 Author      : N. Geijtenbeek
 ============================================================================
 */

void bitprint(char);
int get_bit(char, int);
void verschuif_cyclisch (unsigned char*, int);

int main(void) {
	
	char ch;
	
	int index, cycle_amount;
	int output_bit;
	unsigned char output_cycle;
	
	printf("Kies een getal (1-10):");
	scanf("%d", &ch);
	output_cycle = ch;
	
	printf("Gekozen getal in binair: ");
	bitprint(ch);

	printf("Kies een indexnummer om te gebruiken(0-7): ");
	scanf("%d", &index);
	
	output_bit = get_bit(ch, index);
	printf("Index: %d komt overeen met een: %d\n", index, output_bit);

	printf("Geef een getal om de bit te verschuiven: (< -1 is links > 1 is rechts): ");
	scanf("%d", &cycle_amount);
	
	verschuif_cyclisch(&output_cycle, cycle_amount);
	printf("Nieuw getal: ");
	bitprint(output_cycle);
}

void bitprint(char ch) {
    for(int i = 0; i < 8; i++) {
	if(ch & 0x80) {
	    putchar('1');
	} else {
	    putchar('0');
	}
	ch <<= 1;
    }
    putchar('\n');
}

int get_bit(char ch, int n) {
	int bit_output;
	
	for (int i = 0; i <= n; i++) {
		if (ch & 0x80) {
			bit_output = 1;
		}
		else {
			bit_output = 0;
		}
		ch <<= 1;
	}
	return bit_output;
}

void verschuif_cyclisch(unsigned char* ch, int n)
{
    unsigned char first_bit = 0x80; // 1000 0000
    unsigned char last_bit = 0x01;  // 0000 0001

    if(n >= 0) {
	for(int c = 0; c < n; c++) {
	    if(first_bit & *ch) {

		*ch <<= 1;
		*ch += 1;
	    } else {
		*ch <<= 1;
	    }
	}
    } else {
	for(int c = 0; c < -n; c++) {
	    if(last_bit & *ch) {
		*ch >>= 1;
		*ch += 123;
	    } else {
		*ch >>= 1;
	    }
	}
    }
}