// Function: FUN_1404cbd58
// Addr: 1404cbd58
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cbd72) overlaps instruction at (ram,0x0001404cbd6e)
    */

void FUN_1404cbd58(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  int3 iVar1;
  char cVar2;
  char cVar3;
  int in_EAX;
  uint uVar4;
  char *pcVar5;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  uint unaff_EBX;
  uint uVar11;
  char unaff_SPL;
  undefined7 unaff_00000021;
  char *pcVar12;
  char *unaff_RSI;
  char unaff_R12B;
  undefined1 *puVar6;
  
  uVar4 = in_EAX + 0xb0000a34;
  do {
    cVar3 = (char)uVar4;
    uVar11 = uVar4 >> 8;
    puVar6 = (undefined1 *)(ulonglong)uVar4;
    pcVar12 = unaff_RSI;
    uVar4 = unaff_EBX;
    if (cVar3 == '\0') {
      cVar2 = (char)((uint)(CONCAT31((int3)uVar11,*puVar6) + -0x4ffff90c) >> 8);
      iVar1 = (int3)cVar2;
      pcVar12 = unaff_RSI + -1;
      cVar3 = *unaff_RSI;
      iVar9 = (int)iVar1 >> 0x17;
      pcVar5 = (char *)(ulonglong)CONCAT31(iVar1,cVar3);
      if (cVar3 < '\0') goto code_r0x0001404cbd7f;
      *param_4 = *param_4 + unaff_SPL;
      *pcVar5 = *pcVar5 + cVar3;
      pcVar5[-0x53ffcb68] = pcVar5[-0x53ffcb68] + (cVar2 >> 7);
      uVar10 = (int)iVar1 >> 0x17;
      uVar4 = CONCAT31(iVar1,cVar3);
      pcVar8 = param_1;
      uVar11 = unaff_EBX;
      if (cVar3 < '\0') goto code_r0x0001404cbd8f;
      *param_4 = *param_4 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    while( true ) {
      *param_1 = *param_1 + unaff_R12B;
      unaff_EBX = (uint)puVar6 | 0x7f6d0504;
      param_1 = (char *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                                 CONCAT11((char)((ulonglong)param_1 >> 8) + (char)(uVar4 >> 8),
                                          (char)param_1));
      pcVar5 = (char *)(ulonglong)uVar4;
      iVar9 = (int)param_2 - *(int *)(pcVar12 + CONCAT71(unaff_00000021,unaff_SPL) + 0x4cbc8400);
code_r0x0001404cbd7f:
      *param_1 = *param_1 + (char)((ulonglong)pcVar5 >> 8);
      *pcVar5 = *pcVar5 + (char)pcVar5;
      uVar10 = iVar9 - *(int *)(pcVar12 + CONCAT71(unaff_00000021,unaff_SPL) + 0x4cbc8400);
      pcVar8 = (char *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                                CONCAT11((char)((ulonglong)param_1 >> 8) + (char)(unaff_EBX >> 8),
                                         (char)param_1));
      uVar11 = (uint)pcVar5;
      uVar4 = unaff_EBX;
code_r0x0001404cbd8f:
      param_2 = (char *)(ulonglong)uVar10;
      pcVar7 = (char *)(ulonglong)uVar4;
      *pcVar8 = *pcVar8 + (char)(uVar4 >> 8);
      *param_2 = *param_2 + (char)uVar4;
      *pcVar7 = *pcVar7 + (char)uVar4;
      pcVar5 = (char *)(((ulonglong)pcVar7 ^ 10) - 0x2ffcb6d);
      *pcVar5 = *pcVar5 + (char)(uVar10 >> 8);
      uVar4 = (uint)((ulonglong)pcVar7 ^ 10);
      param_1 = pcVar8;
      unaff_RSI = pcVar12;
      unaff_EBX = uVar11;
      if ((char)uVar11 == '\0') break;
      *pcVar8 = *pcVar8 + unaff_R12B;
      param_1 = (char *)CONCAT71((uint7)(uint3)(uVar11 + 0x34050002 >> 8),0x91);
      if ((char)(uint *)((ulonglong)pcVar8 & 0xffffffff) != '\0') {
        *param_1 = *param_1 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar6 = (undefined1 *)(ulonglong)((uint)pcVar8 | *(uint *)((ulonglong)pcVar8 & 0xffffffff));
    }
  } while( true );
}

