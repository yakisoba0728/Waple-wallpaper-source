// Function: FUN_1404d3228
// Addr: 1404d3228
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3228(void)

{
  longlong in_RAX;
  
  *(char *)(in_RAX + -0x5f10ffc1) = *(char *)(in_RAX + -0x5f10ffc1) << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

