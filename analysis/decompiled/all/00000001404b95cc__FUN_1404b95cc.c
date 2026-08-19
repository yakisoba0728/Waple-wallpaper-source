// Function: FUN_1404b95cc
// Addr: 1404b95cc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b95cc(longlong param_1,longlong param_2)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  longlong in_RAX;
  longlong lVar4;
  undefined4 unaff_EBX;
  uint unaff_EDI;
  undefined4 unaff_0000003c;
  byte in_CF;
  uint *puVar5;
  byte bVar6;
  
  bVar6 = (byte)((ulonglong)in_RAX >> 8);
  bVar2 = bVar6 - *(byte *)(in_RAX + param_1);
  lVar4 = CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar2 - in_CF,(char)in_RAX));
  piVar1 = (int *)(CONCAT44(unaff_0000003c,unaff_EDI) + lVar4);
  *piVar1 = *piVar1 + (int)param_2 + (uint)(bVar6 < *(byte *)(in_RAX + param_1) || bVar2 < in_CF);
  uVar3 = (int)lVar4 + 0xa0000634;
  puVar5 = (uint *)(ulonglong)uVar3;
  *(char *)(param_1 + -0x4bffe0c7) =
       *(char *)(param_1 + -0x4bffe0c7) + (char)((ulonglong)param_2 >> 8);
  *puVar5 = *puVar5 & uVar3;
  *(char *)puVar5 = (char)*puVar5 + (char)uVar3;
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) & unaff_EDI;
  *(char *)(param_2 + -0x3c) = *(char *)(param_2 + -0x3c) + (char)((uint)unaff_EBX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

