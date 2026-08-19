// Function: FUN_1404be8c4
// Addr: 1404be8c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404be8c4(undefined1 *param_1)

{
  int iVar1;
  uint in_EAX;
  int unaff_ESI;
  undefined1 in_MM1_Ba;
  undefined1 in_MM1_Bb;
  undefined1 in_MM1_Bc;
  undefined1 in_MM1_Bd;
  undefined1 in_MM1_Be;
  undefined1 in_MM1_Bf;
  undefined1 in_MM1_Bg;
  undefined1 in_MM1_Bh;
  
  *param_1 = *param_1;
  iVar1 = (in_EAX & 0x4a022000) + 0x82150009;
  pavgb(in_MM1_Ba,(char)uRam000000014a0bf4ab);
  pavgb(in_MM1_Bb,(char)((ulonglong)uRam000000014a0bf4ab >> 8));
  pavgb(in_MM1_Bc,(char)((ulonglong)uRam000000014a0bf4ab >> 0x10));
  pavgb(in_MM1_Bd,(char)((ulonglong)uRam000000014a0bf4ab >> 0x18));
  pavgb(in_MM1_Be,(char)((ulonglong)uRam000000014a0bf4ab >> 0x20));
  pavgb(in_MM1_Bf,(char)((ulonglong)uRam000000014a0bf4ab >> 0x28));
  pavgb(in_MM1_Bg,(char)((ulonglong)uRam000000014a0bf4ab >> 0x30));
  pavgb(in_MM1_Bh,(char)((ulonglong)uRam000000014a0bf4ab >> 0x38));
  if (SCARRY4(iVar1,unaff_ESI) ==
      SCARRY4(iVar1 + unaff_ESI,(uint)(0x7deafff6 < (in_EAX & 0x4a022000)))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

