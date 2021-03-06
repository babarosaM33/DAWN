#ifndef __DAWN_MAC_UTILS_H
#define __DAWN_MAC_UTILS_H

#include <stdint.h>

#define MAC2STR(a) (a)[0], (a)[1], (a)[2], (a)[3], (a)[4], (a)[5]
#define STR2MAC(a) &(a)[0], &(a)[1], &(a)[2], &(a)[3], &(a)[4], &(a)[5]

#define MACSTR "%02X:%02X:%02X:%02X:%02X:%02X"
#define MACSTRLOWER "%02x:%02x:%02x:%02x:%02x:%02x"

#ifndef ETH_ALEN
#define ETH_ALEN 6
#endif

/**
 * Convert mac adress string to mac adress.
 * @param txt
 * @param addr
 * @return
 */
int hwaddr_aton(const char* txt, uint8_t* addr);

/**
 * Convert mac to use big characters.
 * @param in
 * @param out
 * @return
 */
int convert_mac(char* in, char* out);

/**
 * Write mac to a file.
 * @param path
 * @param addr
 */
void write_mac_to_file(char* path, uint8_t addr[]);

int mac_is_equal(const uint8_t addr1[], const uint8_t addr2[]);

int mac_is_greater(const uint8_t addr1[], const uint8_t addr2[]);

#endif
