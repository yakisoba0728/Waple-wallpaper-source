// Function: FUN_14049f27c
// Addr: 14049f27c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f27c(uint *param_1,longlong param_2)

{
  char *pcVar1;
  byte *pbVar2;
  int *piVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint *in_RAX;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RSI;
  longlong in_FS_OFFSET;
  bool bVar9;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar6 = *in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + (byte)in_RAX;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 1);
  *pcVar1 = *pcVar1 + (char)((ulonglong)in_RAX >> 8) + CARRY1((byte)uVar6,(byte)in_RAX);
  *unaff_RSI = *unaff_RSI + unaff_BH;
  uVar6 = *param_1;
  pbVar2 = (byte *)((longlong)param_1 + (longlong)unaff_RSI * 8 + 0x49);
  *pbVar2 = *pbVar2 + unaff_BL;
  bVar8 = (byte)(uVar6 >> 8);
  bVar9 = CARRY1((byte)*param_1,bVar8);
  *(byte *)param_1 = (byte)*param_1 + bVar8;
  bVar8 = *(byte *)((ulonglong)uVar6 * 2);
  bVar5 = (byte)uVar6 + *(byte *)((ulonglong)uVar6 * 2);
  bVar4 = *(byte *)(param_2 + (longlong)param_1);
  uVar7 = CONCAT31((int3)(uVar6 >> 8),bVar5 + bVar9) + 0xd0000964;
  piVar3 = (int *)(in_FS_OFFSET + (ulonglong)uVar7);
  *piVar3 = *piVar3 + uVar7;
  out(CONCAT11((char)((ulonglong)param_2 >> 8) + bVar4 +
               (CARRY1((byte)uVar6,bVar8) || CARRY1(bVar5,bVar9)),(char)param_2),uVar7);
  piVar3 = (int *)(in_FS_OFFSET + (ulonglong)uVar7);
  *piVar3 = *piVar3 + uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

