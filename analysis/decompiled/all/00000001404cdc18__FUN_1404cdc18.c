// Function: FUN_1404cdc18
// Addr: 1404cdc18
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cdc18(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  uint uVar4;
  byte bVar7;
  uint *in_RAX;
  char *pcVar5;
  char *pcVar6;
  char cVar8;
  byte bVar9;
  longlong unaff_RBX;
  float10 in_ST0;
  float10 in_ST1;
  
  bVar9 = (byte)((ulonglong)param_2 >> 8);
  cVar8 = (char)param_2;
  *in_RAX = *in_RAX & (uint)in_RAX;
  cRamc007d009e00bf00d = (char)in_RAX + (char)*in_RAX;
  fVar3 = (float10)dRam0000000176294127;
  pcVar5 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) + cVar8 + bVar9,
                                     cRamc007d009e00bf00d));
  iVar1 = *(int *)((longlong)pcVar5 * 2 + 0x21);
  *pcVar5 = *pcVar5 + cRamc007d009e00bf00d;
  pcVar5[-0x24] = pcVar5[-0x24] + cVar8;
  uVar4 = (uint)pcVar5 ^ 0x35dc6500;
  bVar7 = (byte)(uVar4 >> 8);
  uVar4 = CONCAT22((short)(uVar4 >> 0x10),CONCAT11(bVar7 + bVar9,cRamc007d009e00bf00d));
  iVar2 = *(int *)((ulonglong)uVar4 * 2 + 0x11);
  *param_1 = *param_1 + (int)param_1 + (uint)CARRY1(bVar7,bVar9);
  *(char *)param_1 = (char)*param_1 + cVar8;
  uVar4 = uVar4 + 0x3600470;
  pcVar6 = (char *)(ulonglong)uVar4;
  *pcVar6 = *pcVar6 + (char)uVar4;
  pcVar5 = (char *)(unaff_RBX * 9 + -0x6ad7ffb4);
  *pcVar5 = *pcVar5 + (char)param_1;
  *(int *)((longlong)pcVar6 * 2 + -100) = (int)((in_ST0 / fVar3) * (float10)iVar1 * (float10)iVar2);
  *(int *)((longlong)pcVar6 * 2 + 2) = (int)in_ST1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

