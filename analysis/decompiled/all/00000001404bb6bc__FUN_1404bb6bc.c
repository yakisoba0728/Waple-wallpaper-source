// Function: FUN_1404bb6bc
// Addr: 1404bb6bc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bb6bc(undefined8 param_1,byte param_2)

{
  uint uVar1;
  uint *in_RAX;
  int unaff_EBX;
  int unaff_ESI;
  undefined1 in_MM1_Ba;
  undefined1 in_MM1_Bb;
  undefined1 in_MM1_Bc;
  undefined1 in_MM1_Bd;
  undefined1 in_MM1_Be;
  undefined1 in_MM1_Bf;
  undefined1 in_MM1_Bg;
  undefined1 in_MM1_Bh;
  
  *in_RAX = *in_RAX + unaff_EBX;
  uVar1 = (uint)in_RAX;
  *in_RAX = *in_RAX | uVar1;
  pavgb(in_MM1_Ba,(char)uRam000000014a0bc29b);
  pavgb(in_MM1_Bb,(char)((ulonglong)uRam000000014a0bc29b >> 8));
  pavgb(in_MM1_Bc,(char)((ulonglong)uRam000000014a0bc29b >> 0x10));
  pavgb(in_MM1_Bd,(char)((ulonglong)uRam000000014a0bc29b >> 0x18));
  pavgb(in_MM1_Be,(char)((ulonglong)uRam000000014a0bc29b >> 0x20));
  pavgb(in_MM1_Bf,(char)((ulonglong)uRam000000014a0bc29b >> 0x28));
  pavgb(in_MM1_Bg,(char)((ulonglong)uRam000000014a0bc29b >> 0x30));
  pavgb(in_MM1_Bh,(char)((ulonglong)uRam000000014a0bc29b >> 0x38));
  if (SCARRY4(uVar1,unaff_ESI) == SCARRY4(uVar1 + unaff_ESI,(uint)(param_2 < (byte)in_RAX))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

