// Function: FUN_1404b3e14
// Addr: 1404b3e14
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3e14(char param_1,ulonglong param_2)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint in_EAX;
  byte *pbVar4;
  char *pcVar5;
  longlong unaff_RBP;
  char *unaff_RSI;
  uint *unaff_RDI;
  
  uVar2 = *unaff_RDI;
  pbVar4 = (byte *)(param_2 & 0xffffffff);
  bVar1 = *pbVar4;
  bVar3 = *pbVar4 - (byte)pbVar4;
  *pbVar4 = bVar3 - (in_EAX < uVar2);
  pcVar5 = (char *)(unaff_RBP + 8U & 0xffffffff);
  *pcVar5 = (*pcVar5 - (char)pcVar5) - (bVar1 < (byte)pbVar4 || bVar3 < (in_EAX < uVar2));
  *(undefined **)((param_2 & 0xffffffff) - 8) = &UNK_1404b3e21;
  pcVar5 = (char *)func_0x0001614b895d(param_1,in_EAX);
  *unaff_RSI = *unaff_RSI + param_1;
  *pcVar5 = *pcVar5 + (char)pcVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

