// Function: FUN_1404bd088
// Addr: 1404bd088
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd088(char *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *in_RAX;
  uint *puVar6;
  char cVar8;
  char cVar9;
  undefined6 uVar10;
  uint *unaff_RBX;
  uint unaff_EBP;
  char *pcVar7;
  
  uVar10 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar8 = (char)param_2;
  cVar9 = (char)((ulonglong)param_2 >> 8) + *in_RAX;
  *in_RAX = *in_RAX + (byte)in_RAX;
  *unaff_RBX = *unaff_RBX & unaff_EBP;
  puVar6 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX | *in_RAX);
  uVar5 = *puVar6;
  uVar4 = (uint)puVar6;
  uVar2 = *puVar6;
  *puVar6 = uVar2 + uVar4 + (uint)(unaff_EBP < puVar6[-0x19f77ffc]);
  puVar1 = (uint *)((longlong)puVar6 + 0x78100012);
  uVar2 = (uint)(CARRY4(uVar5,uVar4) ||
                CARRY4(uVar2 + uVar4,(uint)(unaff_EBP < puVar6[-0x19f77ffc])));
  uVar5 = *puVar1;
  uVar3 = *puVar1 - (uint)param_1;
  *puVar1 = uVar3 - uVar2;
  uVar5 = uVar4 + *puVar6 + (uint)(uVar5 < (uint)param_1 || uVar3 < uVar2);
  pcVar7 = (char *)(ulonglong)uVar5;
  pcVar7[0x14] = pcVar7[0x14] | (byte)((ulonglong)param_1 >> 8);
  *pcVar7 = *pcVar7 + cVar8;
  uVar5 = uVar5 + 0x6670025 & 0x4bcf9400;
  pcVar7 = (char *)(ulonglong)uVar5;
  *param_1 = *param_1 + (char)(uVar5 >> 8);
  *pcVar7 = *pcVar7;
  *pcVar7 = *pcVar7 + cVar8;
  *param_1 = *param_1;
  iRam00000001784ce1c7 = iRam00000001784ce1c7 + (uVar5 + 0x6670025 & 0x4bcf9400);
  *(char *)CONCAT62(uVar10,CONCAT11(cVar9,cVar8)) =
       *(char *)CONCAT62(uVar10,CONCAT11(cVar9,cVar8)) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

