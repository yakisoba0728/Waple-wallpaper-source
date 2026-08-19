// Function: FUN_1404a6598
// Addr: 1404a6598
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6598(byte *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined3 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined8 in_RAX;
  char *pcVar9;
  char unaff_BL;
  char cVar11;
  char unaff_SPL;
  int unaff_ESI;
  byte *unaff_RDI;
  undefined1 in_MM1_Ba;
  undefined1 in_MM1_Bb;
  undefined1 in_MM1_Bc;
  undefined1 in_MM1_Bd;
  undefined1 in_MM1_Be;
  undefined1 in_MM1_Bf;
  undefined1 in_MM1_Bg;
  undefined1 in_MM1_Bh;
  uint *puVar10;
  
  uVar5 = (uint)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                         CONCAT11((char)((ulonglong)in_RAX >> 8) * '\x02',(char)in_RAX)) | 0x93ed000
  ;
  cVar11 = unaff_BL + (char)(uVar5 >> 8);
  *(uint *)(ulonglong)uVar5 = *(uint *)(ulonglong)uVar5 | uVar5;
  pcVar9 = (char *)((ulonglong)uVar5 ^ 0x12);
  *param_1 = *param_1 + unaff_SPL;
  *pcVar9 = *pcVar9 + (char)pcVar9;
  uVar3 = (undefined3)(uVar5 >> 8);
  cVar4 = (char)pcVar9 + (byte)param_2;
  uVar5 = CONCAT31(uVar3,cVar4);
  puVar10 = (uint *)(ulonglong)uVar5;
  *puVar10 = *puVar10 | uVar5;
  if (param_1 == (byte *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar10 = *puVar10 | uVar5;
  uVar8 = CONCAT31(uVar3,cVar4) ^ 0x12;
  bVar1 = *param_1;
  *param_1 = *param_1 + (byte)uVar8;
  uVar5 = (uint)CARRY1(bVar1,(byte)uVar8);
  uVar6 = (uVar8 + 0xfee2fff6) - uVar5;
  uVar5 = (uint)(uVar8 < 0x11d000a || uVar8 + 0xfee2fff6 < uVar5);
  uVar8 = uVar6 + *(uint *)(ulonglong)uVar6;
  iVar7 = uVar8 + uVar5;
  uVar5 = (uint)(CARRY4(uVar6,*(uint *)(ulonglong)uVar6) || CARRY4(uVar8,uVar5));
  iVar2 = iVar7 + unaff_ESI;
  uVar8 = iVar2 + uVar5;
  pavgb(in_MM1_Ba,(char)uRam000000014a0a7199);
  pavgb(in_MM1_Bb,(char)((ulonglong)uRam000000014a0a7199 >> 8));
  pavgb(in_MM1_Bc,(char)((ulonglong)uRam000000014a0a7199 >> 0x10));
  pavgb(in_MM1_Bd,(char)((ulonglong)uRam000000014a0a7199 >> 0x18));
  pavgb(in_MM1_Be,(char)((ulonglong)uRam000000014a0a7199 >> 0x20));
  pavgb(in_MM1_Bf,(char)((ulonglong)uRam000000014a0a7199 >> 0x28));
  pavgb(in_MM1_Bg,(char)((ulonglong)uRam000000014a0a7199 >> 0x30));
  pavgb(in_MM1_Bh,(char)((ulonglong)uRam000000014a0a7199 >> 0x38));
  if (SCARRY4(iVar7,unaff_ESI) == SCARRY4(iVar2,uVar5)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + cVar11;
  *(int *)unaff_RDI = *(int *)unaff_RDI + param_2;
  cRam000000014a2a71cd = cRam000000014a2a71cd + (char)param_1;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  param_1[CONCAT31((int3)(uVar8 >> 8),
                   ((char)uVar8 + -10) - CARRY1((byte)param_2,*(byte *)((ulonglong)uVar8 + 1)))] =
       param_1[CONCAT31((int3)(uVar8 >> 8),
                        ((char)uVar8 + -10) - CARRY1((byte)param_2,*(byte *)((ulonglong)uVar8 + 1)))
              ] + cVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

