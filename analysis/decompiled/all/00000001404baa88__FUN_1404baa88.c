// Function: FUN_1404baa88
// Addr: 1404baa88
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404baa88(longlong param_1,undefined2 param_2)

{
  char cVar1;
  byte bVar2;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  char *unaff_RDI;
  
  bVar2 = (byte)in_EAX;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(byte *)CONCAT44(in_register_00000004,in_EAX) & bVar2;
  *(undefined1 *)(param_1 + 0x21004b) = *(undefined1 *)(param_1 + 0x21004b);
  *unaff_RDI = *unaff_RDI + bVar2;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(byte *)CONCAT44(in_register_00000004,in_EAX) & bVar2;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(byte *)CONCAT44(in_register_00000004,in_EAX) & bVar2;
  cVar1 = in(param_2);
  *unaff_RDI = cVar1;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + bVar2;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(byte *)CONCAT44(in_register_00000004,in_EAX) & bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

