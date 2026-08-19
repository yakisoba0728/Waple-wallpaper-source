// Function: FUN_1404cdca0
// Addr: 1404cdca0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cdca0(int *param_1,undefined8 param_2)

{
  char *pcVar1;
  int iVar2;
  float10 fVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 in_RAX;
  byte bVar8;
  longlong unaff_RBX;
  bool in_OF;
  float10 in_ST0;
  float10 in_ST1;
  char *pcVar6;
  byte bVar7;
  
  bVar8 = (byte)((ulonglong)param_2 >> 8);
  if (!in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  fVar3 = (float10)dRam0000000176294137;
  bVar7 = (byte)((ulonglong)in_RAX >> 8);
  uRamc007d009e00bf00d = (undefined1)in_RAX;
  lVar5 = CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar7 + bVar8,uRamc007d009e00bf00d));
  iVar2 = *(int *)(lVar5 * 2 + 0x11);
  *param_1 = *param_1 + (int)param_1 + (uint)CARRY1(bVar7,bVar8);
  *(char *)param_1 = (char)*param_1 + (char)param_2;
  uVar4 = (int)lVar5 + 0x3600470;
  pcVar6 = (char *)(ulonglong)uVar4;
  *pcVar6 = *pcVar6 + (char)uVar4;
  pcVar1 = (char *)(unaff_RBX * 9 + -0x6ad7ffb4);
  *pcVar1 = *pcVar1 + (char)param_1;
  *(int *)((longlong)pcVar6 * 2 + -100) = (int)((in_ST0 / fVar3) * (float10)iVar2);
  *(int *)((longlong)pcVar6 * 2 + 2) = (int)in_ST1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

