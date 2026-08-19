// Function: FUN_1404bd228
// Addr: 1404bd228
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd228(longlong param_1,longlong param_2,undefined8 param_3,undefined1 *param_4)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  char *in_RAX;
  undefined7 uVar5;
  uint *puVar4;
  char unaff_BL;
  undefined7 unaff_00000019;
  
  cVar2 = (char)in_RAX + *in_RAX;
  uVar5 = (undefined7)((ulonglong)in_RAX >> 8);
  puVar4 = (uint *)(CONCAT71(uVar5,cVar2) + 0x78180013);
  *puVar4 = *puVar4 & (uint)param_1;
  puVar4 = (uint *)CONCAT71(uVar5,cVar2);
  *(char *)((longlong)puVar4 + 0x15) =
       *(char *)((longlong)puVar4 + 0x15) + (char)((ulonglong)param_1 >> 8);
  *(char *)puVar4 = (char)*puVar4 + (char)param_1;
  uVar3 = (uint)puVar4;
  *puVar4 = *puVar4 ^ uVar3;
  *(char *)puVar4 = (char)*puVar4 + unaff_BL;
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) =
       *(uint *)CONCAT71(unaff_00000019,unaff_BL) >> 1 |
       (uint)((*(uint *)CONCAT71(unaff_00000019,unaff_BL) & 1) != 0) << 0x1f;
  *puVar4 = *puVar4 & uVar3;
  *(char *)puVar4 = (char)*puVar4 + cVar2;
  *(char *)puVar4 = (char)*puVar4 + unaff_BL;
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) =
       *(uint *)CONCAT71(unaff_00000019,unaff_BL) >> 1 |
       (uint)((*(uint *)CONCAT71(unaff_00000019,unaff_BL) & 1) != 0) << 0x1f;
  *puVar4 = *puVar4 & uVar3;
  *(char *)puVar4 = (char)*puVar4 + cVar2;
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) =
       *(byte *)CONCAT71(unaff_00000019,unaff_BL) & (byte)param_2;
  pcVar1 = (char *)(param_1 + param_2 * 8);
  *pcVar1 = *pcVar1 + (char)param_1;
  *param_4 = *param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

