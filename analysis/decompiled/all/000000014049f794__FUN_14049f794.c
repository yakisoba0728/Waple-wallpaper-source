// Function: FUN_14049f794
// Addr: 14049f794
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f794(undefined4 param_1)

{
  undefined1 in_AL;
  undefined1 uVar1;
  char in_AH;
  undefined6 in_register_00000002;
  char *unaff_RBX;
  
  *unaff_RBX = *unaff_RBX +
               ((byte)((uint)param_1 >> 8) ^
               (byte)((uint)*(undefined4 *)
                             (CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) +
                             CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL))) >> 8));
  uVar1 = in(0x55);
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,uVar1)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,uVar1)) + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

