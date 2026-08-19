// Function: FUN_1404cdc7c
// Addr: 1404cdc7c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cdc7c(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  char cVar4;
  uint uVar5;
  byte bVar8;
  char *pcVar6;
  char *pcVar7;
  longlong in_RAX;
  byte bVar9;
  char *unaff_RBX;
  ulonglong uVar10;
  float10 in_ST0;
  float10 in_ST1;
  
  bVar9 = (byte)((ulonglong)param_2 >> 8);
  uVar10 = (ulonglong)((uint)&stack0x00000000 | *(uint *)(&stack0x00000000 + in_RAX));
  *unaff_RBX = *unaff_RBX + (char)param_1;
  *(char *)param_1 = (char)*param_1 + (char)((ulonglong)in_RAX >> 8);
  uVar5 = (int)in_RAX + 0xe4050002;
  cVar4 = (char)uVar5 + *(char *)(ulonglong)uVar5;
  if (SCARRY1((char)uVar5,*(char *)(ulonglong)uVar5)) {
    *(ulonglong *)(uVar10 - 8) = (ulonglong)CONCAT31((int3)(uVar5 >> 8),cVar4);
    fVar3 = (float10)dRam0000000176294127;
    uVar5 = CONCAT22((short)(uVar5 >> 0x10),CONCAT11((char)(uVar5 >> 8) + bVar9,cVar4));
    pcVar6 = (char *)(ulonglong)uVar5;
    iVar1 = *(int *)((longlong)pcVar6 * 2 + 0x21);
    *pcVar6 = *pcVar6 + cVar4;
    pcVar6[-0x24] = pcVar6[-0x24] + (char)param_2;
    uVar5 = uVar5 ^ 0x35dc6500;
    bVar8 = (byte)(uVar5 >> 8);
    uVar5 = CONCAT22((short)(uVar5 >> 0x10),CONCAT11(bVar8 + bVar9,cVar4));
    iVar2 = *(int *)((ulonglong)uVar5 * 2 + 0x11);
    *param_1 = *param_1 + (int)param_1 + (uint)CARRY1(bVar8,bVar9);
    *(char *)param_1 = (char)*param_1 + (char)param_2;
    uVar5 = uVar5 + 0x3600470;
    pcVar7 = (char *)(ulonglong)uVar5;
    cRamc007d009e00bf00d = cVar4;
    *(char **)(uVar10 - 0x10) = pcVar7;
    *pcVar7 = *pcVar7 + (char)uVar5;
    *(char **)(uVar10 - 0x18) = pcVar7;
    pcVar6 = (char *)((longlong)unaff_RBX * 9 + -0x6ad7ffb4);
    *pcVar6 = *pcVar6 + (char)param_1;
    *(int *)((longlong)pcVar7 * 2 + -100) =
         (int)((in_ST0 / fVar3) * (float10)iVar1 * (float10)iVar2);
    *(int *)((longlong)pcVar7 * 2 + 2) = (int)in_ST1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

