// Function: FUN_1404d5794
// Addr: 1404d5794
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5794(uint *param_1)

{
  byte *in_RAX;
  uint *puVar1;
  
  puVar1 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),((byte)in_RAX ^ *in_RAX) + 0x98);
  *param_1 = *param_1 & ((uint)puVar1 ^ *puVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

