// Function: FUN_1404d54f0
// Addr: 1404d54f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d552e) overlaps instruction at (ram,0x0001404d552d)
    */

void FUN_1404d54f0(char *param_1,char *param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  char *in_RAX;
  undefined7 uVar7;
  undefined8 uVar6;
  byte bVar8;
  byte bVar9;
  byte unaff_BL;
  byte bVar10;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  int *unaff_RSI;
  longlong unaff_RDI;
  byte unaff_R12B;
  bool bVar11;
  undefined1 auStack_8 [8];
  char *pcVar5;
  
  bVar9 = (byte)((ulonglong)param_2 >> 8);
  bVar8 = (byte)param_2;
  *(char *)(unaff_RDI + 0x3f) = *(char *)(unaff_RDI + 0x3f) << 1;
  bVar10 = unaff_BL + bVar9;
  if (CARRY1(unaff_BL,bVar9) || bVar10 == 0) {
    bVar2 = (byte)in_RAX;
    (&stack0x00000000)[(longlong)param_2 * 2] = (&stack0x00000000)[(longlong)param_2 * 2] + bVar2;
    *param_4 = *param_4 + unaff_R12B;
    *in_RAX = *in_RAX + bVar2;
    uVar7 = (undefined7)((ulonglong)in_RAX >> 8);
    bVar3 = bVar2 + bVar8;
    pcVar5 = (char *)CONCAT71(uVar7,bVar3);
    if (!CARRY1(bVar2,bVar8) && bVar3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar11 = CARRY1(bVar10,bVar9);
    bVar10 = bVar10 + bVar9;
    if (!bVar11 && bVar10 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    (&stack0x00000000)[(longlong)param_2 * 2] = (&stack0x00000000)[(longlong)param_2 * 2] + bVar3;
    *param_4 = *param_4 + unaff_R12B;
    *pcVar5 = *pcVar5 + bVar3;
    pbVar1 = (byte *)(pcVar5 + -0x2fffc089);
    bVar2 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar3;
    if (!CARRY1(bVar2,bVar3) && *pbVar1 != 0) {
      cVar4 = *pcVar5;
      (&stack0x00000000)[(longlong)param_1] =
           (&stack0x00000000)[(longlong)param_1] + bVar9 +
           (0xeffff98b < (uint)CONCAT71(uVar7,bVar3 + cVar4));
      (&stack0x00000000)[(longlong)unaff_RSI] =
           (&stack0x00000000)[(longlong)unaff_RSI] + (bVar3 + cVar4 + 0x74 | 100);
      *(char *)(unaff_RBP + 0x75) = *(char *)(unaff_RBP + 0x75) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar6 = CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                     CONCAT11((char)((ulonglong)in_RAX >> 8) + bVar9,bVar3));
    register0x00000020 = (BADSPACEBASE *)auStack_8;
    bVar2 = *param_4;
    *param_4 = *param_4 + unaff_R12B;
    *unaff_RSI = *unaff_RSI + (int)uVar6 + (uint)CARRY1(bVar2,unaff_R12B);
    *param_1 = *param_1 + bVar8;
    cVar4 = in(8);
    *param_2 = *param_2 + (char)param_1;
    if (*param_2 != '\0') {
      cRam00000000d04d5b61 = cRam00000000d04d5b61 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    in_RAX = (char *)(ulonglong)((uint)CONCAT71((int7)((ulonglong)uVar6 >> 8),cVar4) ^ 0x35e9bf00);
    *(byte *)CONCAT71(unaff_00000019,bVar10) = *(char *)CONCAT71(unaff_00000019,bVar10) + bVar9;
  }
  *param_4 = *param_4 + (char)register0x00000020;
  *(char *)unaff_RSI = (char)*unaff_RSI + (char)in_RAX;
  *in_RAX = *in_RAX + (char)in_RAX;
  uVar7 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar4 = in(8);
  pcVar5 = (char *)CONCAT71(uVar7,cVar4);
  *pcVar5 = *pcVar5 + cVar4;
  if (*pcVar5 != '\0') {
    *pcVar5 = *pcVar5 + cVar4;
    pcVar5 = (char *)((CONCAT71(uVar7,cVar4) ^ 6) - 0x40ffca17);
    *pcVar5 = *pcVar5 + bVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)CONCAT71(unaff_00000019,bVar10) = *(char *)CONCAT71(unaff_00000019,bVar10) + bVar9;
  *param_4 = *param_4 + (char)register0x00000020;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

