// Function: FUN_1404cf800
// Addr: 1404cf800
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cf800(byte *param_1,undefined8 param_2,byte param_3)

{
  byte bVar1;
  char cVar2;
  undefined3 uVar3;
  byte bVar4;
  uint uVar5;
  char cVar8;
  byte *in_RAX;
  char cVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  byte bVar12;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  int *unaff_RSI;
  byte *pbVar13;
  char unaff_R12B;
  int *piVar6;
  char *pcVar7;
  
  uVar11 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar10 = (undefined2)((ulonglong)param_2 >> 0x10);
  cVar9 = (char)((ulonglong)param_2 >> 8);
  cRam00000001444d44fd = cRam00000001444d44fd + cVar9;
  bVar1 = *in_RAX;
  *in_RAX = *in_RAX + (byte)in_RAX;
  *unaff_RSI = (*unaff_RSI - unaff_EBX) - (uint)CARRY1(bVar1,(byte)in_RAX);
  uVar5 = (int)in_RAX + 0x1e011000;
  piVar6 = (int *)(ulonglong)uVar5;
  pcVar7 = (char *)((longlong)piVar6 + (longlong)unaff_RSI * 2);
  *pcVar7 = *pcVar7 + (char)uVar5;
  pbVar13 = (byte *)(ulonglong)(uint)((int)unaff_RSI + *piVar6);
  cVar2 = (char)*piVar6;
  cVar8 = (char)(uVar5 >> 8);
  *(char *)piVar6 = (char)*piVar6 + cVar8;
  *pbVar13 = *pbVar13 >> 1;
  uVar3 = (undefined3)(uVar5 >> 8);
  bVar4 = (char)uVar5 + cVar2;
  pcVar7 = (char *)(ulonglong)CONCAT31(uVar3,bVar4);
  *pcVar7 = *pcVar7 + bVar4;
  *param_1 = *param_1 + cVar8;
  *(byte *)CONCAT44(uVar11,CONCAT22(uVar10,CONCAT11(cVar9,cVar2))) =
       *(byte *)CONCAT44(uVar11,CONCAT22(uVar10,CONCAT11(cVar9,cVar2))) | bVar4;
  *pcVar7 = *pcVar7 + (char)param_1;
  out(*(undefined4 *)pbVar13,CONCAT11(cVar9,cVar2));
  *param_1 = *param_1 + unaff_R12B;
  *pcVar7 = *pcVar7 + bVar4;
  pcVar7[0x5e] = pcVar7[0x5e] + cVar2;
  out(*(undefined4 *)(pbVar13 + 4),CONCAT11(cVar9,cVar2));
  bVar1 = *param_1;
  *param_1 = *param_1 + param_3;
  *(uint *)CONCAT44(unaff_0000001c,unaff_EBX) =
       (*(int *)CONCAT44(unaff_0000001c,unaff_EBX) - (int)param_1) - (uint)CARRY1(bVar1,param_3);
  bVar1 = *param_1;
  bVar12 = (byte)unaff_EBX;
  *param_1 = *param_1 + bVar12;
  piVar6 = (int *)(CONCAT44(unaff_0000001c,unaff_EBX) + CONCAT44(unaff_0000001c,unaff_EBX));
  *piVar6 = (*piVar6 - ((int)(pbVar13 + 4) + 4)) - (uint)(bVar4 < CARRY1(bVar1,bVar12));
  *param_1 = *param_1 + bVar12;
  piVar6 = (int *)((ulonglong)CONCAT31(uVar3,bVar4 - CARRY1(bVar1,bVar12)) * 2);
  *piVar6 = *piVar6 + CONCAT22(uVar10,CONCAT11(cVar9,cVar2));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

