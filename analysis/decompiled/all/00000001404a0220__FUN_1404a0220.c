// Function: FUN_1404a0220
// Addr: 1404a0220
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0220(byte *param_1,uint *param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  uint in_EAX;
  uint uVar2;
  uint *puVar4;
  char unaff_BL;
  undefined7 unaff_00000019;
  uint unaff_ESI;
  int *piVar3;
  
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) = *(uint *)CONCAT71(unaff_00000019,unaff_BL) & in_EAX;
  param_1[-0xaaffffd] = param_1[-0xaaffffd] + unaff_BL;
  *param_4 = *param_4;
  uVar2 = in_EAX | 0xe40d0004 | *(uint *)(ulonglong)(in_EAX | 0xe40d0004);
  *(byte *)((ulonglong)uVar2 + (longlong)param_2) =
       *(byte *)((ulonglong)uVar2 + (longlong)param_2) | (byte)((ulonglong)param_2 >> 8);
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) = *(uint *)CONCAT71(unaff_00000019,unaff_BL) & uVar2;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)param_1;
  bVar1 = (byte)uVar2 & *(byte *)CONCAT71(unaff_00000019,unaff_BL);
  uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar1);
  piVar3 = (int *)(ulonglong)uVar2;
  *(char *)((longlong)piVar3 + 1) = *(char *)((longlong)piVar3 + 1) + bVar1;
  *param_1 = *param_1 - 8;
  *(byte *)piVar3 = (char)*piVar3 + bVar1;
  param_1[0x220b0003] = param_1[0x220b0003] + unaff_BL;
  uVar2 = uVar2 + *piVar3;
  puVar4 = (uint *)(ulonglong)uVar2;
  *param_2 = *param_2 + (int)param_1;
  *puVar4 = *puVar4 & uVar2;
  *(char *)puVar4 = (char)*puVar4 + (char)uVar2;
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) = *(uint *)CONCAT71(unaff_00000019,unaff_BL) & uVar2;
  param_1[-0xaaffffd] = param_1[-0xaaffffd] + unaff_BL;
  *param_4 = *param_4 + (char)uVar2;
  *(uint *)((longlong)puVar4 * 2) = *(uint *)((longlong)puVar4 * 2) | uVar2;
  *param_2 = *param_2 | unaff_ESI;
  uVar2 = uVar2 + 0x26003f0;
  *param_1 = *param_1 ^ (byte)(uVar2 >> 8);
  *(byte *)(ulonglong)uVar2 = *(byte *)(ulonglong)uVar2 | (byte)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

