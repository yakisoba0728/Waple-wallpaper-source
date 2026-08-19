// Function: FUN_14049f25c
// Addr: 14049f25c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f25c(uint *param_1,longlong param_2)

{
  byte *pbVar1;
  int *piVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  byte bVar8;
  uint *in_RAX;
  char *pcVar7;
  byte bVar9;
  char cVar10;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RSI;
  longlong in_FS_OFFSET;
  bool bVar11;
  
  cVar10 = (char)((ulonglong)param_2 >> 8);
  bVar9 = (byte)param_2;
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX | (byte)in_RAX;
  pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (longlong)param_1);
  *pbVar1 = *pbVar1 + cVar10;
  pbVar1 = (byte *)(param_2 + (longlong)param_1);
  bVar8 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar9;
  pcVar7 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 1);
  *pcVar7 = *pcVar7 + (char)((ulonglong)in_RAX >> 8) + cVar10 + (byte)in_RAX + CARRY1(bVar8,bVar9);
  *unaff_RSI = *unaff_RSI + unaff_BH;
  uVar4 = *param_1;
  pcVar7 = (char *)(ulonglong)uVar4;
  pbVar1 = (byte *)((longlong)param_1 + (longlong)unaff_RSI * 8 + 0x49);
  *pbVar1 = *pbVar1 + unaff_BL;
  *(byte *)param_1 = (byte)*param_1 + (char)(uVar4 >> 8);
  *pcVar7 = *pcVar7 + (char)uVar4;
  *pcVar7 = *pcVar7 + bVar9;
  *unaff_RSI = *unaff_RSI + unaff_BH;
  uVar4 = *param_1;
  pbVar1 = (byte *)((longlong)param_1 + (longlong)unaff_RSI * 8 + 0x49);
  *pbVar1 = *pbVar1 + unaff_BL;
  bVar8 = (byte)(uVar4 >> 8);
  bVar11 = CARRY1((byte)*param_1,bVar8);
  *(byte *)param_1 = (byte)*param_1 + bVar8;
  bVar8 = *(byte *)((ulonglong)uVar4 * 2);
  bVar5 = (byte)uVar4 + *(byte *)((ulonglong)uVar4 * 2);
  bVar3 = *(byte *)(param_2 + (longlong)param_1);
  uVar6 = CONCAT31((int3)(uVar4 >> 8),bVar5 + bVar11) + 0xd0000964;
  piVar2 = (int *)(in_FS_OFFSET + (ulonglong)uVar6);
  *piVar2 = *piVar2 + uVar6;
  out(CONCAT11(cVar10 + bVar3 + (CARRY1((byte)uVar4,bVar8) || CARRY1(bVar5,bVar11)),bVar9),uVar6);
  piVar2 = (int *)(in_FS_OFFSET + (ulonglong)uVar6);
  *piVar2 = *piVar2 + uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

