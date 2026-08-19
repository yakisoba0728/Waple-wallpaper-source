// Function: FUN_1404d40b8
// Addr: 1404d40b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d40b8(void)

{
  char in_AL;
  undefined7 in_register_00000001;
  bool in_OF;
  undefined1 in_MM1_Ba;
  undefined1 in_MM1_Bb;
  undefined1 in_MM1_Bc;
  undefined1 in_MM1_Bd;
  undefined1 in_MM1_Be;
  undefined1 in_MM1_Bf;
  undefined1 in_MM1_Bg;
  undefined1 in_MM1_Bh;
  
  pavgb(in_MM1_Ba,(char)uRam000000014a0d4c8f);
  pavgb(in_MM1_Bb,(char)((ulonglong)uRam000000014a0d4c8f >> 8));
  pavgb(in_MM1_Bc,(char)((ulonglong)uRam000000014a0d4c8f >> 0x10));
  pavgb(in_MM1_Bd,(char)((ulonglong)uRam000000014a0d4c8f >> 0x18));
  pavgb(in_MM1_Be,(char)((ulonglong)uRam000000014a0d4c8f >> 0x20));
  pavgb(in_MM1_Bf,(char)((ulonglong)uRam000000014a0d4c8f >> 0x28));
  pavgb(in_MM1_Bg,(char)((ulonglong)uRam000000014a0d4c8f >> 0x30));
  pavgb(in_MM1_Bh,(char)((ulonglong)uRam000000014a0d4c8f >> 0x38));
  if (!in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

