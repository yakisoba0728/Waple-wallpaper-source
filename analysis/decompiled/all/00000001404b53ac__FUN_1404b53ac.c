// Function: FUN_1404b53ac
// Addr: 1404b53ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b53ac(uint *param_1)

{
  uint unaff_ESP;
  
  *param_1 = *param_1 & unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

