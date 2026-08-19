// Function: FUN_1404b9660
// Addr: 1404b9660
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b9660(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  char cVar5;
  char *in_RAX;
  undefined6 uVar6;
  uint *puVar3;
  int *piVar4;
  char cVar7;
  char cVar8;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  cVar8 = (char)((ulonglong)param_2 >> 8);
  cVar7 = (char)param_2;
  cVar5 = (char)((ulonglong)in_RAX >> 8);
  *(char *)(param_1 + param_2) = *(char *)(param_1 + param_2) + cVar5;
  in_RAX[param_2] = in_RAX[param_2] + cVar7;
  *(char *)(unaff_RDI + param_1) = *(char *)(unaff_RDI + param_1) + cVar8;
  *in_RAX = *in_RAX + cVar5;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + cVar8;
  uVar6 = (undefined6)((ulonglong)in_RAX >> 0x10);
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) =
       *(byte *)CONCAT71(unaff_00000019,unaff_BL) | (byte)param_1;
  *(uint *)(param_2 + param_1) = *(uint *)(param_2 + param_1) & (uint)param_2;
  (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + cVar7;
  puVar3 = (uint *)CONCAT62(uVar6,CONCAT11((cVar5 + cVar7) * '\x02',
                                           (byte)in_RAX |
                                           *(byte *)CONCAT62(uVar6,CONCAT11(cVar5 + cVar7,
                                                                            (byte)in_RAX))));
  piVar4 = (int *)((ulonglong)((uint)puVar3 | *puVar3) | 0x74);
  iVar1 = (int)piVar4 + *piVar4;
  *(byte *)(param_2 * 2) = *(byte *)(param_2 * 2) | (byte)((uint)iVar1 >> 8);
  uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),(byte)iVar1 + 0x54);
  *(int *)(ulonglong)uVar2 = *(int *)(ulonglong)uVar2 + uVar2 + (uint)(0xab < (byte)iVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

