// Function: FUN_1404c21b4
// Addr: 1404c21b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c21b4(undefined4 param_1)

{
  byte *pbVar1;
  uint *puVar2;
  longlong in_RAX;
  
  pbVar1 = (byte *)(in_RAX * 2 + 0x27);
  *pbVar1 = *pbVar1 & (byte)param_1;
  puVar2 = (uint *)(in_RAX * 2 + 0x16);
  *puVar2 = *puVar2 & CONCAT22((short)((uint)param_1 >> 0x10),(ushort)(byte)param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

