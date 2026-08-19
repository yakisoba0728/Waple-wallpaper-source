// Function: FUN_1404aa6d8
// Addr: 1404aa6d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa6d8(longlong param_1,byte param_2)

{
  char in_AL;
  char *unaff_RBX;
  
  *(byte *)(param_1 * 2) = *(byte *)(param_1 * 2) & param_2;
  *unaff_RBX = *unaff_RBX + param_2;
  if (*unaff_RBX != '\0') {
    cRam00000001904ab14d = cRam00000001904ab14d + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

