// Function: FUN_1404cbda8
// Addr: 1404cbda8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cbdaa) overlaps instruction at (ram,0x0001404cbda8)
    */

void FUN_1404cbda8(ulonglong param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  int3 iVar2;
  char cVar3;
  uint uVar4;
  int in_EAX;
  char cVar8;
  char *pcVar5;
  char *pcVar6;
  uint *puVar7;
  undefined1 uVar9;
  char cVar11;
  undefined6 uVar12;
  uint *puVar10;
  int iVar13;
  char *unaff_RBX;
  char unaff_SPL;
  undefined7 unaff_00000021;
  char *pcVar14;
  char *unaff_RSI;
  char unaff_R12B;
  
  puVar7 = (uint *)(param_1 & 0xffffffff);
  puVar10 = (uint *)(ulonglong)(in_EAX + 0xb0000a34);
code_r0x0001404cbdae:
  if ((char)puVar10 != '\0') {
    *(char *)puVar7 = (char)*puVar7 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar4 = (uint)puVar10 | *puVar10;
  pcVar14 = unaff_RSI;
code_r0x0001404cbd75:
  iVar13 = (int)param_2 - *(int *)(pcVar14 + CONCAT71(unaff_00000021,unaff_SPL) + 0x4cbc8400);
  pcVar5 = (char *)((ulonglong)unaff_RBX & 0xffffffff);
  puVar10 = puVar7;
  pcVar6 = (char *)(ulonglong)uVar4;
  do {
    unaff_RBX = pcVar5;
    cVar8 = (char)((ulonglong)unaff_RBX >> 8);
    *(char *)puVar10 = (char)*puVar10 + cVar8;
    *unaff_RBX = *unaff_RBX + (char)unaff_RBX;
    uVar12 = (undefined6)((ulonglong)puVar10 >> 0x10);
    uVar9 = SUB81(puVar10,0);
    cVar11 = (char)((ulonglong)puVar10 >> 8) + (char)((ulonglong)pcVar6 >> 8);
    puVar10 = (uint *)CONCAT62(uVar12,CONCAT11(cVar11,uVar9));
    uVar4 = iVar13 - *(int *)(pcVar14 + CONCAT71(unaff_00000021,unaff_SPL) + 0x4cbc8400);
    unaff_RSI = pcVar14;
    while( true ) {
      param_2 = (char *)(ulonglong)uVar4;
      *(char *)puVar10 = (char)*puVar10 + (char)((ulonglong)pcVar6 >> 8);
      *param_2 = *param_2 + (char)pcVar6;
      *pcVar6 = *pcVar6 + (char)pcVar6;
      pcVar14 = (char *)((ulonglong)pcVar6 ^ 10);
      pcVar14[-0x2ffcb6d] = pcVar14[-0x2ffcb6d] + (char)(uVar4 >> 8);
      if ((char)unaff_RBX != '\0') {
        *(char *)puVar10 = (char)*puVar10 + unaff_R12B;
        puVar7 = (uint *)CONCAT71((uint7)(uint3)((uint)((int)unaff_RBX + 0x34050002) >> 8),0x91);
        unaff_RBX = pcVar14;
        goto code_r0x0001404cbdae;
      }
      if ((char)pcVar14 != '\0') {
        *(char *)puVar10 = (char)*puVar10 + unaff_R12B;
        uVar4 = (uint)pcVar14 | 0x7f6d0504;
        puVar7 = (uint *)CONCAT62(uVar12,CONCAT11(cVar11 + cVar8,uVar9));
        pcVar14 = unaff_RSI;
        goto code_r0x0001404cbd75;
      }
      cVar3 = (char)((uint)((int)CONCAT71((int7)((ulonglong)pcVar6 >> 8),*pcVar14) + -0x4ffff90c) >>
                    8);
      iVar2 = (int3)cVar3;
      pcVar14 = unaff_RSI + -1;
      cVar1 = *unaff_RSI;
      iVar13 = (int)iVar2 >> 0x17;
      pcVar5 = (char *)(ulonglong)CONCAT31(iVar2,cVar1);
      pcVar6 = unaff_RBX;
      if (cVar1 < '\0') break;
      *param_4 = *param_4 + unaff_SPL;
      *pcVar5 = *pcVar5 + cVar1;
      pcVar5[-0x53ffcb68] = pcVar5[-0x53ffcb68] + (cVar3 >> 7);
      uVar4 = (int)iVar2 >> 0x17;
      pcVar6 = (char *)(ulonglong)CONCAT31(iVar2,cVar1);
      unaff_RSI = pcVar14;
      if (-1 < cVar1) {
        *param_4 = *param_4 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  } while( true );
}

