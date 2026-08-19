// Function: FUN_1404b50d8
// Addr: 1404b50d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b50d8(void)

{
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  
  uRam00000001b45050e8 =
       uRam00000001b45050e8 &
       CONCAT31((int3)((uint)in_EAX >> 8),
                ((char)in_EAX - *(char *)CONCAT44(in_register_00000004,in_EAX)) + -1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

