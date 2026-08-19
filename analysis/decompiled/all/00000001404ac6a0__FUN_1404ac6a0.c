// Function: FUN_1404ac6a0
// Addr: 1404ac6a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac6a0(char *param_1,char *param_2)

{
  undefined3 uVar1;
  char cVar2;
  char cVar6;
  uint in_EAX;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 uVar7;
  byte bVar8;
  undefined6 uVar9;
  char unaff_BH;
  char unaff_SPL;
  
  uVar9 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar6 = (char)((ulonglong)param_1 >> 8);
  uVar7 = SUB81(param_1,0);
  uRam00000001244fc6a8 = uRam00000001244fc6a8 & in_EAX;
  *param_1 = *param_1 + unaff_SPL;
  uVar3 = CONCAT31((int3)(in_EAX + 0x103da200 >> 8),(char)(in_EAX + 0x103da200) + unaff_BH) +
          0xf4050002;
  pcVar5 = (char *)(ulonglong)uVar3;
  cVar2 = (char)uVar3;
  *pcVar5 = *pcVar5 + cVar2 + (uVar3 < 0x3dfd0010);
  bVar8 = cVar6 << 1 | cVar6 < '\0';
  *(char *)CONCAT62(uVar9,CONCAT11(bVar8,uVar7)) =
       *(char *)CONCAT62(uVar9,CONCAT11(bVar8,uVar7)) + unaff_SPL;
  *pcVar5 = *pcVar5 + cVar2;
  uVar1 = (undefined3)(uVar3 >> 8);
  cVar2 = cVar2 + unaff_BH;
  uVar4 = CONCAT31(uVar1,cVar2);
  pcVar5 = (char *)(ulonglong)uVar4;
  *pcVar5 = *pcVar5 + cVar2 + (uVar4 < 0x3dfd0010);
  bVar8 = bVar8 << 1 | (char)bVar8 < '\0';
  *(char *)CONCAT62(uVar9,CONCAT11(bVar8,uVar7)) =
       *(char *)CONCAT62(uVar9,CONCAT11(bVar8,uVar7)) + unaff_SPL;
  *param_2 = *param_2 + cVar2;
  *pcVar5 = *pcVar5 + cVar2;
  cVar2 = in(5);
  uVar4 = CONCAT31(uVar1,cVar2);
  cVar6 = (char)(uVar3 >> 8);
  param_2[-0x7ffefc3] = param_2[-0x7ffefc3] + cVar6;
  *(char *)CONCAT62(uVar9,CONCAT11(bVar8,uVar7)) =
       *(char *)CONCAT62(uVar9,CONCAT11(bVar8,uVar7)) + unaff_SPL;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + cVar2;
  param_2[-0x7ffefc3] = param_2[-0x7ffefc3] + cVar6;
  *(char *)CONCAT62(uVar9,CONCAT11(bVar8,uVar7)) =
       *(char *)CONCAT62(uVar9,CONCAT11(bVar8,uVar7)) + unaff_SPL;
  uVar4 = uVar4 + 0x34050002;
  *(byte *)(ulonglong)uVar4 = *(byte *)(ulonglong)uVar4 | (byte)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

