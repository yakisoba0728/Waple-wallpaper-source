// Function: FUN_1404cc638
// Addr: 1404cc638
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc638(undefined8 param_1,char *param_2)

{
  byte bVar1;
  uint uVar2;
  char cVar5;
  undefined8 in_RAX;
  undefined7 uVar6;
  longlong lVar3;
  char *pcVar4;
  char cVar7;
  byte bVar8;
  undefined6 uVar9;
  char cVar10;
  char *unaff_RBX;
  longlong unaff_RBP;
  int unaff_ESI;
  int unaff_EDI;
  byte in_R11B;
  
  uVar9 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar7 = (char)param_1;
  bVar8 = (byte)((ulonglong)param_1 >> 8) & (byte)in_RAX;
  bVar1 = *(byte *)CONCAT62(uVar9,CONCAT11(bVar8,cVar7));
  *(byte *)CONCAT62(uVar9,CONCAT11(bVar8,cVar7)) =
       *(char *)CONCAT62(uVar9,CONCAT11(bVar8,cVar7)) + in_R11B;
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar1 = ((byte)in_RAX - 4) - CARRY1(bVar1,in_R11B);
  *param_2 = *param_2 + cVar7;
  *(int *)CONCAT62(uVar9,CONCAT11(bVar8,cVar7)) =
       *(int *)CONCAT62(uVar9,CONCAT11(bVar8,cVar7)) + unaff_EDI;
  *unaff_RBX = *unaff_RBX + bVar1;
  cVar10 = (char)((ulonglong)param_2 >> 8) + *(char *)CONCAT71(uVar6,bVar1);
  lVar3 = CONCAT71(uVar6,bVar1 & (byte)param_2);
  pcVar4 = (char *)(lVar3 + 0x21000001);
  *pcVar4 = *pcVar4 + cVar10;
  uVar2 = (uint)lVar3 & 0xf4250008;
  uVar2 = (uVar2 + 0xeaffc01c) - (uint)(*(byte *)(ulonglong)uVar2 < (byte)uVar2);
  pcVar4 = (char *)(ulonglong)uVar2;
  if (uVar2 != 0) {
    *pcVar4 = *pcVar4 + cVar7;
    cVar7 = cVar7 + bVar8;
    iRam000000018d12326f = iRam000000018d12326f + unaff_ESI;
    cVar5 = (char)(uVar2 >> 8);
    *(char *)CONCAT62(uVar9,CONCAT11(bVar8,cVar7)) =
         *(char *)CONCAT62(uVar9,CONCAT11(bVar8,cVar7)) + cVar5;
    *pcVar4 = *pcVar4 + (char)uVar2;
    *pcVar4 = *pcVar4 + cVar5;
    iRam00000001754eaf7b = iRam00000001754eaf7b + unaff_ESI;
    pcVar4 = (char *)(unaff_RBP + 0x4c + (longlong)pcVar4 * 8);
    *pcVar4 = *pcVar4 + bVar8;
    *(char *)CONCAT62(uVar9,CONCAT11(bVar8,cVar7)) =
         *(char *)CONCAT62(uVar9,CONCAT11(bVar8,cVar7)) + (char)uVar2;
    pcVar4 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(cVar10,(byte)param_2)) +
                     ((ulonglong)uVar2 | 5) * 2);
    *pcVar4 = *pcVar4 + cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

