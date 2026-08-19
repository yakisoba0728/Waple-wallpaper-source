// Function: FUN_1404d57ec
// Addr: 1404d57ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d57ec(longlong param_1,undefined8 param_2,char param_3,char *param_4)

{
  char *pcVar1;
  uint *in_RAX;
  longlong unaff_RDI;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  if (param_1 + -1 == 0 || (char)*in_RAX == '\0') {
    pcVar1 = (char *)(param_1 + -1 + unaff_RDI * 4);
    *pcVar1 = *pcVar1 + (char)in_RAX;
    *param_4 = *param_4 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

