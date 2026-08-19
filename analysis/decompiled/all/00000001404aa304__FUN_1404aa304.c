// Function: FUN_1404aa304
// Addr: 1404aa304
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa304(char *param_1,int param_2)

{
  char cVar3;
  uint uVar1;
  char *pcVar2;
  uint *unaff_RBX;
  int *unaff_RSI;
  byte *unaff_RDI;
  
  uVar1 = uRame1e000000021004a | 0xde1e400;
  *(char *)((ulonglong)uVar1 + 0x10049e1) =
       *(char *)((ulonglong)uVar1 + 0x10049e1) + (char)uRame1e000000021004a;
  *unaff_RBX = *unaff_RBX & (uint)param_1;
  cVar3 = (char)(uVar1 >> 8);
  *param_1 = *param_1 + cVar3;
  pcVar2 = (char *)((ulonglong)uVar1 ^ 0x1f);
  *param_1 = *param_1 + cVar3;
  *unaff_RSI = *unaff_RSI + param_2;
  cRam00000001522ab719 = cRam00000001522ab719 + (char)param_2;
  *unaff_RDI = *unaff_RDI >> 1 | *unaff_RDI << 7;
  *pcVar2 = *pcVar2 + (char)pcVar2;
  *unaff_RBX = *unaff_RBX + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

