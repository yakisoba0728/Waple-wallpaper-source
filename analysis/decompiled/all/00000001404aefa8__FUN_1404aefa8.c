// Function: FUN_1404aefa8
// Addr: 1404aefa8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aefa8(char *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  undefined8 in_RAX;
  char cVar14;
  int *unaff_RBX;
  char unaff_SPL;
  undefined7 unaff_00000021;
  char *unaff_RSI;
  ulonglong unaff_RDI;
  undefined1 in_MM1_Ba;
  undefined1 in_MM1_Bb;
  undefined1 in_MM1_Bc;
  undefined1 in_MM1_Bd;
  undefined1 in_MM1_Be;
  undefined1 in_MM1_Bf;
  undefined1 in_MM1_Bg;
  undefined1 in_MM1_Bh;
  uint *puVar12;
  char *pcVar13;
  
  cVar14 = (char)param_1;
  pavgb(in_MM1_Ba,(char)uRam00000001409afc1f);
  pavgb(in_MM1_Bb,(char)((ulonglong)uRam00000001409afc1f >> 8));
  pavgb(in_MM1_Bc,(char)((ulonglong)uRam00000001409afc1f >> 0x10));
  pavgb(in_MM1_Bd,(char)((ulonglong)uRam00000001409afc1f >> 0x18));
  pavgb(in_MM1_Be,(char)((ulonglong)uRam00000001409afc1f >> 0x20));
  pavgb(in_MM1_Bf,(char)((ulonglong)uRam00000001409afc1f >> 0x28));
  pavgb(in_MM1_Bg,(char)((ulonglong)uRam00000001409afc1f >> 0x30));
  pavgb(in_MM1_Bh,(char)((ulonglong)uRam00000001409afc1f >> 0x38));
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  bVar8 = (char)in_RAX + 2;
  puVar12 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar8);
  pbVar1 = (byte *)(CONCAT71(unaff_00000021,unaff_SPL) + (longlong)unaff_RSI * 8);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar8;
  uVar6 = (uint)CARRY1(bVar2,bVar8);
  uVar10 = *puVar12;
  uVar11 = (uint)puVar12;
  uVar3 = *puVar12;
  uVar7 = *puVar12 - uVar11;
  *puVar12 = uVar7 - uVar6;
  if (SBORROW4(uVar3,uVar11) == SBORROW4(uVar7,uVar6)) {
    uVar3 = *puVar12;
    LOCK();
    iVar4 = *unaff_RBX;
    *unaff_RBX = param_2;
    UNLOCK();
    cVar9 = (char)(unaff_RDI & 0xffffffff) + cVar14;
    pcVar13 = (char *)CONCAT71((int7)((unaff_RDI & 0xffffffff) >> 8),cVar9);
    out((short)iVar4,cVar9);
    *param_1 = *param_1 + unaff_SPL;
    *pcVar13 = *pcVar13 + cVar9;
    pcVar13[-0x79] = pcVar13[-0x79] + (char)((uint)iVar4 >> 8);
    LOCK();
    iVar5 = *unaff_RBX;
    *unaff_RBX = iVar4;
    UNLOCK();
    out((short)iVar5,bVar8 + (char)uVar3 + (uVar10 < uVar11 || uVar7 < uVar6) + cVar14);
    *param_1 = *param_1 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)puVar12 = (char)*puVar12 + bVar8;
  pbVar1 = (byte *)((longlong)puVar12 + -0x7d);
  bVar2 = *pbVar1;
  bVar8 = (byte)((uint)param_2 >> 8);
  *pbVar1 = *pbVar1 + bVar8;
  *unaff_RBX = *unaff_RBX +
               (uint)(CARRY4(uVar11,*puVar12) || CARRY4(uVar11 + *puVar12,(uint)CARRY1(bVar2,bVar8))
                     );
  uVar10 = in(0x49);
  *param_1 = *param_1 + (char)(uVar10 >> 8);
  *unaff_RSI = *unaff_RSI + cVar14;
  *(char *)(ulonglong)uVar10 = *(char *)(ulonglong)uVar10 + (char)uVar10;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

