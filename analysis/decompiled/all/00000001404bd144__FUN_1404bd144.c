// Function: FUN_1404bd144
// Addr: 1404bd144
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd144(byte *param_1,char param_2)

{
  byte bVar1;
  byte in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  char *unaff_RBX;
  int unaff_EDI;
  
  bRam000000018c1bc14b = bRam000000018c1bc14b | in_AH;
  bVar1 = *param_1;
  *param_1 = *param_1 + in_AL;
  *unaff_RBX = *unaff_RBX + in_AL + CARRY1(bVar1,in_AL);
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + param_2;
  *(int *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(int *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + unaff_EDI;
  *param_1 = *param_1 + (char)param_1;
  param_1[-1] = param_1[-1] + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

