// Function: FUN_1404a3fd8
// Addr: 1404a3fd8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3fd8(void)

{
  bRam000000014e9a3fe5 = bRam000000014e9a3fe5 >> 1 | bRam000000014e9a3fe5 << 7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

