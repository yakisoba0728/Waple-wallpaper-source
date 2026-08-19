// Function: FUN_1404d3bf4
// Addr: 1404d3bf4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3bf4(undefined8 param_1,longlong param_2)

{
  longlong unaff_RBX;
  
  uRam00000000d8723c1e =
       uRam00000000d8723c1e & ((uint)&stack0x00000000 | *(uint *)(param_2 + unaff_RBX));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

