// Function: FUN_1404ad970
// Addr: 1404ad970
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad970(undefined8 param_1,byte *param_2)

{
  char *pcVar1;
  byte bVar2;
  byte bVar4;
  byte bVar5;
  char *in_RAX;
  undefined7 uVar7;
  byte bVar8;
  char cVar9;
  undefined7 uVar10;
  longlong unaff_RBX;
  byte in_CF;
  byte bVar3;
  byte *pbVar6;
  
  uVar10 = (undefined7)((ulonglong)param_2 >> 8);
  bVar8 = (byte)((ulonglong)param_1 >> 8);
  bVar2 = *param_2;
  bVar3 = *param_2;
  *param_2 = bVar3 + bVar8 + in_CF;
  uVar7 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar5 = (char)in_RAX + *in_RAX + (CARRY1(bVar2,bVar8) || CARRY1(bVar3 + bVar8,in_CF));
  pbVar6 = (byte *)CONCAT71(uVar7,bVar5);
  cVar9 = (char)param_2 - *param_2;
  pbVar6[unaff_RBX * 8 + 0x21004a] = pbVar6[unaff_RBX * 8 + 0x21004a] + (char)param_1;
  bVar2 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar5;
  bVar3 = *(byte *)CONCAT71(uVar10,cVar9);
  bVar4 = *(char *)CONCAT71(uVar10,cVar9) + bVar8;
  *(byte *)CONCAT71(uVar10,cVar9) = bVar4 + CARRY1(bVar2,bVar5);
  pcVar1 = (char *)(CONCAT71(uVar7,bVar5 + *pbVar6 +
                                   (CARRY1(bVar3,bVar8) || CARRY1(bVar4,CARRY1(bVar2,bVar5)))) +
                    0x1301004a + unaff_RBX * 8);
  *pcVar1 = *pcVar1 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

