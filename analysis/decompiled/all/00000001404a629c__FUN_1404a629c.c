// Function: FUN_1404a629c
// Addr: 1404a629c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a629c(uint param_1,char *param_2)

{
  undefined1 in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RBX;
  
  *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) & param_1;
  param_2[unaff_RBX] = param_2[unaff_RBX] | in_AH;
  *param_2 = *param_2 + -9;
  *(char *)(unaff_RBX + -0x3ffff6d6) = *(char *)(unaff_RBX + -0x3ffff6d6) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

