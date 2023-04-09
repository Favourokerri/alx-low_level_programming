#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

#define BUFF_SIZE 1024

void print_error(char *msg);
void print_elf_header_info(Elf64_Ehdr *header);

int main(int argc, char *argv[]) {
    int fd;
    Elf64_Ehdr header;
    ssize_t num_bytes_read;

    if (argc != 2) {
        print_error("Usage: elf_header elf_filename");
        exit(98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd < 0) {
        print_error("Error: could not open file");
        exit(98);
    }

    num_bytes_read = read(fd, &header, sizeof(header));
    if (num_bytes_read != sizeof(header) || header.e_ident[EI_MAG0] != ELFMAG0
        || header.e_ident[EI_MAG1] != ELFMAG1 || header.e_ident[EI_MAG2] != ELFMAG2
        || header.e_ident[EI_MAG3] != ELFMAG3) {
        print_error("Error: not an ELF file");
        exit(98);
    }

    print_elf_header_info(&header);

    if (close(fd) < 0) {
        print_error("Error: could not close file");
        exit(98);
    }

    return 0;
}
