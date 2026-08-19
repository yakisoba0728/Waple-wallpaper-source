// Function: FUN_1404d401c
// Addr: 1404d401c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d401c(undefined8 param_1,char param_2)

{
  char *in_RAX;
  char in_CF;
  
  *in_RAX = *in_RAX + param_2 + in_CF;
  in_RAX[-0x4a] = in_RAX[-0x4a] + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

