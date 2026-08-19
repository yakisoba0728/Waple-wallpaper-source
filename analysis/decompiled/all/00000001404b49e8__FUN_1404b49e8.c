// Function: FUN_1404b49e8
// Addr: 1404b49e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b49e8(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint *in_RAX;
  char unaff_BH;
  byte in_CF;
  
  uVar4 = (uint)in_RAX;
  *in_RAX = (*in_RAX - uVar4) - (uint)in_CF;
  if (param_1 != 1 && *in_RAX != 0) {
    uVar5 = (uVar4 | *in_RAX) + 0xfc000a34;
    *(int *)(ulonglong)uVar5 =
         (*(int *)(ulonglong)uVar5 - uVar5) - (uint)(0x3fff5cb < (uVar4 | *in_RAX));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4;
  bVar3 = (byte)in_RAX;
  *(char *)((longlong)in_RAX * 2) = *(char *)((longlong)in_RAX * 2) + bVar3;
  *(byte *)((longlong)in_RAX + 5) = *(byte *)((longlong)in_RAX + 5) + unaff_BH;
  uVar5 = *in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar3;
  uVar2 = (uint)CARRY1((byte)uVar5,bVar3);
  uVar5 = *in_RAX;
  uVar1 = *in_RAX;
  *in_RAX = (uVar1 - uVar4) - uVar2;
  uVar2 = (uint)(uVar5 < uVar4 || uVar1 - uVar4 < uVar2);
  uVar5 = *in_RAX;
  uVar1 = *in_RAX;
  *in_RAX = (uVar1 - uVar4) - uVar2;
  if (param_1 == 2 || *in_RAX == 0) {
    *param_4 = *param_4 + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_RAX = (*in_RAX - uVar4) - (uint)(uVar5 < uVar4 || uVar1 - uVar4 < uVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

