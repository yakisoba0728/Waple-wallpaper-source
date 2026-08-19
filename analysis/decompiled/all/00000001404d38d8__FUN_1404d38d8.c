// Function: FUN_1404d38d8
// Addr: 1404d38d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d38d8(undefined8 param_1,uint *param_2)

{
  uint in_EAX;
  uint unaff_ESP;
  
  uRam00000001945238e0 = uRam00000001945238e0 & in_EAX;
  *param_2 = *param_2 & unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

