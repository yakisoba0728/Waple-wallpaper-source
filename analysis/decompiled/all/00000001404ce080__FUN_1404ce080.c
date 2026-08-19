// Function: FUN_1404ce080
// Addr: 1404ce080
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ce080(longlong param_1)

{
  longlong in_RAX;
  uint unaff_ESP;
  bool bVar1;
  float10 in_ST0;
  
  bVar1 = CARRY4(uRam000000015a3cfb87,unaff_ESP);
  uRam000000015a3cfb87 = uRam000000015a3cfb87 + unaff_ESP;
  if (param_1 == 1 || uRam000000015a3cfb87 == 0) {
    bRam0000000152bcf44f = bRam0000000152bcf44f << 1 | bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(in_RAX * 2 + 2) = (short)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

