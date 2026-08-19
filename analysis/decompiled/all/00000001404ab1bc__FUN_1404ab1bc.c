// Function: FUN_1404ab1bc
// Addr: 1404ab1bc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ab1bc(undefined8 param_1,int param_2)

{
  byte in_AL;
  undefined7 in_register_00000001;
  int *unaff_RBX;
  
  *unaff_RBX = *unaff_RBX + param_2;
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(byte *)CONCAT71(in_register_00000001,in_AL) | in_AL;
  *(char *)unaff_RBX = (char)*unaff_RBX + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

