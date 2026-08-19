// Function: FUN_1404ba8d8
// Addr: 1404ba8d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba8d8(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  byte in_AL;
  undefined7 in_register_00000001;
  undefined1 *unaff_RDI;
  
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(byte *)CONCAT71(in_register_00000001,in_AL) & in_AL;
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(byte *)CONCAT71(in_register_00000001,in_AL) & in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

