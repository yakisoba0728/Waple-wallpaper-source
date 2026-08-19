// Function: FUN_1404ba9f0
// Addr: 1404ba9f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba9f0(char *param_1)

{
  char *pcVar1;
  int iVar2;
  ulonglong uVar3;
  byte *pbVar4;
  char cVar5;
  uint uVar6;
  char cVar8;
  byte bVar9;
  ushort *in_RAX;
  longlong unaff_RSI;
  uint *puVar7;
  
  iVar2 = (uint)(ushort)in_RAX * (uint)*in_RAX;
  cVar5 = (char)iVar2;
  cVar8 = (char)((uint)iVar2 >> 8) + cVar5;
  puVar7 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar8,cVar5));
  *param_1 = *param_1 + cVar8;
  *(char *)puVar7 = (char)*puVar7 + cVar5;
  *(char *)((longlong)puVar7 + 0x540020f6) =
       *(char *)((longlong)puVar7 + 0x540020f6) + (char)((uint)iVar2 >> 0x18);
  uVar3 = ((ulonglong)puVar7 & 0xffffffff) * (ulonglong)*puVar7;
  pbVar4 = (byte *)(uVar3 >> 0x20);
  pcVar1 = (char *)((longlong)(uVar3 & 0xffffffff) + unaff_RSI * 8 + 0x8010049);
  *pcVar1 = *pcVar1 + (char)param_1;
  uVar6 = (int)uVar3 + *(int *)(uVar3 & 0xffffffff);
  bVar9 = (byte)(uVar6 >> 8);
  pbVar4[4] = pbVar4[4] | bVar9;
  *pbVar4 = *pbVar4 << 1 | (char)*pbVar4 < '\0';
  *(byte *)(ulonglong)uVar6 = *(byte *)(ulonglong)uVar6 ^ (byte)uVar6;
  *param_1 = *param_1 + bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

