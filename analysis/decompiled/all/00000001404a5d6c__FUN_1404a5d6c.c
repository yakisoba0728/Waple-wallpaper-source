// Function: FUN_1404a5d6c
// Addr: 1404a5d6c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5d6c(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  uint *in_RAX;
  byte unaff_BH;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar1 = (byte)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar1;
  *(byte *)(param_1 + -0x46c5fff8) = *(byte *)(param_1 + -0x46c5fff8) & unaff_BH;
  *(byte *)in_RAX = (byte)*in_RAX | bVar1;
  uVar2 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11(((char)((ulonglong)in_RAX >> 8) + (char)((ulonglong)param_2 >> 8))
                                 * '\x02',bVar1)) + 0x6d40000;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

