// Function: FUN_1404caf3c
// Addr: 1404caf3c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404cafe1) */
/* WARNING: Removing unreachable block (ram,0x0001404caff5) */
/* WARNING: Removing unreachable block (ram,0x0001404cafb1) */

void FUN_1404caf3c(longlong param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  char *pcVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 in_RAX;
  byte bVar8;
  char cVar9;
  char cVar10;
  char unaff_BL;
  undefined7 unaff_00000019;
  char unaff_SPL;
  uint *puVar7;
  
  cVar10 = (char)((ulonglong)param_2 >> 8);
  cVar9 = (char)param_2;
  puVar7 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) + (char)in_RAX,(char)in_RAX));
  *puVar7 = *puVar7 | (uint)puVar7;
  param_2[param_1] = param_2[param_1] + cVar10;
  pcVar2 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + param_1);
  *pcVar2 = *pcVar2 + cVar9;
  *(char *)((longlong)puVar7 + (longlong)param_2) =
       *(char *)((longlong)puVar7 + (longlong)param_2) + cVar10;
  *(char *)((longlong)puVar7 + 0x5f) = *(char *)((longlong)puVar7 + 0x5f) + cVar9;
  uVar4 = (uint)puVar7 ^ *puVar7;
  uVar4 = uVar4 ^ *(uint *)(ulonglong)uVar4;
  *(int *)CONCAT71(unaff_00000019,unaff_BL) =
       *(int *)CONCAT71(unaff_00000019,unaff_BL) - (int)param_1;
  uRam000000012451af60 = uRam000000012451af60 & uVar4;
  uVar4 = CONCAT31((int3)(uVar4 >> 8),(byte)uVar4 | *(byte *)(ulonglong)uVar4);
  pbVar1 = (byte *)(CONCAT71(unaff_00000019,unaff_BL) + 0x33);
  *pbVar1 = *pbVar1 ^ (byte)((ulonglong)param_1 >> 8);
  pcVar2 = (char *)((longlong)(ulonglong)uVar4 + 0x6b);
  *pcVar2 = *pcVar2 + cVar10;
  uVar4 = uVar4 ^ *(uint *)(ulonglong)uVar4;
  puVar7 = (uint *)(ulonglong)uVar4;
  *param_4 = *param_4 + unaff_SPL;
  *(char *)puVar7 = (char)*puVar7 + (char)uVar4;
  *(char *)puVar7 = (char)*puVar7 + cVar10;
  uVar5 = uVar4 ^ *puVar7;
  *param_4 = *param_4 + unaff_SPL;
  *param_2 = *param_2 + (char)uVar5;
  *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + (char)uVar5;
  uVar3 = in(10);
  uVar6 = CONCAT31((int3)(uVar5 >> 8),uVar3);
  puVar7 = (uint *)(ulonglong)uVar6;
  *(char *)puVar7 = (char)*puVar7 + cVar10;
  uVar6 = uVar6 ^ *puVar7;
  bVar8 = (byte)param_1 | (byte)(uVar4 >> 8) | (byte)(uVar5 >> 8) | (byte)(uVar6 >> 8);
  *param_4 = *param_4 + unaff_BL;
  *(byte *)(ulonglong)uVar6 = *(byte *)(ulonglong)uVar6 & bVar8;
  *param_2 = *param_2 + cVar9;
  bVar8 = bVar8 & 7;
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) =
       *(byte *)CONCAT71(unaff_00000019,unaff_BL) >> bVar8 |
       *(char *)CONCAT71(unaff_00000019,unaff_BL) << 8 - bVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

