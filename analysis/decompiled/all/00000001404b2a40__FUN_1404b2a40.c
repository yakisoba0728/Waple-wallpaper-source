// Function: FUN_1404b2a40
// Addr: 1404b2a40
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2a40(int param_1,int *param_2)

{
  undefined1 in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  int *unaff_RBX;
  uint unaff_EBP;
  
  *unaff_RBX = *unaff_RBX - param_1;
  *param_2 = *param_2 + (int)param_2;
  *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) & unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

