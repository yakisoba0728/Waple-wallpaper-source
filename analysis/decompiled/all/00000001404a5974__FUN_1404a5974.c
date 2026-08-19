// Function: FUN_1404a5974
// Addr: 1404a5974
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5974(undefined8 param_1,char *param_2)

{
  longlong in_RAX;
  uint unaff_ESI;
  
  *(uint *)(in_RAX + -0x3b4ffff6) = *(uint *)(in_RAX + -0x3b4ffff6) & unaff_ESI;
  *param_2 = *param_2 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

