// Function: FUN_1404a5ac4
// Addr: 1404a5ac4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5ac4(longlong param_1,char *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  byte bVar3;
  uint uVar4;
  byte *in_RAX;
  undefined7 uVar8;
  uint *puVar7;
  char *pcVar9;
  char cVar10;
  char unaff_BL;
  undefined8 *puVar11;
  longlong unaff_RSI;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  ulonglong uVar5;
  byte *pbVar6;
  
  pbVar6 = (byte *)(param_2 + 4);
  bVar3 = (byte)((ulonglong)in_RAX >> 8);
  *pbVar6 = *pbVar6 | bVar3;
  pcVar9 = (char *)(param_1 + -1);
  if (pcVar9 == (char *)0x0 || *pbVar6 == 0) {
    *in_RAX = *in_RAX ^ (byte)in_RAX;
  }
  *pcVar9 = *pcVar9 + bVar3;
  *(uint *)((longlong)in_RAX * 2) = *(uint *)((longlong)in_RAX * 2) & (uint)pcVar9;
  puVar11 = (undefined8 *)(ulonglong)(((uint)&stack0x00000000 & (uint)unaff_RSI) - (int)param_2);
  uVar4 = (int)in_RAX + 0x6c41400;
  uVar5 = (ulonglong)uVar4;
  *unaff_RDI = *unaff_RDI + (char)pcVar9;
  if (*unaff_RDI != '\0') {
    *param_2 = *param_2 + (char)pcVar9;
    uVar5 = (ulonglong)((uVar4 | *(uint *)(in_FS_OFFSET + uVar5)) + 0x40000a54);
  }
  pcVar9 = (char *)(unaff_RSI + 8 + (longlong)pcVar9 * 4);
  *pcVar9 = *pcVar9 + unaff_BL;
  uVar8 = (undefined7)(uVar5 >> 8);
  cVar10 = (char)((ulonglong)param_2 >> 8);
  bVar3 = (char)uVar5 + cVar10;
  pbVar6 = (byte *)CONCAT71(uVar8,bVar3);
  *(char *)*puVar11 = *(char *)*puVar11 + (char)(puVar11 + 1);
  *pbVar6 = *pbVar6 + bVar3;
  pbVar6[-0x72] = pbVar6[-0x72] + bVar3;
  *pbVar6 = *pbVar6 | bVar3;
  puVar1 = (undefined8 *)puVar11[1];
  bVar3 = bVar3 + cVar10;
  puVar7 = (uint *)CONCAT71(uVar8,bVar3);
  pcVar9 = (char *)*puVar1;
  *pcVar9 = *pcVar9 + bVar3;
  *unaff_RDI = *unaff_RDI + (char)pcVar9;
  *puVar1 = puVar1 + 1;
  *puVar7 = *puVar7 | (uint)puVar7;
  sysenter();
  *(byte *)puVar7 = (byte)*puVar7 | bVar3;
  uVar5 = rdmsr((int)pcVar9);
  piVar2 = (int *)((uVar5 & 0xffffffff) * 2);
  *piVar2 = *piVar2 + (int)uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

