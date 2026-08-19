// Function: FUN_1404b06e8
// Addr: 1404b06e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b06e8(undefined8 param_1,uint *param_2)

{
  uint unaff_EBX;
  
  *param_2 = *param_2 & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

