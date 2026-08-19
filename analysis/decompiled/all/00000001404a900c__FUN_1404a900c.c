// Function: FUN_1404a900c
// Addr: 1404a900c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a900c(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  byte *in_RAX;
  uint *puVar6;
  char *pcVar7;
  longlong unaff_RSI;
  byte *unaff_RDI;
  char cStack_1;
  
  pbVar2 = (byte *)(unaff_RSI + 0x1401004a);
  *pbVar2 = *pbVar2 >> 1 | *pbVar2 << 7;
  puVar6 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),((byte)in_RAX | *in_RAX) + 1);
  *puVar6 = *puVar6 & (uint)puVar6;
  uVar5 = (uint)puVar6 | 0x9e00bf0;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  cVar4 = *(char *)(ulonglong)uVar5;
  piVar3 = (int *)((char *)(ulonglong)uVar5 + 0x8620c00);
  *piVar3 = *piVar3 + (int)param_1;
  pcVar7 = (char *)(param_1 + -1);
  if (pcVar7 == (char *)0x0 || *piVar3 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar7 = *pcVar7 + (char)(uVar5 >> 8);
  pcVar7[(longlong)register0x00000020] =
       pcVar7[(longlong)register0x00000020] + (char)((ulonglong)param_2 >> 8) + cVar4;
  pcVar1 = (char *)((ulonglong)(uVar5 + 0x74050002) + 0x34);
  *pcVar1 = *pcVar1 + (char)pcVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

