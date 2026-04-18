// File: openblt/Target/Source/ARMCM4_STM32G4/flash_layout.c
#ifndef FLASH_LAYOUT_C
#define FLASH_LAYOUT_C

static const tFlashSector flashLayout[] = {
    /* The first 40 KB (0x08000000 - 0x08009FFF) are reserved for the bootloader
- skipped */
    {0x0800A000, 0x01000}, // 4KB
    {0x0800B000, 0x01000}, // 4KB
    {0x0800C000, 0x01000}, // 4KB
    {0x0800D000, 0x01000}, // 4KB
    {0x0800E000, 0x01000}, // 4KB
    {0x0800F000, 0x01000}, // 4KB
    {0x08010000, 0x04000}, // 16KB
    {0x08014000, 0x04000}, // 16KB
    {0x08018000, 0x04000}, // 16KB
    {0x0801C000, 0x04000}, // 16KB
    {0x08020000, 0x04000}, // 16KB
    {0x08024000, 0x04000}, // 16KB
    {0x08028000, 0x04000}, // 16KB
    {0x0802C000, 0x04000}, // 16KB
    {0x08030000, 0x04000}, // 16KB
    {0x08034000, 0x04000}, // 16KB
    {0x08038000, 0x04000}, // 16KB
    {0x0803C000, 0x04000}, // 16KB
    {0x08040000, 0x04000}, // 16KB
    {0x08044000, 0x04000}, // 16KB
    {0x08048000, 0x04000}, // 16KB
    {0x0804C000, 0x04000}, // 16KB
    {0x08050000, 0x04000}, // 16KB
    {0x08054000, 0x04000}, // 16KB
    {0x08058000, 0x04000}, // 16KB
    {0x0805C000, 0x04000}, // 16KB
    {0x08060000, 0x04000}, // 16KB
    {0x08064000, 0x04000}, // 16KB
    {0x08068000, 0x04000}, // 16KB
    {0x0806C000, 0x04000}, // 16KB
    {0x08070000, 0x04000}, // 16KB
    {0x08074000, 0x04000}, // 16KB
    {0x08078000, 0x04000}, // 16KB
    {0x0807C000, 0x04000}  // 16KB
    /* The last 16 KB (0x08080000-0x08083FFF) are reserved for future use - not
       included */
};

#endif /* FLASH_LAYOUT_C */