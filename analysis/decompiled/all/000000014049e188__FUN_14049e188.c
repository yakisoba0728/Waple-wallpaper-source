// Function: FUN_14049e188
// Addr: 14049e188
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014049e1ad) */
/* WARNING: Removing unreachable block (ram,0x00014049e1b9) */
/* WARNING: Removing unreachable block (ram,0x00014049e1bd) */
/* WARNING: Removing unreachable block (ram,0x00014049e1c7) */
/* WARNING: Removing unreachable block (ram,0x00014049e1cf) */

void FUN_14049e188(byte *param_1,byte *param_2)

{
  int iVar1;
  byte bVar2;
  int in_EAX;
  int iVar3;
  char *unaff_RSI;
  byte in_CF;
  undefined1 in_MM1_Ba;
  undefined1 in_MM1_Bb;
  undefined1 in_MM1_Bc;
  undefined1 in_MM1_Bd;
  undefined1 in_MM1_Be;
  undefined1 in_MM1_Bf;
  undefined1 in_MM1_Bg;
  undefined1 in_MM1_Bh;
  
  iVar1 = in_EAX + (int)unaff_RSI;
  iVar3 = iVar1 + (uint)in_CF;
  pavgb(in_MM1_Ba,(char)uRam000000014a09ed61);
  pavgb(in_MM1_Bb,(char)((ulonglong)uRam000000014a09ed61 >> 8));
  pavgb(in_MM1_Bc,(char)((ulonglong)uRam000000014a09ed61 >> 0x10));
  pavgb(in_MM1_Bd,(char)((ulonglong)uRam000000014a09ed61 >> 0x18));
  pavgb(in_MM1_Be,(char)((ulonglong)uRam000000014a09ed61 >> 0x20));
  pavgb(in_MM1_Bf,(char)((ulonglong)uRam000000014a09ed61 >> 0x28));
  pavgb(in_MM1_Bg,(char)((ulonglong)uRam000000014a09ed61 >> 0x30));
  pavgb(in_MM1_Bh,(char)((ulonglong)uRam000000014a09ed61 >> 0x38));
  if (SCARRY4(in_EAX,(int)unaff_RSI) != SCARRY4(iVar1,(uint)in_CF)) {
    bVar2 = (byte)iVar3;
    *unaff_RSI = *unaff_RSI + bVar2;
    bVar2 = bVar2 ^ *param_2;
    *param_1 = *param_1 ^ bVar2;
    uRam00000001460beaa7 = uRam00000001460beaa7 | CONCAT31((int3)((uint)iVar3 >> 8),bVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

