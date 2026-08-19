// Function: FUN_1404bc3f8
// Addr: 1404bc3f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bc3f8(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)func_0x0001188cc406();
  *puVar1 = *puVar1 | (uint)puVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

