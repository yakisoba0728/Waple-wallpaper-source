// Function: FUN_1404d096c
// Addr: 1404d096c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d096c(byte param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 in_RAX;
  byte *unaff_RBP;
  int unaff_ESI;
  bool bVar4;
  undefined1 in_MM1_Ba;
  undefined1 in_MM1_Bb;
  undefined1 in_MM1_Bc;
  undefined1 in_MM1_Bd;
  undefined1 in_MM1_Be;
  undefined1 in_MM1_Bf;
  undefined1 in_MM1_Bg;
  undefined1 in_MM1_Bh;
  byte *pbVar3;
  
  bVar2 = (char)in_RAX - 0x2c;
  pbVar3 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2);
  bVar1 = *pbVar3;
  *pbVar3 = *pbVar3 + bVar2;
  bVar4 = uRam000000018262097f < param_2;
  param_2 = uRam000000018262097f - param_2;
  uRam000000018262097f = param_2 - CARRY1(bVar1,bVar2);
  pavgb(in_MM1_Ba,(char)uRam000000014a0d154f);
  pavgb(in_MM1_Bb,(char)((ulonglong)uRam000000014a0d154f >> 8));
  pavgb(in_MM1_Bc,(char)((ulonglong)uRam000000014a0d154f >> 0x10));
  pavgb(in_MM1_Bd,(char)((ulonglong)uRam000000014a0d154f >> 0x18));
  pavgb(in_MM1_Be,(char)((ulonglong)uRam000000014a0d154f >> 0x20));
  pavgb(in_MM1_Bf,(char)((ulonglong)uRam000000014a0d154f >> 0x28));
  pavgb(in_MM1_Bg,(char)((ulonglong)uRam000000014a0d154f >> 0x30));
  pavgb(in_MM1_Bh,(char)((ulonglong)uRam000000014a0d154f >> 0x38));
  if (SCARRY4((int)pbVar3,unaff_ESI) ==
      SCARRY4((int)pbVar3 + unaff_ESI,(uint)(bVar4 || param_2 < CARRY1(bVar1,bVar2)))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RBP = *unaff_RBP | param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

