// Function: FUN_1404c9448
// Addr: 1404c9448
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9448(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  uint in_EAX;
  uint uVar3;
  int unaff_ESI;
  bool bVar5;
  undefined1 in_MM1_Ba;
  undefined1 in_MM1_Bb;
  undefined1 in_MM1_Bc;
  undefined1 in_MM1_Bd;
  undefined1 in_MM1_Be;
  undefined1 in_MM1_Bf;
  undefined1 in_MM1_Bg;
  undefined1 in_MM1_Bh;
  uint *puVar4;
  
  bVar1 = *param_1;
  *param_1 = *param_1 + (byte)in_EAX;
  uVar2 = (uint)CARRY1(bVar1,(byte)in_EAX);
  uVar3 = (in_EAX + 0xfee2fff6) - uVar2;
  puVar4 = (uint *)(ulonglong)uVar3;
  uVar2 = (uint)(in_EAX < 0x11d000a || in_EAX + 0xfee2fff6 < uVar2);
  bVar5 = CARRY4(*puVar4,uVar3) || CARRY4(*puVar4 + uVar3,uVar2);
  *puVar4 = *puVar4 + uVar3 + uVar2;
  pavgb(in_MM1_Ba,(char)uRam000000014a0ca02d);
  pavgb(in_MM1_Bb,(char)((ulonglong)uRam000000014a0ca02d >> 8));
  pavgb(in_MM1_Bc,(char)((ulonglong)uRam000000014a0ca02d >> 0x10));
  pavgb(in_MM1_Bd,(char)((ulonglong)uRam000000014a0ca02d >> 0x18));
  pavgb(in_MM1_Be,(char)((ulonglong)uRam000000014a0ca02d >> 0x20));
  pavgb(in_MM1_Bf,(char)((ulonglong)uRam000000014a0ca02d >> 0x28));
  pavgb(in_MM1_Bg,(char)((ulonglong)uRam000000014a0ca02d >> 0x30));
  pavgb(in_MM1_Bh,(char)((ulonglong)uRam000000014a0ca02d >> 0x38));
  if (SCARRY4(uVar3,unaff_ESI) == SCARRY4(uVar3 + unaff_ESI,(uint)bVar5)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cRam00000001104c9ae1 = cRam00000001104c9ae1 + (char)(uVar3 + unaff_ESI) + bVar5;
  return;
}

