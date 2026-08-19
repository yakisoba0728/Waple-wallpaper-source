// Function: FUN_1404cc628
// Addr: 1404cc628
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc628(byte *param_1,char *param_2)

{
  byte bVar1;
  uint uVar2;
  char cVar5;
  longlong in_RAX;
  undefined7 uVar6;
  longlong lVar3;
  char *pcVar4;
  char cVar7;
  char cVar8;
  undefined6 uVar9;
  char cVar10;
  byte unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  int unaff_ESI;
  int unaff_EDI;
  
  cVar10 = (char)((ulonglong)param_2 >> 8);
  uVar9 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar8 = (char)((ulonglong)param_1 >> 8);
  cVar7 = (char)param_1;
  param_1[CONCAT71(unaff_00000019,unaff_BL)] =
       param_1[CONCAT71(unaff_00000019,unaff_BL)] + (char)((ulonglong)in_RAX >> 8);
  param_2[(longlong)param_1] = param_2[(longlong)param_1] + cVar10;
  *(char *)(in_RAX + 0x80034ff) = *(char *)(in_RAX + 0x80034ff) + (char)in_RAX;
  cRam000000018d11e63b = cRam000000018d11e63b + cVar10;
  bVar1 = *param_1;
  *param_1 = *param_1 + unaff_BL;
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar1 = ((char)in_RAX + -4) - CARRY1(bVar1,unaff_BL);
  *param_2 = *param_2 + cVar7;
  *(int *)param_1 = *(int *)param_1 + unaff_EDI;
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + bVar1;
  cVar10 = cVar10 + *(char *)CONCAT71(uVar6,bVar1);
  lVar3 = CONCAT71(uVar6,bVar1 & (byte)param_2);
  pcVar4 = (char *)(lVar3 + 0x21000001);
  *pcVar4 = *pcVar4 + cVar10;
  uVar2 = (uint)lVar3 & 0xf4250008;
  uVar2 = (uVar2 + 0xeaffc01c) - (uint)(*(byte *)(ulonglong)uVar2 < (byte)uVar2);
  pcVar4 = (char *)(ulonglong)uVar2;
  if (uVar2 != 0) {
    *pcVar4 = *pcVar4 + cVar7;
    cVar7 = cVar7 + cVar8;
    iRam000000018d12326f = iRam000000018d12326f + unaff_ESI;
    cVar5 = (char)(uVar2 >> 8);
    *(char *)CONCAT62(uVar9,CONCAT11(cVar8,cVar7)) =
         *(char *)CONCAT62(uVar9,CONCAT11(cVar8,cVar7)) + cVar5;
    *pcVar4 = *pcVar4 + (char)uVar2;
    *pcVar4 = *pcVar4 + cVar5;
    iRam00000001754eaf7b = iRam00000001754eaf7b + unaff_ESI;
    pcVar4 = (char *)(unaff_RBP + 0x4c + (longlong)pcVar4 * 8);
    *pcVar4 = *pcVar4 + cVar8;
    *(char *)CONCAT62(uVar9,CONCAT11(cVar8,cVar7)) =
         *(char *)CONCAT62(uVar9,CONCAT11(cVar8,cVar7)) + (char)uVar2;
    pcVar4 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(cVar10,(byte)param_2)) +
                     ((ulonglong)uVar2 | 5) * 2);
    *pcVar4 = *pcVar4 + cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

