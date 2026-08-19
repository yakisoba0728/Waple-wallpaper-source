// Function: FUN_1404bd7a4
// Addr: 1404bd7a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bd806) overlaps instruction at (ram,0x0001404bd805)
    */

void FUN_1404bd7a4(byte *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  uint uVar2;
  uint3 uVar3;
  uint uVar4;
  byte bVar6;
  uint *in_RAX;
  char *pcVar5;
  char cVar7;
  char cVar8;
  char cVar9;
  longlong unaff_RBP;
  char *unaff_RSI;
  longlong unaff_RDI;
  
  cVar9 = (char)((ulonglong)param_2 >> 8);
  cVar8 = (char)param_2;
  cVar7 = (char)param_1;
  while( true ) {
    uVar4 = (uint)in_RAX & 0x4bd69000;
    pcVar5 = (char *)(ulonglong)uVar4;
    bVar6 = (byte)(uVar4 >> 8);
    *param_1 = *param_1 + bVar6;
    *pcVar5 = *pcVar5;
    pcVar5[0x22002539] = pcVar5[0x22002539] + cVar9;
    bVar1 = *param_1;
    *param_1 = *param_1 + bVar6;
    *unaff_RSI = *unaff_RSI + CARRY1(bVar1,bVar6);
    *pcVar5 = *pcVar5 + cVar8;
    *(undefined1 *)((longlong)pcVar5 * 2) = 0;
    (&stack0x0000004b)[param_2 * 8] = (&stack0x0000004b)[param_2 * 8] + cVar7;
    *param_1 = *param_1 + bVar6;
    *pcVar5 = *pcVar5;
    uVar3 = (uint3)(uVar4 >> 8);
    pcVar5 = (char *)(ulonglong)CONCAT31(uVar3,cVar8);
    (&stack0x0000004b)[param_2 * 8] = (&stack0x0000004b)[param_2 * 8] + cVar7;
    bVar1 = *param_1;
    *param_1 = *param_1 + bVar6;
    *unaff_RSI = *unaff_RSI + cVar8 + CARRY1(bVar1,bVar6);
    *pcVar5 = *pcVar5 + cVar8;
    *(char *)((longlong)pcVar5 * 2) = cVar8;
    cRam00000000c04bde61 = cRam00000000c04bde61 + cVar8;
    uVar4 = (uVar3 & 0x4bd44c) * 0x100;
    in_RAX = (uint *)(ulonglong)uVar4;
    *param_1 = *param_1;
    *(char *)in_RAX = (char)*in_RAX;
    *(undefined1 *)((longlong)in_RAX + -0x1affdac3) =
         *(undefined1 *)((longlong)in_RAX + -0x1affdac3);
    *param_4 = *param_4;
    if (*param_4 != '\0') {
      unaff_RSI[0x78] = unaff_RSI[0x78];
      *in_RAX = *in_RAX | uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)(unaff_RDI + -8) = *(char *)(unaff_RDI + -8) + cVar9;
    uVar2 = *in_RAX;
    *in_RAX = *in_RAX + uVar4;
    if (SCARRY4(uVar2,uVar4)) break;
    *(char *)in_RAX = (char)*in_RAX;
    (&stack0x0000004b)[param_2 * 8] = (&stack0x0000004b)[param_2 * 8] + cVar7;
    *param_1 = *param_1;
  }
  *(undefined1 *)(unaff_RBP + -0x38) = *(undefined1 *)(unaff_RBP + -0x38);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

