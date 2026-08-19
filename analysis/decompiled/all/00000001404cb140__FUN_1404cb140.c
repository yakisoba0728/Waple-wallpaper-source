// Function: FUN_1404cb140
// Addr: 1404cb140
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cb140(void)

{
  undefined1 in_MM1_Ba;
  undefined1 in_MM1_Bb;
  undefined1 in_MM1_Bc;
  undefined1 in_MM1_Bd;
  undefined1 in_MM1_Be;
  undefined1 in_MM1_Bf;
  undefined1 in_MM1_Bg;
  undefined1 in_MM1_Bh;
  
  pavgb(in_MM1_Ba,(char)uRam000000014abcbd07);
  pavgb(in_MM1_Bb,(char)((ulonglong)uRam000000014abcbd07 >> 8));
  pavgb(in_MM1_Bc,(char)((ulonglong)uRam000000014abcbd07 >> 0x10));
  pavgb(in_MM1_Bd,(char)((ulonglong)uRam000000014abcbd07 >> 0x18));
  pavgb(in_MM1_Be,(char)((ulonglong)uRam000000014abcbd07 >> 0x20));
  pavgb(in_MM1_Bf,(char)((ulonglong)uRam000000014abcbd07 >> 0x28));
  pavgb(in_MM1_Bg,(char)((ulonglong)uRam000000014abcbd07 >> 0x30));
  pavgb(in_MM1_Bh,(char)((ulonglong)uRam000000014abcbd07 >> 0x38));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

