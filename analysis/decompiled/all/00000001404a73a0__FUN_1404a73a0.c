// Function: FUN_1404a73a0
// Addr: 1404a73a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a7432) */
/* WARNING: Removing unreachable block (ram,0x0001404a7422) */
/* WARNING: Removing unreachable block (ram,0x0001404a748d) */

void FUN_1404a73a0(char *param_1,byte *param_2)

{
  byte *pbVar1;
  undefined3 uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined8 in_RAX;
  char cVar7;
  undefined7 uVar8;
  char cVar9;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  undefined7 unaff_00000021;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  bool in_OF;
  char *pcVar6;
  
  cVar9 = (char)param_2;
  uVar8 = (undefined7)((ulonglong)param_1 >> 8);
  *unaff_RDI = *unaff_RSI;
  cVar7 = (char)((ulonglong)in_RAX >> 8);
  if (in_OF) {
    *param_1 = *param_1 + cVar7;
    uVar5 = (int)in_RAX + 0x34050002;
    uVar2 = (undefined3)(uVar5 >> 8);
    bVar3 = (char)uVar5 + *(char *)(ulonglong)uVar5;
    *param_2 = *param_2 << 1 | (char)*param_2 < '\0';
    bVar3 = (bVar3 | *(byte *)(ulonglong)CONCAT31(uVar2,bVar3)) + 3;
    bVar3 = bVar3 | *(byte *)(ulonglong)CONCAT31(uVar2,bVar3);
    *param_1 = *param_1 + unaff_SPL;
    *(char *)(ulonglong)CONCAT31(uVar2,bVar3) = *(char *)(ulonglong)CONCAT31(uVar2,bVar3) + bVar3;
    bVar3 = bVar3 + cVar9;
    cVar7 = (char)param_1 + *param_2;
    pbVar1 = (byte *)(ulonglong)CONCAT31(uVar2,bVar3) +
             CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
    *pbVar1 = *pbVar1 + bVar3;
    *(byte *)CONCAT71(uVar8,cVar7) =
         *(char *)CONCAT71(uVar8,cVar7) + (bVar3 | *(byte *)(ulonglong)CONCAT31(uVar2,bVar3));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar3 = (char)in_RAX + 0x14;
  cVar4 = bVar3 + unaff_BH;
  pcVar6 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar4);
  if (CARRY1(bVar3,unaff_BH)) {
    *param_1 = *param_1 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + cVar7;
  *pcVar6 = *pcVar6 + cVar4;
  pcVar6[-0x3cfff5fc] = pcVar6[-0x3cfff5fc] + cVar9;
  if (!CARRY1(cVar4 + 10U,unaff_BH)) {
    *param_1 = *param_1 + cVar4 + 10U + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar6 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + (longlong)(unaff_RSI + 1) * 2);
  *pcVar6 = *pcVar6 + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

