// Function: FUN_1404a8944
// Addr: 1404a8944
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a895b) overlaps instruction at (ram,0x0001404a895a)
    */

void FUN_1404a8944(longlong param_1,longlong param_2,byte *param_3)

{
  undefined3 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 in_RAX;
  uint *puVar7;
  byte bVar9;
  undefined6 uVar10;
  byte *pbVar8;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined1 *unaff_RSI;
  uint *unaff_RDI;
  undefined1 in_MM1_Ba;
  undefined1 in_MM1_Bb;
  undefined1 in_MM1_Bc;
  undefined1 in_MM1_Bd;
  undefined1 in_MM1_Be;
  undefined1 in_MM1_Bf;
  undefined1 in_MM1_Bg;
  undefined1 in_MM1_Bh;
  char *unaff_retaddr;
  char *pcVar6;
  
  uVar3 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((char)((ulonglong)in_RAX >> 8) + (char)param_2,(char)in_RAX)) +
          0x6c40000;
  pcVar6 = (char *)(ulonglong)uVar3;
  *pcVar6 = *pcVar6 + (char)uVar3;
  if (*pcVar6 != '\0') {
    *pcVar6 = *pcVar6 + (char)uVar3;
    *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + (char)param_2;
    *(undefined1 *)unaff_RDI = *unaff_RSI;
    *(undefined1 *)((longlong)unaff_RDI + 1) = unaff_RSI[1];
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar6[-0xffff45c] = pcVar6[-0xffff45c] + unaff_BL;
  *unaff_retaddr = *unaff_retaddr + '\b';
  *param_3 = *param_3 | (byte)param_3;
  uVar1 = (undefined3)(uVar3 >> 8);
  cVar2 = in(5);
  pcVar6 = (char *)((ulonglong)CONCAT31(uVar1,cVar2) + 100);
  *pcVar6 = *pcVar6 + cVar2;
  uVar3 = CONCAT31(uVar1,cVar2) | 0x5000354;
  puVar7 = (uint *)((ulonglong)uVar3 ^ 2);
  *(char *)puVar7 = (char)*puVar7 + (char)(uVar3 >> 8);
  *unaff_RDI = (uint)puVar7;
  uVar4 = (uint)puVar7 | *puVar7;
  puVar7 = (uint *)(ulonglong)uVar4;
  uVar10 = (undefined6)((ulonglong)unaff_retaddr >> 0x10);
  cVar2 = (char)unaff_retaddr;
  bVar9 = (byte)((ulonglong)unaff_retaddr >> 8) &
          *(byte *)(CONCAT71(unaff_00000019,unaff_BL) + 0x6784000b);
  pcVar6 = (char *)CONCAT62(uVar10,CONCAT11(bVar9,cVar2));
  *pcVar6 = *pcVar6 + '\b';
  *(char *)puVar7 = (char)*puVar7 + (char)uVar4;
  *(char *)puVar7 = (char)*puVar7 + (char)(uVar4 >> 8);
  unaff_RDI[1] = uVar4;
  uVar4 = uVar4 | *puVar7;
  pbVar8 = (byte *)CONCAT62(uVar10,CONCAT11(bVar9 & *(byte *)(CONCAT71(unaff_00000019,unaff_BL) +
                                                             0x6784000b),cVar2));
  bVar9 = *pbVar8;
  *pbVar8 = *pbVar8 + (byte)uVar4;
  uVar3 = (uint)CARRY1(bVar9,(byte)uVar4);
  iVar5 = uVar4 + 0xa2150009 + uVar3;
  pavgb(in_MM1_Ba,(char)uRam000000014a0a9573);
  pavgb(in_MM1_Bb,(char)((ulonglong)uRam000000014a0a9573 >> 8));
  pavgb(in_MM1_Bc,(char)((ulonglong)uRam000000014a0a9573 >> 0x10));
  pavgb(in_MM1_Bd,(char)((ulonglong)uRam000000014a0a9573 >> 0x18));
  pavgb(in_MM1_Be,(char)((ulonglong)uRam000000014a0a9573 >> 0x20));
  pavgb(in_MM1_Bf,(char)((ulonglong)uRam000000014a0a9573 >> 0x28));
  pavgb(in_MM1_Bg,(char)((ulonglong)uRam000000014a0a9573 >> 0x30));
  pavgb(in_MM1_Bh,(char)((ulonglong)uRam000000014a0a9573 >> 0x38));
  if (SCARRY4(iVar5,(int)unaff_RSI) ==
      SCARRY4(iVar5 + (int)unaff_RSI,(uint)(0x5deafff6 < uVar4 || CARRY4(uVar4 + 0xa2150009,uVar3)))
     ) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RDI + 2) = (char)unaff_RDI[2] + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

