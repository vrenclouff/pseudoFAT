#ifndef _FAT_RW_H
#define _FAT_RW_H

#include "pseudo_fat.h"

void read_fat(char *file_name, struct boot_record *boot_record, struct root_dir *root_dir, struct fat_table *fat_table, struct cluster *cluster);
void write_fat(char *file_name, struct boot_record *boot_record, struct root_dir *root_dir, struct fat_table *fat_table, struct cluster *cluster);
void free_fat(struct boot_record *boot_record, struct root_dir *root_dir, struct fat_table *fat_table, struct cluster *cluster);


#endif
