#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void print_error(const char *message);
void check_elf(unsigned char *e_ident);
void print_magic(const unsigned char *e_ident);
void print_class(const unsigned char *e_ident);
void print_data(const unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(Elf64_Addr e_entry);
void close_fd(int fd);

/**
 *print_error - prints error to STDERR
 *
 *@message: error message
 *Return: NOTHING it exits with 98
 */
void print_error(const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(98);
}


/**
 * check_elf -it Checks if file is an ELF file.
 * @e_ident:pointer to an array with the ELF magic numbers.
 *
 * Description: exit code 98 if file is not an ELF file 
 *Return: NOthing
 */
void check_elf(unsigned char *e_ident)
{
	if (e_ident[EI_MAG0] != ELFMAG0 ||
	    e_ident[EI_MAG1] != ELFMAG1 ||
	    e_ident[EI_MAG2] != ELFMAG2 ||
	    e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("Not an ELF file");
	}
}
/**
 * print_magic -it Prints the magic numbers of an ELF header.
 *
 * @e_ident:pointer to an array with the ELF magic numbers
 *Return: NOthing
 */
void print_magic(const unsigned char *e_ident)
{
	int i;

	printf("  Magic:                    ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", e_ident[i]);
	}
	printf("\n");
}

/**
 *print_class - Prints class of an ELF header.
 *
 *@e_ident: A pointer to an array with the ELF class
 *Return: NOthing
 */
void print_class(const unsigned char *e_ident)
{
	printf("  Class:                            ");
	switch (e_ident[EI_CLASS])
	{
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("Invalid class\n");
	}
}
/**
 * print_data - prints the data of an ELF header
 *
 * @e_ident: A pointer to an array with the ELF class.
 *Return: NOthing
 */
void print_data(const unsigned char *e_ident)
{
	printf("  Data: ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATA2LSB:
		printf("2's complement, little-endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big-endian\n");
		break;
	default:
		printf("Invalid data format\n");
	}
}
/**
 * print_version - prints the version of an ELF header.
 *
 * @e_ident: A pointer to an array with the ELF version.
 *Return: NOthing
 */

void print_version(unsigned char *e_ident)
{
	printf("  Version:              ");

	switch (e_ident[EI_VERSION])
	{
	case EV_NONE:
		printf("0 (Invalid version)\n");
		break;
	case EV_CURRENT:
		printf("1 (Current version)\n");
		break;
	default:
		printf("%d (Unknown version)\n", e_ident[EI_VERSION]);
	}
}
/**
 * print_osabi - prints the OSABI of an ELF header.
 *
 * @e_ident: A pointer to an array wirh the ELF version.
 *Return: NOthing
 */
void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:           ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV:
		printf("UNIX System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("Sun Solaris\n");
		break;
	case ELFOSABI_AIX:
		printf("AIX\n");
		break;
	case ELFOSABI_IRIX:
		printf("IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("Tru64\n");
		break;
	case ELFOSABI_MODESTO:
		printf("Novell Modesto\n");
		break;
	case ELFOSABI_OPENBSD:
		printf("OpenBSD\n");
		break;
	default:
		printf("Unknown (0x%x)\n", e_ident[EI_OSABI]);
	}
}

/**
 * print_abi - prints the ABI version of an ELF header.
 *
 * @e_ident: A pointer to an array with the ELF ABI version.
 *Return: NOthing
 */
void print_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
}

/**
 * print_type - prints the type of an ELF header
 *
 * @e_type: ELF type.
 * @e_ident: A pointer to an array with the ELF class.
 *Return: NOthing
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * print_entry - prints Entry point of an ELF header
 *
 * @e_entry: address of the ELF entry point.
 *Return: NOthing
 */
void print_entry(Elf64_Addr e_entry)
{
	printf("  Entry point address:              0x%lx\n", (unsigned long)e_entry);
}


/**
 * close_fd - Close the ELF file.
 * @fd:file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed - exit code 98.
 *Return: NOthing
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		print_error("Can't close fd");
	}
}

/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @argc: The number of arguments in argv
 * @argv: An array of pointers to string arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int o;
	ssize_t r;
	Elf64_Ehdr *header;

	if (argc != 2)
	{
		print_error("Usage: elf_parser <filename>");
	}

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		print_error("Can't read file");
	}

	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		print_error("Memory allocation error");
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		print_error("File read error");
	}
	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry);

	free(header);
	close_fd(o);
	return (0);
}
