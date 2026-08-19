// Function: FUN_1404a87c8
// Addr: 1404a87c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a87c8(char *param_1,char *param_2)

{
  uint uVar1;
  char cVar3;
  uint *in_RAX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  char *pcVar2;
  
  *(byte *)(unaff_RBP + -0x72ddfff5) = *(byte *)(unaff_RBP + -0x72ddfff5) & (byte)param_1;
  uVar1 = (uint)in_RAX | *in_RAX;
  pcVar2 = (char *)(ulonglong)uVar1;
  cVar3 = (char)(uVar1 >> 8);
  *param_1 = *param_1 + cVar3;
  *pcVar2 = *pcVar2 + (char)uVar1;
  *pcVar2 = *pcVar2 + cVar3;
  *param_2 = *param_2 + cVar3;
  *(char *)(unaff_RDI + 0x21004a) = *(char *)(unaff_RDI + 0x21004a) + (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

