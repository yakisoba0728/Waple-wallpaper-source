// Function: FUN_1404ad064
// Addr: 1404ad064
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad064(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  short *in_RAX;
  undefined7 uVar9;
  int *piVar7;
  char *pcVar8;
  char cVar10;
  char unaff_BL;
  char unaff_BH;
  longlong unaff_RSI;
  char *unaff_RDI;
  
  cVar10 = (char)((ulonglong)param_1 >> 8);
  if ((char)(unaff_BH + unaff_BL) != '\0') {
    *param_1 = *param_1;
    bRam0000000000000000 = bRam0000000000000000 | (byte)in_RAX;
    *(char *)in_RAX = (char)*in_RAX + (char)param_1;
    uVar9 = (undefined7)((ulonglong)in_RAX >> 8);
    uVar2 = in(0x11);
    piVar7 = (int *)(CONCAT71(uVar9,uVar2) | 0x6c);
    *piVar7 = *piVar7 + (int)piVar7;
    *param_1 = *param_1;
    *(char *)piVar7 = (char)*piVar7 + (char)piVar7;
    piVar7 = (int *)(CONCAT71(uVar9,(char)piVar7) | 0x6c);
    *piVar7 = *piVar7 + (int)piVar7;
    *param_1 = *param_1;
    *(char *)piVar7 = (char)*piVar7 + (char)piVar7;
    cVar3 = (char)piVar7 + unaff_BL;
    unaff_RDI[(longlong)param_1 * 8 + 0x4a] = unaff_RDI[(longlong)param_1 * 8 + 0x4a];
    *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
    *(char *)CONCAT71(uVar9,cVar3) = *(char *)CONCAT71(uVar9,cVar3) + cVar3;
    puVar1 = (undefined1 *)(CONCAT71(uVar9,cVar3) + -0x1c);
    *puVar1 = *puVar1;
    *param_4 = *param_4 + cVar3;
    uVar5 = (uint)CONCAT71(uVar9,cVar3) | 5;
    uVar6 = uVar5 + 0x3600470;
    bVar4 = (byte)uVar6;
    bRam0000000000000000 = bRam0000000000000000 + (char)param_1 ^ bVar4;
    *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + bVar4;
    *(uint *)(param_1 + 0x12) = *(int *)(param_1 + 0x12) + uVar6;
    param_1[-0x68] = param_1[-0x68] + bVar4;
    pcVar8 = (char *)(ulonglong)(uVar5 + 0x9e83870);
    *unaff_RDI = *unaff_RDI + cVar10;
    if (-1 < *unaff_RDI) {
      *pcVar8 = *pcVar8 + cVar10;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_RAX = *in_RAX + (short)in_RAX;
  *param_4 = *param_4;
  (&stack0x00000000)[unaff_RSI] = (&stack0x00000000)[unaff_RSI] + ((byte)in_RAX ^ 0xe6) + 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

