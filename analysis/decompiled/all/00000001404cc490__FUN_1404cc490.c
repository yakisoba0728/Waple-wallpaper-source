// Function: FUN_1404cc490
// Addr: 1404cc490
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

uint FUN_1404cc490(void)

{
  char cVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  cVar1 = *(char *)CONCAT44(in_register_00000004,in_EAX);
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  if (!SCARRY1(cVar1,(char)in_EAX)) {
    return in_EAX;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

