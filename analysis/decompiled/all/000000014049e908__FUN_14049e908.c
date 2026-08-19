// Function: FUN_14049e908
// Addr: 14049e908
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e908(undefined8 param_1,undefined2 param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  
  while( true ) {
    uVar3 = in(param_2);
    pbVar4 = (byte *)(ulonglong)uVar3;
    bVar1 = *pbVar4;
    bVar2 = (byte)uVar3;
    *pbVar4 = *pbVar4 + bVar2;
    if (CARRY1(bVar1,bVar2)) break;
    cRam000000015049f279 = cRam000000015049f279 + (char)param_2;
    *(BADSPACEBASE **)((longlong)register0x00000020 + -8) = register0x00000020;
    *pbVar4 = *pbVar4 | bVar2;
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
  }
  *pbVar4 = *pbVar4 + bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

