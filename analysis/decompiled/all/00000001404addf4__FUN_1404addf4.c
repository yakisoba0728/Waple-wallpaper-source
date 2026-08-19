// Function: FUN_1404addf4
// Addr: 1404addf4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404addf4(undefined8 param_1,uint param_2,undefined8 param_3,char param_4)

{
  char in_AL;
  byte bVar1;
  undefined7 in_register_00000001;
  uint *unaff_RBX;
  char *unaff_RDI;
  
  bVar1 = in_AL + 0x30;
  *(byte *)CONCAT71(in_register_00000001,bVar1) =
       *(char *)CONCAT71(in_register_00000001,bVar1) + bVar1;
  *unaff_RBX = *unaff_RBX & param_2;
  *(byte *)CONCAT71(in_register_00000001,bVar1) =
       *(byte *)CONCAT71(in_register_00000001,bVar1) | bVar1;
  *unaff_RDI = *unaff_RDI + param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

