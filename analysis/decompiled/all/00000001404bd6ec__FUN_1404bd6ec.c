// Function: FUN_1404bd6ec
// Addr: 1404bd6ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd6ec(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  uint in_EAX;
  uint uVar5;
  undefined1 *puVar6;
  char *pcVar7;
  uint *puVar8;
  char cVar9;
  char cVar10;
  undefined2 uVar11;
  undefined4 uVar12;
  longlong unaff_RDI;
  char *apcStackX_8 [4];
  
  pcVar4 = apcStackX_8[0];
  uVar12 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar11 = (undefined2)((ulonglong)param_2 >> 0x10);
  cVar10 = (char)((ulonglong)param_2 >> 8);
  cVar9 = (char)param_2;
  pcVar7 = (char *)(ulonglong)(in_EAX ^ 0xd5d80025);
  *param_4 = *param_4 + (char)apcStackX_8;
  *pcVar7 = *pcVar7 + (char)(in_EAX ^ 0xd5d80025);
  *pcVar7 = *pcVar7 + cVar10;
  puVar6 = (undefined1 *)(ulonglong)((in_EAX ^ 0xe0450000) & 0x4bd5d800);
  *param_1 = *param_1;
  TaskRegister(*(undefined2 *)(apcStackX_8[0] + -8));
  *puVar6 = *puVar6;
  apcStackX_8[0] = param_1;
  pcVar7 = (char *)func_0x00011892d713();
  puVar8 = (uint *)CONCAT71((int7)((ulonglong)pcVar7 >> 8),(char)pcVar7 + *pcVar7);
  uVar1 = *puVar8;
  uVar5 = (uint)puVar8 + *puVar8;
  iVar2 = *(int *)(unaff_RDI + CONCAT44(uVar12,CONCAT22(uVar11,CONCAT11(cVar10,cVar9))));
  *pcVar4 = *pcVar4 + cVar9;
  piVar3 = (int *)((ulonglong)uVar5 * 2);
  *piVar3 = *piVar3 + CONCAT22(uVar11,CONCAT11(cVar10,cVar9));
  pcVar7 = (char *)((ulonglong)uVar5 | 0x70);
  *pcVar7 = *pcVar7 + (char)pcVar7;
  *(uint *)(param_1 + ((int)apcStackX_8 + iVar2 + (uint)CARRY4((uint)puVar8,uVar1))) =
       *(uint *)(param_1 + ((int)apcStackX_8 + iVar2 + (uint)CARRY4((uint)puVar8,uVar1))) &
       (uint)pcVar4;
  pcVar7[unaff_RDI * 4] = pcVar7[unaff_RDI * 4] + (char)pcVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

