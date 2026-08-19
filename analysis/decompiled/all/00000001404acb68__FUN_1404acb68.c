// Function: FUN_1404acb68
// Addr: 1404acb68
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404acb68(byte *param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  int in_EAX;
  uint uVar3;
  byte bVar5;
  int unaff_EDI;
  bool bVar6;
  bool bVar7;
  undefined1 in_MM1_Ba;
  undefined1 in_MM1_Bb;
  undefined1 in_MM1_Bc;
  undefined1 in_MM1_Bd;
  undefined1 in_MM1_Be;
  undefined1 in_MM1_Bf;
  undefined1 in_MM1_Bg;
  undefined1 in_MM1_Bh;
  uint *puVar4;
  
  bVar5 = (byte)((ulonglong)param_2 >> 8);
  *param_1 = *param_1;
  bVar6 = CARRY1(bRam00000000ca63ffc8,bVar5);
  bRam00000000ca63ffc8 = bRam00000000ca63ffc8 + bVar5;
  bVar7 = 0xef < (byte)(cRam00000000ca640010 + 0x10U) || CARRY1(cRam00000000ca640010 + 0x20U,bVar6);
  cVar1 = cRam00000000ca640010 + 0x20U + bVar6;
  if (bVar7 || cVar1 == '\0') {
    cRam00000000ca640010 = cVar1 + '\x10';
    (&stack0x00000000)[param_2 * 2] = (&stack0x00000000)[param_2 * 2] + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cRam00000000ca640010 = cVar1 + '\x10' + bVar7;
  bVar5 = *param_1;
  *param_1 = *param_1 + (byte)unaff_EDI;
  uVar3 = (unaff_EDI + -0x11d000a) - (uint)CARRY1(bVar5,(byte)unaff_EDI);
  puVar4 = (uint *)(ulonglong)uVar3;
  uVar2 = *puVar4;
  *puVar4 = *puVar4 - uVar3;
  pavgb(in_MM1_Ba,(char)uRam000000014a0ad761);
  pavgb(in_MM1_Bb,(char)((ulonglong)uRam000000014a0ad761 >> 8));
  pavgb(in_MM1_Bc,(char)((ulonglong)uRam000000014a0ad761 >> 0x10));
  pavgb(in_MM1_Bd,(char)((ulonglong)uRam000000014a0ad761 >> 0x18));
  pavgb(in_MM1_Be,(char)((ulonglong)uRam000000014a0ad761 >> 0x20));
  pavgb(in_MM1_Bf,(char)((ulonglong)uRam000000014a0ad761 >> 0x28));
  pavgb(in_MM1_Bg,(char)((ulonglong)uRam000000014a0ad761 >> 0x30));
  pavgb(in_MM1_Bh,(char)((ulonglong)uRam000000014a0ad761 >> 0x38));
  if (SCARRY4(uVar3,in_EAX) == SCARRY4(uVar3 + in_EAX,(uint)(uVar2 < uVar3))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cRam00000000c04ad615 = cRam00000000c04ad615 + (char)(uVar3 + in_EAX) + (uVar2 < uVar3);
  return;
}

