// Function: FUN_1404cbd90
// Addr: 1404cbd90
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cbd91) overlaps instruction at (ram,0x0001404cbd90)
    */

void FUN_1404cbd90(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  int3 iVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  uint *in_RAX;
  ulonglong uVar5;
  char *pcVar6;
  char cVar9;
  int iVar7;
  uint uVar8;
  char *unaff_RBX;
  char unaff_SPL;
  undefined7 unaff_00000021;
  char *pcVar10;
  char *unaff_RSI;
  char unaff_R12B;
  
  do {
    *in_RAX = *in_RAX & (uint)in_RAX;
    uVar5 = CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + (char)*in_RAX);
    cVar9 = (char)((ulonglong)param_2 >> 8);
    param_2[(longlong)param_1] = param_2[(longlong)param_1] + cVar9;
    *(char *)(uVar5 - 0x2ffcb6d) = *(char *)(uVar5 - 0x2ffcb6d) + cVar9;
    pcVar6 = (char *)((ulonglong)unaff_RBX & 0xffffffff);
    pcVar4 = (char *)(uVar5 & 0xffffffff);
    uVar3 = (uint)unaff_RBX;
    if ((char)pcVar6 == '\0') {
      if ((char)pcVar4 != '\0') {
        *param_1 = *param_1 + unaff_R12B;
        uVar3 = (uint)uVar5 | 0x7f6d0504;
        pcVar10 = (char *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                                   CONCAT11((char)((ulonglong)param_1 >> 8) +
                                            (char)((ulonglong)pcVar6 >> 8),(char)param_1));
        pcVar4 = pcVar6;
        goto code_r0x0001404cbd75;
      }
      cVar2 = (char)((uint)((int)CONCAT71((int7)((ulonglong)pcVar4 >> 8),*pcVar4) + -0x4ffff90c) >>
                    8);
      iVar1 = (int3)cVar2;
      pcVar10 = unaff_RSI + -1;
      cVar9 = *unaff_RSI;
      iVar7 = (int)iVar1 >> 0x17;
      pcVar4 = (char *)(ulonglong)CONCAT31(iVar1,cVar9);
      if (cVar9 < '\0') goto code_r0x0001404cbd7f;
      *param_4 = *param_4 + unaff_SPL;
      *pcVar4 = *pcVar4 + cVar9;
      pcVar4[-0x53ffcb68] = pcVar4[-0x53ffcb68] + (cVar2 >> 7);
      uVar8 = (int)iVar1 >> 0x17;
      uVar3 = CONCAT31(iVar1,cVar9);
      if (-1 < cVar9) {
        *param_4 = *param_4 + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      *param_1 = *param_1 + unaff_R12B;
      pcVar10 = (char *)CONCAT71((uint7)(uint3)(uVar3 + 0x34050002 >> 8),0x91);
      if ((char)(uint *)((ulonglong)param_1 & 0xffffffff) != '\0') {
        *pcVar10 = *pcVar10 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar3 = (uint)param_1 | *(uint *)((ulonglong)param_1 & 0xffffffff);
code_r0x0001404cbd75:
      iVar7 = (int)param_2 - *(int *)(unaff_RSI + CONCAT71(unaff_00000021,unaff_SPL) + 0x4cbc8400);
      param_1 = pcVar10;
      pcVar10 = unaff_RSI;
code_r0x0001404cbd7f:
      *param_1 = *param_1 + (char)((ulonglong)pcVar4 >> 8);
      *pcVar4 = *pcVar4 + (char)pcVar4;
      param_1 = (char *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                                 CONCAT11((char)((ulonglong)param_1 >> 8) + (char)(uVar3 >> 8),
                                          (char)param_1));
      uVar8 = iVar7 - *(int *)(pcVar10 + CONCAT71(unaff_00000021,unaff_SPL) + 0x4cbc8400);
      pcVar6 = pcVar4;
    }
    param_2 = (char *)(ulonglong)uVar8;
    pcVar4 = (char *)(ulonglong)uVar3;
    *param_1 = *param_1 + (char)(uVar3 >> 8);
    *param_2 = *param_2 + (char)uVar3;
    *pcVar4 = *pcVar4 + (char)uVar3;
    in_RAX = (uint *)((ulonglong)pcVar4 ^ 10);
    unaff_RBX = pcVar6;
    unaff_RSI = pcVar10;
  } while( true );
}

