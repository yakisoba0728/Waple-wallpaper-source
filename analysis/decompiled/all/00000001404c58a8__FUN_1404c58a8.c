// Function: FUN_1404c58a8
// Addr: 1404c58a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c58f9) overlaps instruction at (ram,0x0001404c58f7)
    */

void FUN_1404c58a8(byte *param_1,byte *param_2,char param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  byte *in_RAX;
  uint *puVar10;
  int *piVar12;
  byte bVar13;
  byte bVar14;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  uint uVar15;
  longlong unaff_RSI;
  longlong unaff_RDI;
  char unaff_R12B;
  longlong in_FS_OFFSET;
  byte in_CF;
  char *pcVar11;
  
  bVar13 = (byte)((ulonglong)param_2 >> 8);
  *(uint *)param_1 = (*(int *)param_1 - unaff_EBX) - (uint)in_CF;
  puVar10 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX | *in_RAX);
  uVar8 = (uint)puVar10 | *puVar10;
  puVar10 = (uint *)(param_1 + (longlong)param_2);
  uVar9 = *puVar10;
  uVar15 = (uint)unaff_RSI;
  *puVar10 = *puVar10 - uVar15;
  uVar4 = *(uint *)((longlong)param_1 * 2);
  *(uint *)((longlong)param_1 * 2) = uVar4 - (uVar9 < uVar15);
  *(uint *)(param_1 + uVar8) =
       (*(int *)(param_1 + uVar8) - uVar15) - (uint)(uVar4 < (uVar9 < uVar15));
  bVar2 = *param_1;
  bVar14 = (byte)unaff_EBX;
  *param_1 = *param_1 + bVar14;
  uVar9 = uVar8 + 0x2edca0f0 + (uint)CARRY1(bVar2,bVar14);
  pcVar11 = (char *)(ulonglong)uVar9;
  cVar7 = (char)uVar9;
  pbRamfffffffffffffff8 = param_2;
  *param_2 = *param_2 + cVar7;
  *pcVar11 = *pcVar11 + cVar7;
  pcVar11[0x22002ea5] = pcVar11[0x22002ea5] + bVar14;
  pbVar5 = (byte *)(unaff_RDI + 1);
  puVar10 = (uint *)(unaff_RSI + 1);
  param_1[0x38] = param_1[0x38] + bVar13;
  *pcVar11 = *pcVar11 + cVar7;
  *pcVar11 = *pcVar11 + cVar7;
  param_1[-0x5a] = param_1[-0x5a] + (char)param_1;
  *(char *)(unaff_RSI + -0x59) = *(char *)(unaff_RSI + -0x59) + bVar14;
  param_1[0x38] = param_1[0x38] + bVar13;
  *pcVar11 = *pcVar11 + cVar7;
  *pcVar11 = *pcVar11 + cVar7;
  *param_1 = *param_1 + bVar14;
  *puVar10 = *puVar10 & uVar9;
  *pbVar5 = *pbVar5 + (char)param_1;
  pbVar1 = param_1 + 0x6f00800;
  *(int *)pbVar1 = *(int *)pbVar1 + (int)param_1;
  param_1 = param_1 + -1;
  if (param_1 != (byte *)0x0 && *(int *)pbVar1 != 0) {
    *(byte *)puVar10 = *(byte *)puVar10 >> 1;
    *pcVar11 = *pcVar11 + (char)param_2;
  }
  *param_2 = *param_2 << 1 | (char)*param_2 < '\0';
  *pcVar11 = '\0';
  *pcVar11 = *pcVar11 + (char)param_2;
  piVar12 = (int *)(ulonglong)uVar9;
  *param_1 = *param_1 + (char)(uVar9 >> 8);
  *piVar12 = *piVar12 - (int)param_1;
  *param_1 = *param_1 + (char)((ulonglong)param_1 >> 8);
  if (*param_1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar2 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar14;
  LOCK();
  cVar3 = *(char *)(in_FS_OFFSET + (longlong)piVar12);
  *(char *)(in_FS_OFFSET + (longlong)piVar12) = cVar7;
  UNLOCK();
  uVar4 = CONCAT31((int3)(uVar9 >> 8),cVar3 + 'T' + CARRY1(bVar2,bVar14));
  LOCK();
  uVar9 = *(uint *)(ulonglong)uVar4;
  *(uint *)(ulonglong)uVar4 = uVar4;
  pcVar11 = (char *)(ulonglong)uVar9;
  UNLOCK();
  pcVar11[(longlong)param_1 * 4] = pcVar11[(longlong)param_1 * 4] | bVar13;
  pcVar11[-0x5a] = pcVar11[-0x5a] + bVar13;
  *param_2 = *param_2 + (char)uVar9;
  *pcVar11 = *pcVar11 + bVar14;
  pbVar1 = pbRamfffffffffffffff8;
  *param_1 = *param_1 + unaff_R12B;
  *pbVar1 = *pbVar1 + (char)pbVar1;
  pbVar1[-0x5a] = pbVar1[-0x5a] + bVar13;
  *param_2 = *param_2 + (char)pbVar1;
  *pbVar1 = *pbVar1 + bVar14;
  uVar6 = uRam0000000000000000;
  *param_1 = *param_1 + param_3;
  bVar2 = (byte)uRam0000000144b06437;
  *(char *)CONCAT44(unaff_0000001c,unaff_EBX) =
       *(char *)CONCAT44(unaff_0000001c,unaff_EBX) + (char)param_1;
  *(char *)CONCAT44(unaff_0000001c,unaff_EBX) =
       *(char *)CONCAT44(unaff_0000001c,unaff_EBX) + (char)param_1;
  *param_1 = *param_1 + (((byte)uVar6 | bVar2) ^ 2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

