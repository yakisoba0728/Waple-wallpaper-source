// Function: FUN_1404c4670
// Addr: 1404c4670
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c4670(void)

{
  int in_EAX;
  undefined4 in_register_00000004;
  int *unaff_RSI;
  
  UNK_1404c46b8 = UNK_1404c46b8 << 1;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  *unaff_RSI = *unaff_RSI + in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

