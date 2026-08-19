// Function: FUN_1404ba578
// Addr: 1404ba578
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_1404ba578(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  int in_EAX;
  byte unaff_BH;
  undefined8 *puVar4;
  undefined8 *unaff_RBP;
  int unaff_ESI;
  char *unaff_RDI;
  byte in_CF;
  undefined1 in_MM1_Ba;
  undefined1 in_MM1_Bb;
  undefined1 in_MM1_Bc;
  undefined1 in_MM1_Bd;
  undefined1 in_MM1_Be;
  undefined1 in_MM1_Bf;
  undefined1 in_MM1_Bg;
  undefined1 in_MM1_Bh;
  undefined8 uStack_10;
  
  pavgb(in_MM1_Ba,(char)uRam000000014a0bb151);
  pavgb(in_MM1_Bb,(char)((ulonglong)uRam000000014a0bb151 >> 8));
  pavgb(in_MM1_Bc,(char)((ulonglong)uRam000000014a0bb151 >> 0x10));
  pavgb(in_MM1_Bd,(char)((ulonglong)uRam000000014a0bb151 >> 0x18));
  pavgb(in_MM1_Be,(char)((ulonglong)uRam000000014a0bb151 >> 0x20));
  pavgb(in_MM1_Bf,(char)((ulonglong)uRam000000014a0bb151 >> 0x28));
  pavgb(in_MM1_Bg,(char)((ulonglong)uRam000000014a0bb151 >> 0x30));
  pavgb(in_MM1_Bh,(char)((ulonglong)uRam000000014a0bb151 >> 0x38));
  if (SCARRY4(in_EAX,unaff_ESI) == SCARRY4(in_EAX + unaff_ESI,(uint)in_CF)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *unaff_RDI + (char)((ulonglong)param_1 >> 8);
  puVar4 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar2 = '\b';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar4 = puVar4 + -1;
    *puVar4 = *unaff_RBP;
    cVar2 = cVar2 + -1;
  } while ('\0' < cVar2);
  bVar3 = bRam00000000a8230007 | 7;
  pbVar1 = (byte *)(CONCAT71(0xa82300,bVar3) + 0xb);
  bRam00000000a8230007 = bRam00000000a8230007 | 7;
  *pbVar1 = *pbVar1 | unaff_BH;
  return CONCAT71(0xa82300,bVar3 + (char)((ulonglong)param_2 >> 8));
}

