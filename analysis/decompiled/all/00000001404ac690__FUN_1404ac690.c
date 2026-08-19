// Function: FUN_1404ac690
// Addr: 1404ac690
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac690(char *param_1,char *param_2)

{
  undefined3 uVar1;
  char cVar2;
  char cVar6;
  int in_EAX;
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
  uVar3 = in_EAX + 0x93000a74;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3 + (uVar3 < 0x3da20010);
  *param_1 = *param_1 + unaff_SPL;
  *param_1 = *param_1 + unaff_SPL;
  uVar4 = CONCAT31((int3)((uint)(in_EAX + -0x78bd538a) >> 8),(char)(in_EAX + -0x78bd538a) + unaff_BH
                  ) + 0xf4050002;
  pcVar5 = (char *)(ulonglong)uVar4;
  cVar2 = (char)uVar4;
  *pcVar5 = *pcVar5 + cVar2 + (uVar4 < 0x3dfd0010);
  bVar8 = cVar6 << 1 | cVar6 < '\0';
  *(char *)CONCAT62(uVar9,CONCAT11(bVar8,uVar7)) =
       *(char *)CONCAT62(uVar9,CONCAT11(bVar8,uVar7)) + unaff_SPL;
  *pcVar5 = *pcVar5 + cVar2;
  uVar1 = (undefined3)(uVar4 >> 8);
  cVar2 = cVar2 + unaff_BH;
  uVar3 = CONCAT31(uVar1,cVar2);
  pcVar5 = (char *)(ulonglong)uVar3;
  *pcVar5 = *pcVar5 + cVar2 + (uVar3 < 0x3dfd0010);
  bVar8 = bVar8 << 1 | (char)bVar8 < '\0';
  *(char *)CONCAT62(uVar9,CONCAT11(bVar8,uVar7)) =
       *(char *)CONCAT62(uVar9,CONCAT11(bVar8,uVar7)) + unaff_SPL;
  *param_2 = *param_2 + cVar2;
  *pcVar5 = *pcVar5 + cVar2;
  cVar2 = in(5);
  uVar3 = CONCAT31(uVar1,cVar2);
  cVar6 = (char)(uVar4 >> 8);
  param_2[-0x7ffefc3] = param_2[-0x7ffefc3] + cVar6;
  *(char *)CONCAT62(uVar9,CONCAT11(bVar8,uVar7)) =
       *(char *)CONCAT62(uVar9,CONCAT11(bVar8,uVar7)) + unaff_SPL;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + cVar2;
  param_2[-0x7ffefc3] = param_2[-0x7ffefc3] + cVar6;
  *(char *)CONCAT62(uVar9,CONCAT11(bVar8,uVar7)) =
       *(char *)CONCAT62(uVar9,CONCAT11(bVar8,uVar7)) + unaff_SPL;
  uVar3 = uVar3 + 0x34050002;
  *(byte *)(ulonglong)uVar3 = *(byte *)(ulonglong)uVar3 | (byte)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

