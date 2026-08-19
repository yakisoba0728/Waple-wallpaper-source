// Function: FUN_14049e8f4
// Addr: 14049e8f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014049e8ff) overlaps instruction at (ram,0x00014049e8fd)
    */

void FUN_14049e8f4(longlong param_1,undefined2 param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *in_RAX;
  byte in_CF;
  uint *puVar4;
  
  while( true ) {
    iRam210049e7f00000ec = (int)in_RAX;
    uVar3 = iRam210049e7f00000ec + 0x74150006 + (uint)in_CF;
    puVar4 = (uint *)(ulonglong)uVar3;
    *puVar4 = *puVar4 | uVar3;
    *(char *)((longlong)puVar4 + param_1) = *(char *)((longlong)puVar4 + param_1) + (char)param_2;
    uVar3 = in(param_2);
    in_RAX = (byte *)(ulonglong)uVar3;
    bVar1 = *in_RAX;
    bVar2 = (byte)uVar3;
    *in_RAX = *in_RAX + bVar2;
    if (CARRY1(bVar1,bVar2)) break;
    cRam000000015049f279 = cRam000000015049f279 + (char)param_2;
    *(BADSPACEBASE **)((longlong)register0x00000020 + -8) = register0x00000020;
    in_CF = 0;
    *in_RAX = *in_RAX | bVar2;
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
  }
  *in_RAX = *in_RAX + bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

