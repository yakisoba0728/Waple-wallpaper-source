// Function: FUN_1404a53f0
// Addr: 1404a53f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a541e) overlaps instruction at (ram,0x0001404a5418)
    */

void FUN_1404a53f0(byte *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  char cVar8;
  char *in_RAX;
  undefined7 uVar9;
  int *piVar7;
  uint *puVar10;
  char cVar11;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  longlong unaff_RBP;
  byte *unaff_RSI;
  uint unaff_EDI;
  undefined4 unaff_0000003c;
  char *pcVar6;
  
  cVar11 = (char)((ulonglong)param_2 >> 8);
  param_1[CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)))] =
       param_1[CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)))] +
       cVar11;
  cVar8 = (char)((ulonglong)in_RAX >> 8);
  param_1[(longlong)&stack0x00000000] = param_1[(longlong)&stack0x00000000] + cVar8;
  param_1[0x7ff6000] = param_1[0x7ff6000] + cVar11;
  pcVar6 = (char *)(CONCAT44(unaff_0000003c,unaff_EDI) + 7 + CONCAT44(unaff_0000003c,unaff_EDI) * 8)
  ;
  *pcVar6 = *pcVar6 + unaff_BH;
  *(char *)(unaff_RBP + 0x49) = *(char *)(unaff_RBP + 0x49) + cVar8;
  *param_1 = *param_1 + cVar8;
  *in_RAX = *in_RAX + (char)param_1;
  *in_RAX = *in_RAX + (char)in_RAX;
  uVar9 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar4 = in(8);
  pcVar6 = (char *)CONCAT71(uVar9,bVar4);
  *pcVar6 = *pcVar6 + bVar4;
  if (*pcVar6 != '\0') {
    *pcVar6 = *pcVar6 + bVar4;
    param_1[0x7ff6000] = param_1[0x7ff6000] + cVar11;
    pcVar6 = (char *)(CONCAT44(unaff_0000003c,unaff_EDI) + 7 +
                     CONCAT44(unaff_0000003c,unaff_EDI) * 8);
    *pcVar6 = *pcVar6 + unaff_BH;
    *(char *)(unaff_RBP + 0x49) = *(char *)(unaff_RBP + 0x49) + cVar8;
    bVar2 = *param_1;
    *param_1 = *param_1 + bVar4;
    uVar5 = ((int)CONCAT71(uVar9,bVar4) - (uint)CARRY1(bVar2,bVar4)) + 0xeef2eef6;
    puVar10 = (uint *)(param_1 + -1);
    if (puVar10 == (uint *)0x0 || uVar5 == 0) {
      *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
           *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) >>
           1 | *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))
                                ) << 7;
      *(byte *)puVar10 = (byte)*puVar10;
      pbVar1 = (byte *)(ulonglong)uVar5 + 7;
      *pbVar1 = *pbVar1 | (byte)(uVar5 >> 8);
      *unaff_RSI = *unaff_RSI ^ (byte)uVar5;
      *puVar10 = *puVar10 + CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
    }
    uVar3 = CONCAT31((int3)(uVar5 >> 8),(byte)uVar5 | *(byte *)(ulonglong)uVar5);
    uVar5 = *puVar10;
    *puVar10 = *puVar10 - uVar3;
    *(int *)(ulonglong)uVar3 = *(int *)(ulonglong)uVar3 + uVar3 + (uint)(uVar5 < uVar3);
    *(char *)CONCAT44(unaff_0000003c,unaff_EDI) =
         *(char *)CONCAT44(unaff_0000003c,unaff_EDI) << 1 |
         *(char *)CONCAT44(unaff_0000003c,unaff_EDI) < '\0';
    uVar5 = uVar3 | 0x9e00bf0 |
            *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
    piVar7 = (int *)(ulonglong)uVar5;
    *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
         (char)puVar10;
    *piVar7 = *piVar7 + (int)puVar10;
    *(uint *)((longlong)piVar7 + (longlong)unaff_RSI) =
         *(int *)((longlong)piVar7 + (longlong)unaff_RSI) + uVar5;
    *(char *)piVar7 = (char)*piVar7 + (char)uVar5;
    *(uint *)(unaff_RBP + -0xb42fff4) = *(uint *)(unaff_RBP + -0xb42fff4) & unaff_EDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

