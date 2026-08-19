// Function: FUN_1404c7098
// Addr: 1404c7098
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7098(char *param_1,char *param_2)

{
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char *unaff_RBX;
  
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) | (byte)param_2;
  *param_1 = *param_1 + in_AH;
  *param_2 = *param_2 + (byte)param_2;
  in(0xf);
  *unaff_RBX = *unaff_RBX + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

