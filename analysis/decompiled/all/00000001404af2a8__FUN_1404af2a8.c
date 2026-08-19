// Function: FUN_1404af2a8
// Addr: 1404af2a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af2a8(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  byte bVar4;
  undefined8 in_RAX;
  int *piVar3;
  undefined7 uVar5;
  undefined1 uVar6;
  longlong unaff_RBP;
  
  uVar6 = (undefined1)((ulonglong)param_2 >> 8);
  uVar5 = (undefined7)((ulonglong)param_1 >> 8);
  bVar4 = (byte)((ulonglong)in_RAX >> 8);
  *(char *)(param_2 + unaff_RBP) = *(char *)(param_2 + unaff_RBP) + bVar4;
  bVar1 = (byte)in_RAX;
  piVar3 = (int *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar4 + bVar1,bVar1));
  iVar2 = (int)piVar3 + *piVar3 + (uint)CARRY1(bVar4,bVar1);
  bVar1 = (byte)iVar2 ^ (byte)((uint)iVar2 >> 8);
  *(byte *)CONCAT71(uVar5,uVar6) =
       *(char *)CONCAT71(uVar5,uVar6) +
       bVar1 + (char)*(undefined4 *)(ulonglong)CONCAT31((int3)((uint)iVar2 >> 8),bVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

