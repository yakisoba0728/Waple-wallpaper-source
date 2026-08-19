// Function: FUN_1404ad0b0
// Addr: 1404ad0b0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ad097) overlaps instruction at (ram,0x0001404ad096)
    */

void FUN_1404ad0b0(char *param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined7 uVar7;
  int *piVar5;
  char *in_RAX;
  char *pcVar6;
  char cVar8;
  char unaff_BL;
  char unaff_BH;
  char *unaff_RDI;
  bool in_OF;
  
  cVar8 = (char)((ulonglong)param_1 >> 8);
  if (in_OF) {
    *in_RAX = *in_RAX + (byte)in_RAX;
    if ((char)(unaff_BH + unaff_BL) == '\0') {
      bRam0000000000000000 = bRam0000000000000000 | (byte)in_RAX;
      *in_RAX = *in_RAX + (char)param_1;
      uVar7 = (undefined7)((ulonglong)in_RAX >> 8);
      uVar1 = in(0x11);
      piVar5 = (int *)(CONCAT71(uVar7,uVar1) | 0x6c);
      *piVar5 = *piVar5 + (int)piVar5;
      *param_1 = *param_1;
      *(char *)piVar5 = (char)*piVar5 + (char)piVar5;
      piVar5 = (int *)(CONCAT71(uVar7,(char)piVar5) | 0x6c);
      *piVar5 = *piVar5 + (int)piVar5;
      *param_1 = *param_1;
      *(char *)piVar5 = (char)*piVar5 + (char)piVar5;
      unaff_RDI[(longlong)param_1 * 8 + 0x4a] = unaff_RDI[(longlong)param_1 * 8 + 0x4a];
      *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
      in_RAX = (char *)CONCAT71(uVar7,(char)piVar5 + unaff_BL);
    }
    *param_1 = *param_1;
    *in_RAX = *in_RAX + (char)in_RAX;
    param_2 = (byte *)0x0;
    in_RAX[-0x1c] = in_RAX[-0x1c];
  }
  *param_4 = *param_4 + (char)in_RAX;
  uVar3 = (uint)in_RAX | 5;
  *param_2 = *param_2 + (char)param_1;
  uVar4 = uVar3 + 0x3600470;
  bVar2 = (byte)uVar4;
  *param_2 = *param_2 ^ bVar2;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + bVar2;
  *(uint *)(param_1 + 0x12) = *(int *)(param_1 + 0x12) + uVar4;
  param_1[-0x68] = param_1[-0x68] + bVar2;
  pcVar6 = (char *)(ulonglong)(uVar3 + 0x9e83870);
  *unaff_RDI = *unaff_RDI + cVar8;
  if (-1 < *unaff_RDI) {
    *pcVar6 = *pcVar6 + cVar8;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

