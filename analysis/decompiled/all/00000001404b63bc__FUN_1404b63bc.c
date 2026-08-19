// Function: FUN_1404b63bc
// Addr: 1404b63bc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b63bc(longlong param_1,int *param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  byte bVar10;
  undefined8 in_RAX;
  uint *puVar8;
  char *pcVar9;
  char cVar11;
  longlong unaff_RBX;
  undefined1 *unaff_RDI;
  int *piVar7;
  
  cVar11 = (char)((ulonglong)param_2 >> 8);
  bVar5 = (byte)((ulonglong)param_1 >> 8);
  cVar4 = (byte)in_RAX + 0x34;
  piVar7 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar4);
  *(char *)piVar7 = (char)*piVar7 + cVar4 + (0xcb < (byte)in_RAX);
  *(byte *)(unaff_RBX * 2) = *(byte *)(unaff_RBX * 2) & bVar5;
  uVar2 = SUB82(param_2,0);
  uVar1 = in(uVar2);
  *unaff_RDI = uVar1;
  uVar6 = (int)piVar7 - *piVar7;
  puVar8 = (uint *)(ulonglong)uVar6;
  *puVar8 = *puVar8 & uVar6;
  *(char *)puVar8 = (char)*puVar8 + (char)uVar6;
  *(byte *)(unaff_RBX * 2) = *(byte *)(unaff_RBX * 2) & bVar5;
  uVar1 = in(uVar2);
  unaff_RDI[1] = uVar1;
  uVar6 = uVar6 - *puVar8;
  *(uint *)(ulonglong)uVar6 = *(uint *)(ulonglong)uVar6 & uVar6;
  uVar3 = (undefined2)(uVar6 >> 0x10);
  cVar4 = (char)(uVar6 >> 8) + cVar11;
  uVar6 = CONCAT22(uVar3,CONCAT11(cVar4 * '\x02',
                                  (byte)uVar6 |
                                  *(byte *)(ulonglong)CONCAT22(uVar3,CONCAT11(cVar4,(byte)uVar6))));
  uVar6 = uVar6 | *(uint *)(ulonglong)uVar6;
  bVar5 = (byte)uVar6;
  bVar10 = (char)(uVar6 >> 8) + (char)param_2;
  cVar4 = bVar10 + bVar5;
  uVar6 = CONCAT22((short)(uVar6 >> 0x10),CONCAT11(cVar4,bVar5));
  pcVar9 = (char *)(ulonglong)
                   CONCAT31((int3)(uVar6 >> 8),
                            bVar5 + *(char *)(ulonglong)uVar6 + CARRY1(bVar10,bVar5));
  *(char *)(param_1 + (longlong)param_2) = *(char *)(param_1 + (longlong)param_2) + cVar11;
  pcVar9[(longlong)param_2] = pcVar9[(longlong)param_2] + cVar11;
  *pcVar9 = *pcVar9 + cVar4;
  uVar1 = in(uVar2);
  unaff_RDI[2] = uVar1;
  uVar1 = in(uVar2);
  unaff_RDI[3] = uVar1;
  *param_2 = *param_2 + (int)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

