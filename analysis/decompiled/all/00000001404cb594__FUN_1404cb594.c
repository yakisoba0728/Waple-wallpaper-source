// Function: FUN_1404cb594
// Addr: 1404cb594
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cb594(char *param_1,undefined8 param_2)

{
  char in_AL;
  undefined6 in_register_00000002;
  int *unaff_RBX;
  char *unaff_RDI;
  
  *param_1 = *param_1 + 'L';
  *(char *)CONCAT62(in_register_00000002,CONCAT11(0x4c,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(0x4c,in_AL)) + in_AL;
  *unaff_RBX = *unaff_RBX << ((byte)param_1 & 0x1f);
  *unaff_RDI = *unaff_RDI + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

