// Function: FUN_1404c7a7c
// Addr: 1404c7a7c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7a7c(undefined8 param_1,undefined8 param_2,byte param_3)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  int unaff_ESP;
  int *unaff_RDI;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (byte)in_EAX;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(byte *)CONCAT44(in_register_00000004,in_EAX) ^ param_3;
  *(byte *)(CONCAT44(in_register_00000004,in_EAX) & 0xffffffffffffff45) =
       *(byte *)(CONCAT44(in_register_00000004,in_EAX) & 0xffffffffffffff45) ^ (byte)in_EAX & 0x45;
  *unaff_RDI = *unaff_RDI - unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

