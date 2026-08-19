// Function: FUN_1404c0058
// Addr: 1404c0058
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0058(undefined8 param_1,byte *param_2)

{
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  byte bVar1;
  char *unaff_RBX;
  char in_CF;
  
  bVar1 = (byte)((ulonglong)param_2 >> 8);
  *unaff_RBX = *unaff_RBX + in_AH + in_CF;
  *param_2 = *param_2 | bVar1;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

