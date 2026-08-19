// Function: FUN_1404c852c
// Addr: 1404c852c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c852c(void)

{
  int in_EAX;
  uint uVar1;
  undefined1 in_MM1_Ba;
  undefined1 in_MM1_Bb;
  undefined1 in_MM1_Bc;
  undefined1 in_MM1_Bd;
  undefined1 in_MM1_Be;
  undefined1 in_MM1_Bf;
  undefined1 in_MM1_Bg;
  undefined1 in_MM1_Bh;
  
  pavgb(in_MM1_Ba,(char)uRam0000000161bc90f5);
  pavgb(in_MM1_Bb,(char)((ulonglong)uRam0000000161bc90f5 >> 8));
  pavgb(in_MM1_Bc,(char)((ulonglong)uRam0000000161bc90f5 >> 0x10));
  pavgb(in_MM1_Bd,(char)((ulonglong)uRam0000000161bc90f5 >> 0x18));
  pavgb(in_MM1_Be,(char)((ulonglong)uRam0000000161bc90f5 >> 0x20));
  pavgb(in_MM1_Bf,(char)((ulonglong)uRam0000000161bc90f5 >> 0x28));
  pavgb(in_MM1_Bg,(char)((ulonglong)uRam0000000161bc90f5 >> 0x30));
  pavgb(in_MM1_Bh,(char)((ulonglong)uRam0000000161bc90f5 >> 0x38));
  uVar1 = in_EAX + 0xf4050002;
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 | uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

