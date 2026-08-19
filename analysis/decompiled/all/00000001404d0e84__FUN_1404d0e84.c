// Function: FUN_1404d0e84
// Addr: 1404d0e84
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0e84(char param_1,undefined8 *param_2)

{
  undefined8 in_RAX;
  char *pcVar1;
  int *unaff_RSI;
  longlong in_FS_OFFSET;
  byte in_CF;
  
  pcVar1 = (char *)(ulonglong)
                   ((*unaff_RSI -
                    *(int *)(in_FS_OFFSET + CONCAT44((int)((ulonglong)in_RAX >> 0x20),*unaff_RSI)))
                   - (uint)in_CF);
  GlobalDescriptorTableRegister(*param_2);
  *pcVar1 = *pcVar1 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

