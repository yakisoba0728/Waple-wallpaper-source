// Function: FUN_1404ca6e0
// Addr: 1404ca6e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca6e0(char *param_1,char *param_2,char param_3)

{
  char *pcVar1;
  undefined3 uVar2;
  byte bVar3;
  uint uVar4;
  byte bVar7;
  undefined8 in_RAX;
  ulonglong uVar6;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  char unaff_R12B;
  byte *pbVar5;
  
  bVar7 = (byte)((ulonglong)in_RAX >> 8);
  uVar4 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar7 * '\x02',(char)in_RAX)) +
          0x1dc40000 + (uint)CARRY1(bVar7,bVar7);
  pbVar5 = (byte *)(ulonglong)uVar4;
  bVar7 = *pbVar5;
  bVar3 = (byte)uVar4;
  *pbVar5 = *pbVar5 + bVar3;
  uVar2 = (undefined3)(uVar4 >> 8);
  bVar3 = bVar3 - CARRY1(bVar7,bVar3);
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + CONCAT71(unaff_00000019,unaff_BL));
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  pbVar5 = (byte *)(ulonglong)CONCAT31(uVar2,bVar3) + -0xd;
  *pbVar5 = *pbVar5 + bVar3;
  bVar3 = bVar3 ^ *(byte *)(ulonglong)CONCAT31(uVar2,bVar3);
  bVar3 = bVar3 ^ *(byte *)(ulonglong)CONCAT31(uVar2,bVar3);
  *unaff_RDI = *unaff_RSI;
  *param_1 = *param_1 + unaff_R12B;
  *param_2 = *param_2 + bVar3;
  *(char *)(ulonglong)CONCAT31(uVar2,bVar3) = *(char *)(ulonglong)CONCAT31(uVar2,bVar3) + bVar3;
  uVar6 = (ulonglong)CONCAT31(uVar2,bVar3) ^ 0x1b;
  pcVar1 = (char *)(uVar6 - 0xd);
  *pcVar1 = *pcVar1 + (char)uVar6;
  unaff_RDI[1] = unaff_RSI[1];
  *param_1 = *param_1 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

