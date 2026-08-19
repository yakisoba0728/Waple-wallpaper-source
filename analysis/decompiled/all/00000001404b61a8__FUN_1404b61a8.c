// Function: FUN_1404b61a8
// Addr: 1404b61a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b61a8(longlong param_1,longlong param_2)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  int *in_RAX;
  longlong unaff_RBX;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  undefined1 auStackX_8 [32];
  
  *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + (char)param_2;
  *(char *)((longlong)in_RAX + param_2) =
       *(char *)((longlong)in_RAX + param_2) + (char)((ulonglong)param_2 >> 8);
  pbVar2 = (byte *)((longlong)in_RAX + -0x60ffe4a5);
  bVar3 = *pbVar2;
  *pbVar2 = *pbVar2 + (byte)in_RAX;
  uVar4 = ((int)in_RAX - *in_RAX) - (uint)CARRY1(bVar3,(byte)in_RAX);
  piVar1 = (int *)(CONCAT44(unaff_00000034,unaff_ESI) + 10);
  *piVar1 = *piVar1 + (int)auStackX_8;
  pbVar2 = (byte *)(CONCAT44(unaff_00000034,unaff_ESI) + -0x1c);
  bVar3 = *pbVar2;
  bVar5 = (byte)(uVar4 >> 8);
  *pbVar2 = *pbVar2 + bVar5;
  *(int *)(ulonglong)uVar4 = (*(int *)(ulonglong)uVar4 - uVar4) - (uint)CARRY1(bVar3,bVar5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

