// Function: FUN_1404c3e70
// Addr: 1404c3e70
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c3e70(byte *param_1,uint param_2)

{
  char *pcVar1;
  uint uVar2;
  byte bVar3;
  undefined3 uVar4;
  uint *puVar5;
  byte bVar6;
  uint uVar7;
  longlong in_RAX;
  byte unaff_BL;
  undefined7 unaff_00000019;
  int unaff_ESI;
  char *unaff_RDI;
  byte in_CF;
  
  puVar5 = (uint *)((longlong)param_1 * 2);
  uVar7 = *puVar5;
  uVar2 = *puVar5;
  *puVar5 = (uVar2 - param_2) - (uint)in_CF;
  *(uint *)(param_1 + in_RAX) =
       (*(int *)(param_1 + in_RAX) - unaff_ESI) -
       (uint)(uVar7 < param_2 || uVar2 - param_2 < (uint)in_CF);
  bVar6 = *param_1;
  *param_1 = *param_1 + unaff_BL;
  uVar7 = (int)in_RAX + 0x81401e0 + (uint)CARRY1(bVar6,unaff_BL);
  uVar7 = uVar7 | *(uint *)(ulonglong)uVar7;
  bVar6 = (char)uVar7 + 0x54;
  uVar4 = (undefined3)(uVar7 >> 8);
  bVar6 = bVar6 | *(byte *)(ulonglong)CONCAT31(uVar4,bVar6);
  bVar3 = bVar6 + 0x34;
  uVar7 = CONCAT31(uVar4,bVar3);
  *(uint *)(ulonglong)uVar7 = *(uint *)(ulonglong)uVar7 | uVar7;
  pcVar1 = (char *)((ulonglong)CONCAT31(uVar4,bVar6 + 0x86) + 0x19);
  *pcVar1 = *pcVar1 + (char)(param_2 >> 8) + (0xad < bVar3);
  *unaff_RDI = *unaff_RDI + unaff_BL;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

