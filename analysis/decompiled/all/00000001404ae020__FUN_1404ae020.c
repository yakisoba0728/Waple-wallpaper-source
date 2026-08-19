// Function: FUN_1404ae020
// Addr: 1404ae020
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae020(void)

{
  undefined4 in_EAX;
  uint uVar1;
  undefined4 in_register_00000004;
  int unaff_EBX;
  int *unaff_RSI;
  char in_CF;
  char in_SF;
  char in_OF;
  
  if (in_OF != in_SF) {
    uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),
                     (char)in_EAX + *(char *)CONCAT44(in_register_00000004,in_EAX) + in_CF);
    *unaff_RSI = *unaff_RSI + unaff_EBX;
    *(uint *)CONCAT44(in_register_00000004,uVar1) =
         *(uint *)CONCAT44(in_register_00000004,uVar1) | uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

