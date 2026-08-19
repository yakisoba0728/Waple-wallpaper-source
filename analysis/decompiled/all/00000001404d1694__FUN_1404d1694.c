// Function: FUN_1404d1694
// Addr: 1404d1694
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1694(undefined8 param_1,char param_2)

{
  char *pcVar1;
  byte bVar2;
  uint in_EAX;
  undefined4 in_register_00000004;
  int unaff_ESP;
  int *unaff_RDI;
  
  pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + 0x40bf102);
  *pcVar1 = *pcVar1 + param_2;
  bVar2 = *(byte *)CONCAT44(in_register_00000004,in_EAX);
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (byte)in_EAX;
  *unaff_RDI = *unaff_RDI + unaff_ESP + (uint)CARRY1(bVar2,(byte)in_EAX);
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) | in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

