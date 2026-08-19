// Function: FUN_1404c9438
// Addr: 1404c9438
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9438(byte *param_1,char param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint *in_RAX;
  int unaff_ESI;
  bool bVar6;
  undefined1 in_MM1_Ba;
  undefined1 in_MM1_Bb;
  undefined1 in_MM1_Bc;
  undefined1 in_MM1_Bd;
  undefined1 in_MM1_Be;
  undefined1 in_MM1_Bf;
  undefined1 in_MM1_Bg;
  undefined1 in_MM1_Bh;
  uint *puVar5;
  
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  bVar2 = (byte)in_RAX;
  *(byte *)in_RAX = (char)*in_RAX + bVar2;
  *(char *)in_RAX = (char)*in_RAX + param_2;
  uVar3 = (uint)in_RAX;
  *in_RAX = *in_RAX ^ uVar3;
  bVar1 = *param_1;
  *param_1 = *param_1 + bVar2;
  uVar4 = (uVar3 + 0xfee2fff6) - (uint)CARRY1(bVar1,bVar2);
  puVar5 = (uint *)(ulonglong)uVar4;
  uVar3 = (uint)(uVar3 < 0x11d000a || uVar3 + 0xfee2fff6 < (uint)CARRY1(bVar1,bVar2));
  bVar6 = CARRY4(*puVar5,uVar4) || CARRY4(*puVar5 + uVar4,uVar3);
  *puVar5 = *puVar5 + uVar4 + uVar3;
  pavgb(in_MM1_Ba,(char)uRam000000014a0ca02d);
  pavgb(in_MM1_Bb,(char)((ulonglong)uRam000000014a0ca02d >> 8));
  pavgb(in_MM1_Bc,(char)((ulonglong)uRam000000014a0ca02d >> 0x10));
  pavgb(in_MM1_Bd,(char)((ulonglong)uRam000000014a0ca02d >> 0x18));
  pavgb(in_MM1_Be,(char)((ulonglong)uRam000000014a0ca02d >> 0x20));
  pavgb(in_MM1_Bf,(char)((ulonglong)uRam000000014a0ca02d >> 0x28));
  pavgb(in_MM1_Bg,(char)((ulonglong)uRam000000014a0ca02d >> 0x30));
  pavgb(in_MM1_Bh,(char)((ulonglong)uRam000000014a0ca02d >> 0x38));
  if (SCARRY4(uVar4,unaff_ESI) == SCARRY4(uVar4 + unaff_ESI,(uint)bVar6)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cRam00000001104c9ae1 = cRam00000001104c9ae1 + (char)(uVar4 + unaff_ESI) + bVar6;
  return;
}

