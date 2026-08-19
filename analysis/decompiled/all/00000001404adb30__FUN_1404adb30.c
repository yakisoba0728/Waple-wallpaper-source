// Function: FUN_1404adb30
// Addr: 1404adb30
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404adb30(undefined1 *param_1,undefined8 param_2,char *param_3)

{
  uint uVar1;
  longlong in_RAX;
  byte bVar3;
  byte bVar4;
  byte *pbVar2;
  
  bVar4 = (byte)((ulonglong)param_1 >> 8);
  bVar3 = (byte)param_1;
  param_1[0x12] = param_1[0x12] & bVar3;
  *(char *)(in_RAX + -0x26) = *(char *)(in_RAX + -0x26) + bVar3;
  *param_1 = *param_1;
  uVar1 = (int)in_RAX + 0x64050002;
  pbVar2 = (byte *)(ulonglong)uVar1;
  *pbVar2 = *pbVar2 | (byte)uVar1;
  param_1[0x12] = param_1[0x12] & bVar3;
  bVar3 = *pbVar2;
  *pbVar2 = *pbVar2 + bVar4;
  uRam00000001b44fdb54 =
       uRam00000001b44fdb54 &
       CONCAT31((int3)(uVar1 >> 8),(byte)uVar1 + *param_3 + CARRY1(bVar3,bVar4));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

