// Function: FUN_14049edec
// Addr: 14049edec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049edec(longlong param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  uint in_EAX;
  longlong unaff_GS_OFFSET;
  
  *(uint *)(unaff_GS_OFFSET + param_1) = *(uint *)(unaff_GS_OFFSET + param_1) ^ in_EAX;
  cVar1 = in(param_2);
  *param_4 = *param_4 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

