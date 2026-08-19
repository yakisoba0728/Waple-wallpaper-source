// Function: FUN_1404b05e4
// Addr: 1404b05e4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b05e4(char *param_1,byte *param_2,char *param_3,char *param_4)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  char cVar8;
  undefined8 in_RAX;
  undefined7 uVar9;
  char *pcVar7;
  byte bVar10;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RSI;
  bool bVar11;
  undefined1 in_MM1_Ba;
  undefined1 in_MM1_Bb;
  undefined1 in_MM1_Bc;
  undefined1 in_MM1_Bd;
  undefined1 in_MM1_Be;
  undefined1 in_MM1_Bf;
  undefined1 in_MM1_Bg;
  undefined1 in_MM1_Bh;
  char *pcVar6;
  
  bVar10 = (byte)((ulonglong)param_2 >> 8);
  pcVar7 = unaff_RSI + 1;
  uVar9 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar2 = *unaff_RSI + 'K';
  pcVar6 = (char *)CONCAT71(uVar9,cVar2);
  cVar8 = (char)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + cVar8;
  *pcVar7 = *pcVar7 + (byte)param_1;
  *pcVar6 = *pcVar6 + cVar2;
  if (-1 < *pcVar6) {
    *pcVar6 = *pcVar6 + cVar2;
    *param_3 = *param_3 + cVar2;
    cVar2 = in(0x4c);
    pcVar7 = (char *)CONCAT71(uVar9,cVar2);
    *pcVar7 = *pcVar7 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4 + cVar2;
  *param_2 = *param_2 & (byte)param_1;
  *pcVar6 = *pcVar6 + cVar8;
  uVar5 = *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (uint)param_1;
  uVar5 = (uint)CARRY4(uVar5,(uint)param_1);
  iVar1 = (int)pcVar6 + (int)pcVar7;
  iVar4 = iVar1 + uVar5;
  pavgb(in_MM1_Ba,(char)uRam000000014a0b11f5);
  pavgb(in_MM1_Bb,(char)((ulonglong)uRam000000014a0b11f5 >> 8));
  pavgb(in_MM1_Bc,(char)((ulonglong)uRam000000014a0b11f5 >> 0x10));
  pavgb(in_MM1_Bd,(char)((ulonglong)uRam000000014a0b11f5 >> 0x18));
  pavgb(in_MM1_Be,(char)((ulonglong)uRam000000014a0b11f5 >> 0x20));
  pavgb(in_MM1_Bf,(char)((ulonglong)uRam000000014a0b11f5 >> 0x28));
  pavgb(in_MM1_Bg,(char)((ulonglong)uRam000000014a0b11f5 >> 0x30));
  pavgb(in_MM1_Bh,(char)((ulonglong)uRam000000014a0b11f5 >> 0x38));
  if (SCARRY4((int)pcVar6,(int)pcVar7) == SCARRY4(iVar1,uVar5)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar3 = (byte)iVar4;
  bVar11 = CARRY1(bRam00000001704b0c99,bVar3);
  bRam00000001704b0c99 = bRam00000001704b0c99 + bVar3;
  if (bVar11) {
    unaff_RSI[-0x6bffea8c] = unaff_RSI[-0x6bffea8c] + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar5 = iVar4 + 0x21004b;
  uVar5 = CONCAT22((short)(uVar5 >> 0x10),
                   CONCAT11((char)(uVar5 >> 8) * '\x02' + (char)param_2,
                            (byte)uVar5 | *(byte *)(ulonglong)uVar5));
  uVar5 = uVar5 | *(uint *)(ulonglong)uVar5;
  param_2[(longlong)param_1] = param_2[(longlong)param_1] + bVar10;
  *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) + (char)(uVar5 >> 8);
  param_1[uVar5] = param_1[uVar5] + bVar10;
  cRam0000000155cbfee4 = cRam0000000155cbfee4 + CARRY1((byte)uVar5,bVar10);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

