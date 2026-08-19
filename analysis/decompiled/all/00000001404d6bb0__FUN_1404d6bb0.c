// Function: FUN_1404d6bb0
// Addr: 1404d6bb0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6bb0(undefined8 param_1,char *param_2)

{
  longlong in_FS_OFFSET;
  bool bVar1;
  
  *param_2 = *param_2 + 'j';
  bVar1 = 0x95 < bRam0000000021004d6a;
  bRam0000000021004d6a = bRam0000000021004d6a + 0x6a;
  *(int *)(in_FS_OFFSET + 0x21004d6a) =
       *(int *)(in_FS_OFFSET + 0x21004d6a) + 0x21004d6a + (uint)bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

