// Function: FUN_1404c9358
// Addr: 1404c9358
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9358(char *param_1,undefined8 param_2)

{
  undefined3 uVar1;
  byte bVar2;
  uint in_EAX;
  uint uVar3;
  uint uVar4;
  int *piVar6;
  byte bVar7;
  char cVar8;
  undefined6 uVar9;
  char unaff_BL;
  byte *unaff_RSI;
  byte *unaff_RDI;
  byte *pbVar5;
  
  uVar9 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar3 = in_EAX | 0x9e00bf0;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  bVar7 = (char)param_2 + *(char *)((ulonglong)uVar3 + 0x20);
  *unaff_RSI = *unaff_RSI >> 1;
  uVar1 = (undefined3)(uVar3 >> 8);
  bVar2 = (char)uVar3 + (char)(uVar3 >> 8);
  pbVar5 = (byte *)(ulonglong)CONCAT31(uVar1,bVar2);
  *pbVar5 = *pbVar5 | bVar2;
  *param_1 = *param_1 + unaff_BL;
  uVar3 = CONCAT31(uVar1,(bVar2 | *pbVar5) + 1);
  uVar4 = uVar3 & *(uint *)(ulonglong)uVar3 | 0x9e00bf0;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  cVar8 = (char)((ulonglong)param_2 >> 8) + *(char *)(ulonglong)uVar4;
  bVar2 = (byte)uVar4 & bVar7;
  uVar3 = CONCAT31((int3)(uVar4 >> 8),bVar2);
  piVar6 = (int *)(ulonglong)uVar3;
  *(byte *)piVar6 = (char)*piVar6 + bVar2;
  *piVar6 = *piVar6 + uVar3;
  *param_1 = *param_1 + (char)(uVar4 >> 8);
  *unaff_RDI = *unaff_RDI + (char)param_1;
  in(9);
  *(char *)CONCAT62(uVar9,CONCAT11(cVar8,bVar7)) =
       *(char *)CONCAT62(uVar9,CONCAT11(cVar8,bVar7)) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

