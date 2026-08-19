// Function: FUN_1404c9598
// Addr: 1404c9598
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9598(char *param_1,longlong param_2)

{
  uint uVar1;
  byte bVar3;
  uint *in_RAX;
  undefined6 uVar4;
  uint *puVar2;
  byte bVar5;
  byte bVar6;
  longlong unaff_RBX;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  char unaff_R12B;
  longlong in_FS_OFFSET;
  
  bVar6 = (byte)((ulonglong)param_2 >> 8);
  bVar5 = (byte)param_1;
  *in_RAX = *in_RAX & unaff_ESI;
  uVar4 = (undefined6)((ulonglong)in_RAX >> 0x10);
  bVar3 = (byte)((ulonglong)in_RAX >> 8) ^ bVar6;
  puVar2 = (uint *)CONCAT62(uVar4,CONCAT11(bVar3 - (char)param_2,
                                           (byte)in_RAX |
                                           *(byte *)CONCAT62(uVar4,CONCAT11(bVar3,(byte)in_RAX))));
  uVar1 = ((uint)puVar2 | *puVar2) + 0xebfff33c;
  if (uVar1 != 0) {
    bVar3 = *(byte *)CONCAT44(unaff_00000034,unaff_ESI);
    *(byte *)CONCAT44(unaff_00000034,unaff_ESI) =
         *(char *)CONCAT44(unaff_00000034,unaff_ESI) + bVar5;
    bVar3 = (char)uVar1 + *(char *)(in_FS_OFFSET + (ulonglong)uVar1) + CARRY1(bVar3,bVar5);
    uVar1 = CONCAT31((int3)(uVar1 >> 8),bVar3 + 0x34);
    *(int *)(ulonglong)uVar1 = *(int *)(ulonglong)uVar1 + uVar1 + (uint)(0xcb < bVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + unaff_R12B;
  cRam0000000000000000 = cRam0000000000000000 + bVar5;
  uVar1 = (uint)CONCAT11(bVar6 + (char)param_2,*(undefined1 *)((ulonglong)bVar6 << 8));
  uVar1 = uVar1 | *(uint *)(ulonglong)uVar1;
  *(char *)(unaff_RBX + param_2) = *(char *)(unaff_RBX + param_2) + bVar6;
  *(char *)(param_2 * 2) = *(char *)(param_2 * 2) + (char)(uVar1 >> 8) + (char)uVar1;
  param_1[param_2] = param_1[param_2] + bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

