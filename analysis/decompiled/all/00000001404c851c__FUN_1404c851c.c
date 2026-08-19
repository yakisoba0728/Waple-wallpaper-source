// Function: FUN_1404c851c
// Addr: 1404c851c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c851c(undefined8 param_1,char param_2)

{
  int *piVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  byte bVar2;
  char *unaff_RBX;
  int unaff_EBP;
  byte *unaff_RDI;
  
  piVar1 = (int *)(CONCAT44(in_register_00000004,in_EAX) + 0x54a8000a);
  *piVar1 = *piVar1 + unaff_EBP;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(byte *)CONCAT44(in_register_00000004,in_EAX) | (byte)in_EAX;
  *unaff_RBX = *unaff_RBX + param_2;
  bVar2 = (byte)param_1 ^ *unaff_RDI;
  if (CONCAT71((int7)((ulonglong)param_1 >> 8),bVar2) == 1 || bVar2 == 0) {
    *unaff_RBX = *unaff_RBX;
    uRam000000013451853c = uRam000000013451853c & in_EAX;
    *(uint *)CONCAT44(in_register_00000004,in_EAX) =
         *(uint *)CONCAT44(in_register_00000004,in_EAX) | in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) ^ in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

