// Function: FUN_1404adc94
// Addr: 1404adc94
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404adc94(uint *param_1,longlong param_2,char param_3)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  undefined4 uVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  char *in_RAX;
  undefined4 *puVar9;
  char *pcVar10;
  int *piVar11;
  int *piVar12;
  longlong unaff_RSI;
  char in_CF;
  float10 in_ST0;
  float10 in_ST1;
  uint *puVar8;
  
  cVar5 = (char)in_RAX + *in_RAX + in_CF;
  puVar8 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar5);
  uVar7 = *(uint *)(param_2 * 2);
  *(int *)(ulonglong)uVar7 = (int)in_ST0;
  *puVar8 = *puVar8 & (uint)puVar8;
  puVar9 = (undefined4 *)
           CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                    CONCAT11((char)((ulonglong)in_RAX >> 8) + cVar5,cVar5));
  LOCK();
  uVar4 = *puVar9;
  *puVar9 = (int)puVar9;
  pcVar10 = (char *)CONCAT44((int)((ulonglong)in_RAX >> 0x20),uVar4);
  UNLOCK();
  pcVar2 = (char *)(unaff_RSI + (longlong)pcVar10 * 4);
  *pcVar2 = *pcVar2 + (char)(uVar7 >> 8);
  pbVar1 = (byte *)(pcVar10 + 0x54);
  bVar3 = *pbVar1;
  bVar6 = (byte)uVar4;
  *pbVar1 = *pbVar1 + bVar6;
  piVar11 = (int *)CONCAT71((int7)((ulonglong)pcVar10 >> 8),bVar6 + *pcVar10 + CARRY1(bVar3,bVar6));
  piVar12 = (int *)(ulonglong)*(uint *)((longlong)(ulonglong)uVar7 * 2);
  *piVar12 = (int)in_ST1;
  *param_1 = *param_1 + (int)param_1;
  uVar7 = (int)piVar11 + *piVar11;
  *param_1 = *param_1 | uVar7;
  *(char *)piVar12 = (char)*piVar12 + param_3;
  *(byte *)(ulonglong)uVar7 = *(byte *)(ulonglong)uVar7 ^ (byte)uVar7;
  *(byte *)param_1 = (char)*param_1 + (byte)uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

