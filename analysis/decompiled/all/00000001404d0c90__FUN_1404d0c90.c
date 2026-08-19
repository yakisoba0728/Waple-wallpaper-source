// Function: FUN_1404d0c90
// Addr: 1404d0c90
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d0cab) overlaps instruction at (ram,0x0001404d0caa)
    */

void FUN_1404d0c90(longlong param_1,undefined2 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  uint *in_RAX;
  longlong unaff_RBX;
  undefined1 *unaff_RSI;
  longlong unaff_RDI;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  pbVar1 = (byte *)(param_1 + 0x39a44d00 + unaff_RDI);
  *pbVar1 = *pbVar1 ^ (byte)((ulonglong)in_RAX >> 8);
  pcVar2 = (char *)(unaff_RBX + 0x6e01004d + param_1);
  *pcVar2 = *pcVar2 + (char)param_2;
  *in_RAX = *in_RAX | (uint)in_RAX;
  out(*unaff_RSI,param_2);
  if (*in_RAX == 0) {
    *(char *)(unaff_RBX + 0x54) = *(char *)(unaff_RBX + 0x54) + (char)unaff_RBX;
  }
  else {
    *(char *)(param_1 + 100) = *(char *)(param_1 + 100) + (char)((ulonglong)param_1 >> 8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

