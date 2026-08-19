// Function: FUN_1404d402c
// Addr: 1404d402c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d402c(longlong param_1,undefined8 param_2,char *param_3,char param_4)

{
  char in_AH;
  
  *(char *)(param_1 + 0x3f) = *(char *)(param_1 + 0x3f) + in_AH;
  *param_3 = *param_3 + param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

