// Function: FUN_1404d66e8
// Addr: 1404d66e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d66e8(undefined8 param_1,char param_2)

{
  undefined4 uVar1;
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  
  uVar1 = LocalDescriptorTableRegister();
  *(undefined4 *)CONCAT62(in_register_00000002,CONCAT11(in_AH + param_2,in_AL)) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

