// Function: FUN_1404cc360
// Addr: 1404cc360
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404cc3a4) */

void FUN_1404cc360(char *param_1,longlong param_2,char param_3)

{
  int iVar1;
  undefined3 uVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar6;
  char *in_RAX;
  uint uVar7;
  char *pcVar8;
  byte bVar9;
  char unaff_R12B;
  byte bVar5;
  
  bVar9 = (byte)param_2;
  *in_RAX = *in_RAX + (char)in_RAX;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  uVar6 = (uint)in_RAX & 0xf425000a;
  iVar1 = CONCAT31((int3)(uVar6 >> 8),(byte)uVar6 | *(byte *)(ulonglong)uVar6) + -0x16000bc4;
  bVar5 = (byte)iVar1;
  uVar2 = (undefined3)((uint)iVar1 >> 8);
  bVar4 = bVar5 + bVar9;
  uVar6 = CONCAT31(uVar2,bVar4);
  uVar7 = (int)param_1 + *(int *)((ulonglong)(uVar6 * 2) - 0x3d7fffcc) + (uint)CARRY1(bVar5,bVar9);
  *(char *)(ulonglong)uVar7 = *(char *)(ulonglong)uVar7 + unaff_R12B;
  *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + bVar4;
  uVar6 = CONCAT31(uVar2,bVar4 + bVar9);
  pcVar8 = (char *)(ulonglong)
                   (uVar7 + *(int *)((ulonglong)(uVar6 * 2) - 0x3d7fffcc) +
                   (uint)CARRY1(bVar4,bVar9));
  *pcVar8 = *pcVar8 + param_3;
  pbVar3 = (byte *)((ulonglong)uVar6 * 2);
  *pbVar3 = *pbVar3 | bVar4 + bVar9;
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

