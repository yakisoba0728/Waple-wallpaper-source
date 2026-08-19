// Function: FUN_1404af034
// Addr: 1404af034
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af034(char *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  byte bVar8;
  char cVar10;
  undefined8 in_RAX;
  undefined6 uVar11;
  byte *pbVar6;
  byte bVar12;
  byte bVar13;
  undefined4 *unaff_RBX;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  int *piVar7;
  byte bVar9;
  
  bVar12 = (byte)param_1;
  *(uint *)(param_1 + 2 + (longlong)unaff_RBX) =
       *(uint *)(param_1 + 2 + (longlong)unaff_RBX) ^ (uint)&stack0x00000000;
  bVar1 = *param_2;
  bVar3 = (byte)in_RAX;
  *param_2 = *param_2 + bVar3;
  bVar9 = (byte)((ulonglong)in_RAX >> 8);
  bVar13 = (byte)param_2;
  bVar2 = bVar9 + bVar13;
  uVar11 = (undefined6)((ulonglong)in_RAX >> 0x10);
  bVar8 = bVar2 + CARRY1(bVar1,bVar3);
  *(uint *)param_2 =
       *(int *)param_2 + (int)CONCAT62(uVar11,CONCAT11(bVar8,bVar3)) +
       (uint)(CARRY1(bVar9,bVar13) || CARRY1(bVar2,CARRY1(bVar1,bVar3)));
  bVar1 = *param_2;
  pbVar6 = (byte *)CONCAT71((int7)(CONCAT62(uVar11,CONCAT11(bVar8 | bVar3,bVar3)) >> 8),
                            bVar3 + bVar1);
  *(byte *)((longlong)unaff_RBX + -0x745affed) = *(byte *)((longlong)unaff_RBX + -0x745affed) | 0x13
  ;
  pbVar6[-0x11] = pbVar6[-0x11] + bVar13;
  *param_1 = *param_1;
  *param_2 = *param_2 | bVar3 + bVar1;
  bVar1 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar12;
  uRamfffffffffffffff8 = 0xffffffff8ba50107;
  uVar5 = (int)pbVar6 + *(int *)pbVar6 + (uint)CARRY1(bVar1,bVar12);
  piVar7 = (int *)(ulonglong)uVar5;
  out(*unaff_RSI,(short)param_2);
  cVar10 = (char)(uVar5 >> 8);
  *(char *)((longlong)piVar7 + -0x11) = *(char *)((longlong)piVar7 + -0x11) + cVar10;
  *param_1 = *param_1 + -8;
  cVar4 = (char)uVar5;
  *(char *)piVar7 = (char)*piVar7 + cVar4;
  *(char *)(unaff_RBP + 0x6e00138b) = *(char *)(unaff_RBP + 0x6e00138b) + cVar10;
  *(char *)((longlong)piVar7 + -0x11) = *(char *)((longlong)piVar7 + -0x11) + cVar10;
  *param_1 = *param_1 + -8;
  *(char *)piVar7 = (char)*piVar7 + cVar4;
  *(char *)((longlong)piVar7 + -0x5affec75) = *(char *)((longlong)piVar7 + -0x5affec75) + cVar4;
  *(char *)((longlong)piVar7 + -0x11) = *(char *)((longlong)piVar7 + -0x11) + (char)*unaff_RBX;
  *param_1 = *param_1 + -8;
  *(char *)((longlong)piVar7 * 2) = *(char *)((longlong)piVar7 * 2) + bVar12;
  *(char *)((longlong)piVar7 + 7) =
       *(char *)((longlong)piVar7 + 7) + (char)((ulonglong)param_1 >> 8);
  *piVar7 = *piVar7 + uVar5;
  in(0x10);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

