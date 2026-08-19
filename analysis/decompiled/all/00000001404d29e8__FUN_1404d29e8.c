// Function: FUN_1404d29e8
// Addr: 1404d29e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d29e8(char param_1,undefined8 param_2)

{
  uint uVar1;
  uint in_EAX;
  char *unaff_RBP;
  char in_CF;
  
  uVar1 = CONCAT22((short)((in_EAX | 0xec40400) >> 0x10),
                   CONCAT11((char)((in_EAX | 0xec40400) >> 8) +
                            (char)((ulonglong)param_2 >> 8) + (char)(in_EAX >> 8) + in_CF,
                            (char)in_EAX));
  *unaff_RBP = *unaff_RBP - param_1;
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 & uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

