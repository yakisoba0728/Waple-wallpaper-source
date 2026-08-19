// Function: FUN_1404d7f54
// Addr: 1404d7f54
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7f54(undefined8 param_1,uint param_2)

{
  byte in_AL;
  undefined7 in_register_00000001;
  uint *unaff_RBX;
  
  *unaff_RBX = *unaff_RBX | param_2;
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(byte *)CONCAT71(in_register_00000001,in_AL) | in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

