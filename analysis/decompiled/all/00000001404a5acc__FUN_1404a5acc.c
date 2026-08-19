// Function: FUN_1404a5acc
// Addr: 1404a5acc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5acc(uint *param_1,char *param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  int *piVar3;
  byte bVar4;
  int in_EAX;
  ulonglong uVar5;
  undefined7 uVar8;
  uint *puVar7;
  char cVar9;
  char unaff_BL;
  undefined8 *puVar10;
  longlong unaff_RSI;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  byte *pbVar6;
  
  *param_1 = *param_1 & (uint)&stack0x00000000;
  puVar10 = (undefined8 *)(ulonglong)(((uint)&stack0x00000000 & (uint)unaff_RSI) - (int)param_2);
  uVar5 = (ulonglong)(in_EAX + 0x6c41400U);
  *unaff_RDI = *unaff_RDI + (char)param_1;
  if (*unaff_RDI != '\0') {
    *param_2 = *param_2 + (char)param_1;
    uVar5 = (ulonglong)((in_EAX + 0x6c41400U | *(uint *)(in_FS_OFFSET + uVar5)) + 0x40000a54);
  }
  pcVar1 = (char *)(unaff_RSI + 8 + (longlong)param_1 * 4);
  *pcVar1 = *pcVar1 + unaff_BL;
  uVar8 = (undefined7)(uVar5 >> 8);
  cVar9 = (char)((ulonglong)param_2 >> 8);
  bVar4 = (char)uVar5 + cVar9;
  pbVar6 = (byte *)CONCAT71(uVar8,bVar4);
  *(char *)*puVar10 = *(char *)*puVar10 + (char)(puVar10 + 1);
  *pbVar6 = *pbVar6 + bVar4;
  pbVar6[-0x72] = pbVar6[-0x72] + bVar4;
  *pbVar6 = *pbVar6 | bVar4;
  puVar2 = (undefined8 *)puVar10[1];
  bVar4 = bVar4 + cVar9;
  puVar7 = (uint *)CONCAT71(uVar8,bVar4);
  pcVar1 = (char *)*puVar2;
  *pcVar1 = *pcVar1 + bVar4;
  *unaff_RDI = *unaff_RDI + (char)pcVar1;
  *puVar2 = puVar2 + 1;
  *puVar7 = *puVar7 | (uint)puVar7;
  sysenter();
  *(byte *)puVar7 = (byte)*puVar7 | bVar4;
  uVar5 = rdmsr((int)pcVar1);
  piVar3 = (int *)((uVar5 & 0xffffffff) * 2);
  *piVar3 = *piVar3 + (int)uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

