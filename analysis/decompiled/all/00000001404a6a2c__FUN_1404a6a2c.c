// Function: FUN_1404a6a2c
// Addr: 1404a6a2c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a69f9) overlaps instruction at (ram,0x0001404a69f5)
    */
/* WARNING: Removing unreachable block (ram,0xf04a7357) */

void FUN_1404a6a2c(char *param_1,longlong param_2)

{
  uint uVar1;
  undefined3 uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  char cVar8;
  uint *puVar6;
  uint *in_RAX;
  undefined7 uVar9;
  char *pcVar7;
  char cVar10;
  char unaff_SPL;
  undefined7 unaff_00000021;
  uint unaff_EBP;
  char *unaff_RSI;
  char *unaff_RDI;
  bool in_SF;
  
  cVar10 = (char)((ulonglong)param_2 >> 8);
  if (!in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_RAX = *in_RAX | (uint)in_RAX;
  *param_1 = *param_1 + unaff_SPL;
  pcVar7 = (char *)(((ulonglong)in_RAX ^ 0x69) * 2);
  cVar4 = (char)((ulonglong)in_RAX ^ 0x69);
  *pcVar7 = *pcVar7 + cVar4;
  cVar8 = (char)((ulonglong)in_RAX >> 8) + cVar10;
  pcVar7 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar8,cVar4));
  *pcVar7 = *pcVar7 + cVar4;
  uVar9 = (undefined7)((ulonglong)pcVar7 >> 8);
  puVar6 = (uint *)(CONCAT71(uVar9,cVar4) ^ 0x2d);
  *(char *)(param_2 + -0x61) = *(char *)(param_2 + -0x61) + cVar10;
  uVar5 = (uint)puVar6;
  *puVar6 = *puVar6 | uVar5;
  if (-1 < (int)*puVar6) {
    uVar5 = uVar5 + 0x9998000;
    *(char *)(param_2 + -0x66) = *(char *)(param_2 + -0x66) + (char)param_1;
    *(uint *)(ulonglong)uVar5 = *(uint *)(ulonglong)uVar5 | uVar5;
    cVar10 = cRam1200051201004a68;
    uVar2 = (undefined3)(uVar5 >> 8);
    puVar6 = (uint *)(ulonglong)CONCAT31(uVar2,cRam1200051201004a68);
    uVar1 = *puVar6;
    *puVar6 = *puVar6 + unaff_EBP;
    bVar3 = cVar10 + cRam00000001684b7bfb + CARRY4(uVar1,unaff_EBP);
    uVar1 = CONCAT31(uVar2,bVar3);
    puVar6 = (uint *)(ulonglong)uVar1;
    *unaff_RDI = *unaff_RDI + bVar3;
    *(uint *)(param_2 + (longlong)puVar6) = *(uint *)(param_2 + (longlong)puVar6) & uVar1;
    *(byte *)CONCAT71(unaff_00000021,unaff_SPL) =
         *(char *)CONCAT71(unaff_00000021,unaff_SPL) + bVar3;
    *(char *)((longlong)puVar6 + -0x61) = *(char *)((longlong)puVar6 + -0x61) + (char)(uVar5 >> 8);
    *puVar6 = *puVar6 | uVar1;
    *puVar6 = *puVar6 | uVar1;
    *param_1 = *param_1 + unaff_SPL;
    *(byte *)CONCAT71(unaff_00000021,unaff_SPL) =
         *(char *)CONCAT71(unaff_00000021,unaff_SPL) + (bVar3 & 0x69);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar6 = *puVar6 | uVar5;
  puVar6 = (uint *)(CONCAT71(uVar9,(char)puVar6) ^ 0x69);
  *param_1 = *param_1 + unaff_SPL;
  *(char *)puVar6 = (char)*puVar6 + (char)puVar6;
  *(char *)((longlong)puVar6 + -0x61) = *(char *)((longlong)puVar6 + -0x61) + cVar8;
  *puVar6 = *puVar6 | (uint)puVar6;
  *puVar6 = *puVar6 | (uint)puVar6;
  pcVar7 = (char *)(CONCAT71(uVar9,(char)puVar6) & 0xffffffffffffff69);
  *param_1 = *param_1 + unaff_SPL;
  *unaff_RSI = *unaff_RSI + (char)pcVar7;
  *pcVar7 = *pcVar7 + (char)pcVar7;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

