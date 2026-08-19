// Function: FUN_1404ab688
// Addr: 1404ab688
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ab688(void)

{
  byte bVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  char unaff_BL;
  char *unaff_RSI;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  bVar1 = *(byte *)CONCAT44(in_register_00000004,in_EAX);
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (byte)in_EAX;
  *unaff_RSI = *unaff_RSI + unaff_BL + CARRY1(bVar1,(byte)in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

