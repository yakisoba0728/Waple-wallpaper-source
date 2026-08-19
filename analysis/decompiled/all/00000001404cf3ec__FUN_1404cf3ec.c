// Function: FUN_1404cf3ec
// Addr: 1404cf3ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cf3ec(void)

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
  
  pavgb(in_MM1_Ba,(char)uRam0000000161acffb5);
  pavgb(in_MM1_Bb,(char)((ulonglong)uRam0000000161acffb5 >> 8));
  pavgb(in_MM1_Bc,(char)((ulonglong)uRam0000000161acffb5 >> 0x10));
  pavgb(in_MM1_Bd,(char)((ulonglong)uRam0000000161acffb5 >> 0x18));
  pavgb(in_MM1_Be,(char)((ulonglong)uRam0000000161acffb5 >> 0x20));
  pavgb(in_MM1_Bf,(char)((ulonglong)uRam0000000161acffb5 >> 0x28));
  pavgb(in_MM1_Bg,(char)((ulonglong)uRam0000000161acffb5 >> 0x30));
  pavgb(in_MM1_Bh,(char)((ulonglong)uRam0000000161acffb5 >> 0x38));
  uVar1 = in_EAX + 0x74050002;
  *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 | (byte)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

