// Function: FUN_14049ec54
// Addr: 14049ec54
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014049ecc1) */

void FUN_14049ec54(longlong param_1,undefined8 param_2)

{
  uint *in_RAX;
  char *pcVar1;
  byte unaff_BL;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *(byte *)(param_1 + (longlong)in_RAX) = *(byte *)(param_1 + (longlong)in_RAX) ^ unaff_BL;
  pcVar1 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),
                            ((char)in_RAX + -1) -
                            CARRY1((byte)((ulonglong)param_2 >> 8),(byte)((ulonglong)param_1 >> 8)))
  ;
  *pcVar1 = *pcVar1 + (char)param_2;
  iRam000000019456ecb8 = iRam000000019456ecb8 + (int)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

