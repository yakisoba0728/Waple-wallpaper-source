// Function: FUN_1404bd7c4
// Addr: 1404bd7c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bd806) overlaps instruction at (ram,0x0001404bd805)
    */

void FUN_1404bd7c4(byte *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  byte bVar6;
  uint *in_RAX;
  char cVar7;
  longlong unaff_RBP;
  char *unaff_RSI;
  longlong unaff_RDI;
  char *pcVar5;
  
  cVar7 = (char)param_1;
  while( true ) {
    cVar3 = (char)in_RAX;
    cRam00000001104bde35 = cRam00000001104bde35 + cVar3;
    (&stack0x0000004b)[param_2 * 8] = (&stack0x0000004b)[param_2 * 8] + cVar7;
    bVar6 = (byte)((ulonglong)in_RAX >> 8);
    *param_1 = *param_1 + bVar6;
    *(char *)in_RAX = (char)*in_RAX + cVar3;
    cVar3 = cVar3 + (char)param_2;
    pcVar5 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar3);
    (&stack0x0000004b)[param_2 * 8] = (&stack0x0000004b)[param_2 * 8] + cVar7;
    bVar1 = *param_1;
    *param_1 = *param_1 + bVar6;
    *unaff_RSI = *unaff_RSI + cVar3 + CARRY1(bVar1,bVar6);
    *pcVar5 = *pcVar5 + (char)param_2;
    *(char *)((longlong)pcVar5 * 2) = cVar3;
    cRam00000000c04bde61 = cRam00000000c04bde61 + cVar3;
    uVar4 = (uint)pcVar5 & 0x4bd44c00;
    in_RAX = (uint *)(ulonglong)uVar4;
    cVar3 = (char)(uVar4 >> 8);
    *param_1 = *param_1 + cVar3;
    *(char *)in_RAX = (char)*in_RAX;
    *(char *)((longlong)in_RAX + -0x1affdac3) = *(char *)((longlong)in_RAX + -0x1affdac3);
    *param_4 = *param_4;
    if (*param_4 != '\0') {
      unaff_RSI[0x78] = unaff_RSI[0x78];
      *in_RAX = *in_RAX | uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)(unaff_RDI + -8) = *(char *)(unaff_RDI + -8) + (char)((ulonglong)param_2 >> 8);
    uVar2 = *in_RAX;
    *in_RAX = *in_RAX + uVar4;
    if (SCARRY4(uVar2,uVar4)) break;
    *(char *)in_RAX = (char)*in_RAX;
    (&stack0x0000004b)[param_2 * 8] = (&stack0x0000004b)[param_2 * 8] + cVar7;
    *param_1 = *param_1 + cVar3;
  }
  *(char *)(unaff_RBP + -0x38) = *(char *)(unaff_RBP + -0x38) + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

