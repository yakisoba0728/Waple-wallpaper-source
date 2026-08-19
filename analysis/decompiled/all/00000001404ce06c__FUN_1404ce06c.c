// Function: FUN_1404ce06c
// Addr: 1404ce06c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ce06c(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  undefined1 *unaff_RDI;
  float10 in_ST0;
  
  out(0x2c,in_AL);
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  *(short *)(CONCAT71(in_register_00000001,in_AL) + 0x11 + CONCAT71(in_register_00000001,in_AL)) =
       (short)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

