// Function: FUN_1404c92a0
// Addr: 1404c92a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c92a0(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint *in_RAX;
  uint *puVar6;
  char *pcVar7;
  char *pcVar8;
  byte *pbVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  undefined1 uVar14;
  byte bVar15;
  undefined6 uVar16;
  byte unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  uVar16 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar15 = (byte)((ulonglong)param_2 >> 8);
  uVar13 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar12 = (undefined2)((ulonglong)param_1 >> 0x10);
  uVar11 = (undefined1)((ulonglong)param_1 >> 8);
  uVar10 = (undefined1)param_1;
  *in_RAX = *in_RAX & (uint)param_1;
  puVar6 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + (char)*in_RAX);
  unaff_RDI[param_2] = unaff_RDI[param_2] | bVar15;
  *(char *)((longlong)puVar6 + -0x4e) =
       *(char *)((longlong)puVar6 + -0x4e) + (char)((ulonglong)in_RAX >> 8);
  *puVar6 = *puVar6 ^ (uint)puVar6;
  *puVar6 = *puVar6 ^ (uint)puVar6;
  uVar3 = _uRam0000000021004c91;
  _uRam0000000021004c91 = CONCAT31(ram0x21004c92,(char)uRam0000000021004c91 + -0x6f);
  uVar4 = _uRam0000000021004c91;
  cRam0000000021004c43 = cRam0000000021004c43 + 'L';
  uVar14 = 0xb2;
  unaff_RSI[(longlong)&stack0x00000000] = unaff_RSI[(longlong)&stack0x00000000] + -0x6d;
  uRam0000000021004c91._2_1_ = SUB41(uVar3,2);
  uRam0000000021004c91._2_1_ = uRam0000000021004c91._2_1_ + -0x6d;
  uRam0000000021004c94 = SUB41(uVar3,3);
  uRam0000000021004c91._0_2_ = (undefined2)uVar4;
  unaff_RSI[param_1 + 0x31b52100] = unaff_RSI[param_1 + 0x31b52100];
  puVar2 = unaff_RSI + 1;
  *unaff_RDI = *unaff_RSI;
  pcVar7 = (char *)func_0x0001406d9323();
  *pcVar7 = *pcVar7 + (char)pcVar7;
  puVar2[CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(uVar11,uVar10))) + 0x31b52100] =
       puVar2[CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(uVar11,uVar10))) + 0x31b52100];
  unaff_RDI[1] = *puVar2;
  pcVar8 = (char *)func_0x0001406d9333();
  cVar5 = (char)pcVar8 + *pcVar8;
  pcVar7 = (char *)(CONCAT71((int7)((ulonglong)pcVar8 >> 8),cVar5) * 2);
  *pcVar7 = *pcVar7 + bVar15;
  bVar1 = cVar5 * '\x02';
  pbVar9 = (byte *)CONCAT62((int6)((ulonglong)pcVar8 >> 0x10),CONCAT11(0x31,bVar1));
  *(char *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(uVar11,uVar10))) =
       *(char *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(uVar11,uVar10))) + '1';
  pbVar9[unaff_RBP * 8 + 0x18010049] = pbVar9[unaff_RBP * 8 + 0x18010049] + 0x31;
  pbVar9 = (byte *)CONCAT71((int7)((ulonglong)pbVar9 >> 8),bVar1 | *pbVar9);
  pcVar7 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + CONCAT62(uVar16,CONCAT11(bVar15,uVar14)));
  *pcVar7 = *pcVar7 - bVar15;
  bVar1 = *pbVar9;
  *pbVar9 = *pbVar9 + unaff_BL;
  if (!CARRY1(bVar1,unaff_BL)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

