// Function: FUN_1404acb3c
// Addr: 1404acb3c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404acb3c(byte *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  uint in_EAX;
  uint uVar4;
  uint uVar5;
  char cVar8;
  byte bVar9;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  int unaff_EDI;
  bool bVar10;
  bool bVar11;
  undefined1 in_MM1_Ba;
  undefined1 in_MM1_Bb;
  undefined1 in_MM1_Bc;
  undefined1 in_MM1_Bd;
  undefined1 in_MM1_Be;
  undefined1 in_MM1_Bf;
  undefined1 in_MM1_Bg;
  undefined1 in_MM1_Bh;
  byte *pbVar6;
  uint *puVar7;
  
  bVar9 = (byte)((ulonglong)param_2 >> 8);
  cVar8 = (char)((ulonglong)param_1 >> 8);
  cRam00000000b8760010 = cRam00000000b8760010 + '\x10' + (0x8ffff9cb < in_EAX);
  *param_1 = *param_1;
  uVar4 = unaff_EDI + 0x74050002;
  pbVar6 = (byte *)(ulonglong)uVar4;
  bVar3 = (byte)uVar4;
  *pbVar6 = *pbVar6 | bVar3;
  if (*pbVar6 == 0) {
    *pbVar6 = *pbVar6 + bVar3;
    uRam000000006eca0020 = unaff_BL;
    *param_1 = *param_1 + bVar3;
    *(int *)CONCAT71(unaff_00000019,unaff_BL) =
         *(int *)CONCAT71(unaff_00000019,unaff_BL) - (int)param_1;
    *param_1 = *param_1 + cVar8;
    *param_1 = *param_1 + cVar8;
    *param_2 = *param_2 + (int)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar6 = *pbVar6 + bVar3;
  *param_1 = *param_1;
  cRam00000000ca640010 = cRam00000000ca640010 + '\x10';
  pbVar6 = (byte *)((ulonglong)uVar4 - 0x48);
  bVar3 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar9;
  cRam00000000ca640010 = cRam00000000ca640010 + '\x10' + CARRY1(bVar3,bVar9);
  *param_1 = *param_1;
  bVar10 = CARRY1(bRam00000000ca63ffc8,bVar9);
  bRam00000000ca63ffc8 = bRam00000000ca63ffc8 + bVar9;
  bVar11 = 0xef < (byte)(cRam00000000ca640010 + 0x10U);
  bVar3 = cRam00000000ca640010 + 0x20;
  bVar2 = CARRY1(bVar3,bVar10);
  cVar8 = bVar3 + bVar10;
  if ((!bVar11 && !bVar2) && cVar8 != '\0') {
    cRam00000000ca640010 = cVar8 + '\x10' + (bVar11 || bVar2);
    bVar3 = *param_1;
    *param_1 = *param_1 + 0x10;
    uVar5 = -(uint)(0xef < bVar3) + 0xb7590006;
    puVar7 = (uint *)(ulonglong)uVar5;
    uVar4 = *puVar7;
    *puVar7 = *puVar7 - uVar5;
    iVar1 = -(uint)(0xef < bVar3) + -0x7e42ffea;
    pavgb(in_MM1_Ba,(char)uRam000000014a0ad761);
    pavgb(in_MM1_Bb,(char)((ulonglong)uRam000000014a0ad761 >> 8));
    pavgb(in_MM1_Bc,(char)((ulonglong)uRam000000014a0ad761 >> 0x10));
    pavgb(in_MM1_Bd,(char)((ulonglong)uRam000000014a0ad761 >> 0x18));
    pavgb(in_MM1_Be,(char)((ulonglong)uRam000000014a0ad761 >> 0x20));
    pavgb(in_MM1_Bf,(char)((ulonglong)uRam000000014a0ad761 >> 0x28));
    pavgb(in_MM1_Bg,(char)((ulonglong)uRam000000014a0ad761 >> 0x30));
    pavgb(in_MM1_Bh,(char)((ulonglong)uRam000000014a0ad761 >> 0x38));
    if (SCARRY4(uVar5,-0x359bfff0) == SCARRY4(iVar1,(uint)(uVar4 < uVar5))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    cRam00000000c04ad615 = cRam00000000c04ad615 + (char)iVar1 + (uVar4 < uVar5);
    return;
  }
  cRam00000000ca640010 = cVar8 + '\x10';
  (&stack0x00000000)[(longlong)param_2 * 2] =
       (&stack0x00000000)[(longlong)param_2 * 2] + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

