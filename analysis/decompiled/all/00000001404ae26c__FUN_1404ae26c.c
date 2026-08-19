// Function: FUN_1404ae26c
// Addr: 1404ae26c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae26c(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  uint *in_RAX;
  char unaff_SPL;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *(undefined8 *)in_RAX = param_1;
  *param_4 = *param_4 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

