// Function: FUN_1404d70c4
// Addr: 1404d70c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d70c4(void)

{
  char cVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  longlong unaff_RDI;
  
  *(undefined1 *)(unaff_RDI + 0x4d) = *(undefined1 *)(unaff_RDI + 0x4d);
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  cVar1 = *(char *)CONCAT44(in_register_00000004,in_EAX);
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  if (!SCARRY1(cVar1,(char)in_EAX)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

