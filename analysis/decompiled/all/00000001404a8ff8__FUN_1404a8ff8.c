// Function: FUN_1404a8ff8
// Addr: 1404a8ff8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8ff8(longlong param_1,longlong param_2)

{
  char *pcVar1;
  byte *pbVar2;
  int *piVar3;
  byte bVar4;
  uint uVar5;
  char cVar7;
  char *in_RAX;
  undefined7 uVar8;
  uint *puVar6;
  char *pcVar9;
  char cVar10;
  longlong unaff_RBX;
  longlong unaff_RSI;
  byte *unaff_RDI;
  char cStack_1;
  
  cVar10 = (char)((ulonglong)param_2 >> 8);
  cVar7 = (char)((ulonglong)in_RAX >> 8);
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + cVar7;
  *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + (char)param_2;
  *(char *)(unaff_RSI + param_1) = *(char *)(unaff_RSI + param_1) + cVar10;
  *in_RAX = *in_RAX + cVar10;
  uVar8 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar4 = (char)in_RAX - 0xc;
  *(char *)(unaff_RBX + 0x2c) = *(char *)(unaff_RBX + 0x2c) + cVar7;
  pbVar2 = (byte *)(unaff_RSI + 0x1401004a);
  *pbVar2 = *pbVar2 >> 1 | *pbVar2 << 7;
  puVar6 = (uint *)CONCAT71(uVar8,(bVar4 | *(byte *)CONCAT71(uVar8,bVar4)) + 1);
  *puVar6 = *puVar6 & (uint)puVar6;
  uVar5 = (uint)puVar6 | 0x9e00bf0;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  cVar7 = *(char *)(ulonglong)uVar5;
  piVar3 = (int *)((char *)(ulonglong)uVar5 + 0x8620c00);
  *piVar3 = *piVar3 + (int)param_1;
  pcVar9 = (char *)(param_1 + -1);
  if (pcVar9 == (char *)0x0 || *piVar3 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar9 = *pcVar9 + (char)(uVar5 >> 8);
  pcVar9[(longlong)register0x00000020] = pcVar9[(longlong)register0x00000020] + cVar10 + cVar7;
  pcVar1 = (char *)((ulonglong)(uVar5 + 0x74050002) + 0x34);
  *pcVar1 = *pcVar1 + (char)pcVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

