// Function: FUN_1404d3cac
// Addr: 1404d3cac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3cac(undefined8 param_1,byte param_2)

{
  byte in_AL;
  byte in_AH;
  longlong unaff_RBX;
  longlong unaff_RBP;
  byte in_CF;
  
  *(char *)(unaff_RBP + unaff_RBX) =
       *(char *)(unaff_RBP + unaff_RBX) + ((in_AH - param_2) - in_CF) +
       (in_AL < (in_AH < param_2 || (byte)(in_AH - param_2) < in_CF));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

