// Function: FUN_1404b1bf0
// Addr: 1404b1bf0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1bf0(undefined8 param_1,uint *param_2)

{
  int *piVar1;
  byte in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  uint unaff_EBX;
  int unaff_ESI;
  undefined4 unaff_00000034;
  
  *param_2 = *param_2 & unaff_EBX;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) | in_AL;
  piVar1 = (int *)(CONCAT44(unaff_00000034,unaff_ESI) +
                  CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *piVar1 = *piVar1 + unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

