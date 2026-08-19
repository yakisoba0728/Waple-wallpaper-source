// Function: FUN_1404cbd80
// Addr: 1404cbd80
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cbd81) overlaps instruction at (ram,0x0001404cbd80)
    */

void FUN_1404cbd80(char *param_1,int param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  int3 iVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  char *pcVar6;
  uint *in_RAX;
  uint uVar7;
  uint *unaff_RBX;
  char unaff_SPL;
  undefined7 unaff_00000021;
  char *unaff_RSI;
  char *pcVar8;
  char unaff_R12B;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  do {
    pcVar6 = (char *)((ulonglong)unaff_RBX & 0xffffffff);
    unaff_RBX = (uint *)((ulonglong)in_RAX & 0xffffffff);
    uVar7 = param_2 - *(int *)(unaff_RSI + CONCAT71(unaff_00000021,unaff_SPL) + 0x4cbc8400);
    pcVar8 = unaff_RSI;
    while( true ) {
      *param_1 = *param_1 + (char)((ulonglong)pcVar6 >> 8);
      *(char *)(ulonglong)uVar7 = *(char *)(ulonglong)uVar7 + (char)pcVar6;
      *pcVar6 = *pcVar6 + (char)pcVar6;
      puVar5 = (uint *)((ulonglong)pcVar6 ^ 10);
      *(char *)((longlong)puVar5 + -0x2ffcb6d) =
           *(char *)((longlong)puVar5 + -0x2ffcb6d) + (char)(uVar7 >> 8);
      if ((char)unaff_RBX != '\0') break;
      if ((char)puVar5 != '\0') {
        *param_1 = *param_1 + unaff_R12B;
        uVar4 = (uint)puVar5 | 0x7f6d0504;
        pcVar6 = (char *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                                  CONCAT11((char)((ulonglong)param_1 >> 8) +
                                           (char)((ulonglong)unaff_RBX >> 8),(char)param_1));
        puVar5 = unaff_RBX;
        goto code_r0x0001404cbd75;
      }
      cVar3 = (char)((uint)((int)CONCAT71((int7)((ulonglong)pcVar6 >> 8),(char)*puVar5) +
                           -0x4ffff90c) >> 8);
      iVar2 = (int3)cVar3;
      unaff_RSI = pcVar8 + -1;
      cVar1 = *pcVar8;
      param_2 = (int)iVar2 >> 0x17;
      puVar5 = (uint *)(ulonglong)CONCAT31(iVar2,cVar1);
      if (cVar1 < '\0') goto code_r0x0001404cbd7f;
      *param_4 = *param_4 + unaff_SPL;
      *(char *)puVar5 = (char)*puVar5 + cVar1;
      *(char *)(puVar5 + -0x14fff2da) = (char)puVar5[-0x14fff2da] + (cVar3 >> 7);
      uVar7 = (int)iVar2 >> 0x17;
      pcVar6 = (char *)(ulonglong)CONCAT31(iVar2,cVar1);
      pcVar8 = unaff_RSI;
      if (-1 < cVar1) {
        *param_4 = *param_4 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    *param_1 = *param_1 + unaff_R12B;
    pcVar6 = (char *)CONCAT71((uint7)(uint3)((uint)((int)in_RAX + 0x34050002) >> 8),0x91);
    if ((char)(uint *)((ulonglong)param_1 & 0xffffffff) != '\0') {
      *pcVar6 = *pcVar6 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar4 = (uint)param_1 | *(uint *)((ulonglong)param_1 & 0xffffffff);
code_r0x0001404cbd75:
    unaff_RBX = (uint *)(ulonglong)uVar4;
    param_2 = uVar7 - *(int *)(pcVar8 + CONCAT71(unaff_00000021,unaff_SPL) + 0x4cbc8400);
    param_1 = pcVar6;
    unaff_RSI = pcVar8;
code_r0x0001404cbd7f:
    *param_1 = *param_1 + (char)((ulonglong)puVar5 >> 8);
    *(char *)puVar5 = (char)*puVar5 + (char)puVar5;
    param_1 = (char *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                               CONCAT11((char)((ulonglong)param_1 >> 8) +
                                        (char)((ulonglong)unaff_RBX >> 8),(char)param_1));
    in_RAX = puVar5;
  } while( true );
}

