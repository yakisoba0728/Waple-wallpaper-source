// Function: FUN_1404c8464
// Addr: 1404c8464
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8464(undefined8 param_1,undefined2 param_2)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  uint in_EAX;
  undefined4 in_register_00000004;
  short *unaff_RBX;
  undefined1 *unaff_RDI;
  float10 in_ST0;
  
  uVar2 = in(param_2);
  *unaff_RDI = uVar2;
  puVar1 = (undefined4 *)
           (CONCAT44(in_register_00000004,in_EAX) + 0x21 + CONCAT44(in_register_00000004,in_EAX));
  *puVar1 = *puVar1;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  *unaff_RBX = (short)in_ST0;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) ^ in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

