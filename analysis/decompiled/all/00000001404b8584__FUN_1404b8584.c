// Function: FUN_1404b8584
// Addr: 1404b8584
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b8584(uint *param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *in_RAX;
  uint unaff_ESI;
  char *unaff_RDI;
  byte in_CF;
  bool bVar9;
  undefined1 in_MM1_Ba;
  undefined1 in_MM1_Bb;
  undefined1 in_MM1_Bc;
  undefined1 in_MM1_Bd;
  undefined1 in_MM1_Be;
  undefined1 in_MM1_Bf;
  undefined1 in_MM1_Bg;
  undefined1 in_MM1_Bh;
  undefined1 auStack_8 [8];
  uint *puVar8;
  
  bVar9 = CARRY4(*in_RAX,unaff_ESI) || CARRY4(*in_RAX + unaff_ESI,(uint)in_CF);
  *in_RAX = *in_RAX + unaff_ESI + (uint)in_CF;
  pbVar1 = (byte *)((longlong)in_RAX + 1);
  bVar2 = *pbVar1;
  bVar3 = *pbVar1 + (byte)param_2;
  *pbVar1 = bVar3 + bVar9;
  uVar4 = (uint)(CARRY1(bVar2,(byte)param_2) || CARRY1(bVar3,bVar9));
  uVar7 = (uint)in_RAX + 0xfee2fff6;
  uVar6 = uVar7 - uVar4;
  puVar8 = (uint *)(ulonglong)uVar6;
  uVar5 = (uint)((uint)in_RAX < 0x11d000a || uVar7 < uVar4);
  uVar4 = *puVar8;
  uVar7 = *puVar8;
  *puVar8 = (uVar7 - uVar6) - uVar5;
  uVar4 = (uint)(uVar4 < uVar6 || uVar7 - uVar6 < uVar5);
  uVar7 = uVar6 + unaff_ESI + uVar4;
  pavgb(in_MM1_Ba,(char)uRam000000014a0b9169);
  pavgb(in_MM1_Bb,(char)((ulonglong)uRam000000014a0b9169 >> 8));
  pavgb(in_MM1_Bc,(char)((ulonglong)uRam000000014a0b9169 >> 0x10));
  pavgb(in_MM1_Bd,(char)((ulonglong)uRam000000014a0b9169 >> 0x18));
  pavgb(in_MM1_Be,(char)((ulonglong)uRam000000014a0b9169 >> 0x20));
  pavgb(in_MM1_Bf,(char)((ulonglong)uRam000000014a0b9169 >> 0x28));
  pavgb(in_MM1_Bg,(char)((ulonglong)uRam000000014a0b9169 >> 0x30));
  pavgb(in_MM1_Bh,(char)((ulonglong)uRam000000014a0b9169 >> 0x38));
  if (SCARRY4(uVar6,unaff_ESI) == SCARRY4(uVar6 + unaff_ESI,uVar4)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *unaff_RDI + (char)uVar7;
  *(char *)(ulonglong)uVar7 = *(char *)(ulonglong)uVar7 + (char)uVar7;
  *param_1 = *param_1 & (uint)auStack_8;
  *(uint *)(param_2 + (longlong)param_1) = *(uint *)(param_2 + (longlong)param_1) & (uint)auStack_8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

