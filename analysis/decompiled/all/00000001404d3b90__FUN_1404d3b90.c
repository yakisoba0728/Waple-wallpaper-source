// Function: FUN_1404d3b90
// Addr: 1404d3b90
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3b90(char *param_1)

{
  uint uVar1;
  longlong in_RAX;
  char unaff_BL;
  
  *(char *)(in_RAX + -0x77dcfff4) = *(char *)(in_RAX + -0x77dcfff4) - unaff_BL;
  uVar1 = (uint)in_RAX | 0xe781e00;
  *param_1 = *param_1 + unaff_BL;
  *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 & (byte)in_RAX;
  uVar1 = CONCAT22((short)(uVar1 >> 0x10),CONCAT11((char)(uVar1 >> 8) * '\x02',(byte)in_RAX));
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 & uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

