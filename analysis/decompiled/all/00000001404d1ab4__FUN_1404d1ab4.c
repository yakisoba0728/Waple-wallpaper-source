// Function: FUN_1404d1ab4
// Addr: 1404d1ab4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d1ab6) overlaps instruction at (ram,0x0001404d1ab4)
    */

void FUN_1404d1ab4(longlong param_1,char *param_2,undefined8 param_3,char *param_4)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  char *in_RAX;
  byte *pbVar5;
  char cVar7;
  char *pcVar6;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined8 *puVar8;
  char *unaff_RSI;
  undefined1 *puVar9;
  
  lVar2 = (longlong)*(int *)((longlong)in_RAX * 2) * 0x3c69f9;
  if ((int)lVar2 == lVar2) {
    *param_4 = *param_4 + (char)in_RAX;
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  while( true ) {
    lVar2 = (longlong)*(int *)((longlong)in_RAX * 2) * 0x3c69f9;
    uVar4 = (uint)in_RAX;
    cVar7 = (char)((ulonglong)param_2 >> 8);
    if ((int)lVar2 == lVar2) break;
    uVar4 = uVar4 + 0x3600470;
    pcVar6 = (char *)(ulonglong)uVar4;
    puVar8 = (undefined8 *)((longlong)register0x00000020 + -8);
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
    *puVar8 = pcVar6;
    param_2 = (char *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                               CONCAT11(cVar7 + *pcVar6,(char)param_2));
    uRam00000001a8521aa4 = uRam00000001a8521aa4 & uVar4;
    in_RAX = (char *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),(char)uVar4 + *pcVar6);
  }
  *param_4 = *param_4 + (char)register0x00000020;
  cVar3 = (char)in_RAX;
  *in_RAX = *in_RAX + cVar3;
  in_RAX[0x69] = in_RAX[0x69] + cVar3;
  puVar9 = (undefined1 *)(ulonglong)(uint)(*(int *)((longlong)in_RAX * 2) * 0x49e670);
  piVar1 = (int *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x14);
  *piVar1 = *piVar1 + uVar4;
  pcVar6 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x58);
  *pcVar6 = *pcVar6 + cVar3;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar7;
  *puVar9 = (char)param_1;
  cVar7 = (char)((ulonglong)param_1 >> 8);
  *unaff_RSI = *unaff_RSI + cVar7;
  if (-1 < *unaff_RSI) {
    *param_2 = *param_2 + cVar7;
    *(undefined8 *)((longlong)register0x00000020 + -8) = 0x11e0011;
    uVar4 = (uVar4 | 0xe983b00) & 0x15f01700;
    pcVar6 = (char *)(param_1 + -1);
    if (pcVar6 != (char *)0x0 && uVar4 != 0) {
      pbVar5 = (byte *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),0x60);
      *pbVar5 = *pbVar5 ^ 0x60;
      *pcVar6 = *pcVar6 + (char)(uVar4 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pcVar6 = *pcVar6 << 1;
  }
  *puVar9 = *puVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

