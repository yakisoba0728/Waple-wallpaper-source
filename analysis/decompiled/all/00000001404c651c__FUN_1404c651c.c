// Function: FUN_1404c651c
// Addr: 1404c651c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c651c(char *param_1)

{
  byte bVar1;
  char *in_RAX;
  char unaff_R12B;
  undefined1 in_CF;
  
  bVar1 = param_1[-0x6dd7ffd1];
  param_1[-0x6dd7ffd1] = bVar1 << 6 | (byte)(CONCAT11(in_CF,bVar1) >> 3);
  *param_1 = *param_1 + unaff_R12B;
  *in_RAX = *in_RAX + (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

