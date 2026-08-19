// Function: FUN_1404ad76c
// Addr: 1404ad76c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad76c(void)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  bRam000000014653d788 = bRam000000014653d788 << 1 | (char)bRam000000014653d788 < '\0';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

