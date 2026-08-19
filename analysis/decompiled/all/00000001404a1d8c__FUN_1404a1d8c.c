// Function: FUN_1404a1d8c
// Addr: 1404a1d8c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1d8c(char *param_1,ulonglong param_2)

{
  char cVar1;
  char cVar4;
  int in_EAX;
  int iVar2;
  char *pcVar3;
  char unaff_BH;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  iVar2 = in_EAX + 0x3d000664;
  param_2 = param_2 & 0xffffffff;
  *unaff_RDI = *unaff_RSI;
  cVar1 = (char)iVar2 + -0x4a;
  pcVar3 = (char *)(ulonglong)CONCAT31((int3)((uint)iVar2 >> 8),cVar1);
  cVar4 = (char)((uint)iVar2 >> 8);
  *param_1 = *param_1 + cVar4;
  *pcVar3 = *pcVar3 + cVar1;
  cRam000000019c4a2237 = cRam000000019c4a2237 + unaff_BH;
  unaff_RDI[1] = unaff_RSI[1];
  cVar1 = (char)param_2 + -0x4a;
  pcVar3 = (char *)CONCAT71((int7)(param_2 >> 8),cVar1);
  *param_1 = *param_1 + (char)(param_2 >> 8);
  *pcVar3 = *pcVar3 + cVar1;
  *pcVar3 = *pcVar3 + cVar4;
  *param_1 = *param_1 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

