// Function: FUN_1404b4b28
// Addr: 1404b4b28
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4b28(undefined1 *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  byte bVar7;
  undefined8 in_RAX;
  uint *puVar5;
  byte *pbVar6;
  byte bVar8;
  byte bVar9;
  int unaff_EBX;
  ulonglong uVar10;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  byte *unaff_RDI;
  
  bVar8 = (byte)param_2;
  bVar7 = (byte)((ulonglong)in_RAX >> 8);
  bVar9 = (byte)unaff_EBX;
  *(byte *)param_2 = (char)*param_2 + bVar9 + CARRY1((byte)in_RAX,bVar7);
  bVar1 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + bVar8;
  *param_2 = *param_2 + unaff_EBX + (uint)CARRY1(bVar1,bVar8);
  puVar5 = (uint *)((ulonglong)&stack0x00000000 & 0xffffffff);
  uVar10 = CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX + bVar7 + bVar9) & 0xffffffff;
  *param_1 = *param_1;
  *unaff_RSI = *unaff_RSI;
  uVar4 = *puVar5;
  *(byte *)puVar5 = (byte)*puVar5 + bVar9;
  *(ulonglong *)(uVar10 - 8) = uVar10;
  uVar4 = (uint)CARRY1((byte)uVar4,bVar9);
  uVar2 = (uint)&stack0x00000000 + *puVar5;
  pbVar6 = (byte *)(ulonglong)(uVar2 + uVar4);
  *(char *)((longlong)param_2 * 2) =
       (*(char *)((longlong)param_2 * 2) - (char)((ulonglong)param_2 >> 8)) -
       (CARRY4((uint)&stack0x00000000,*puVar5) || CARRY4(uVar2,uVar4));
  bVar1 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar9;
  bVar3 = ((byte)param_1 & 0x1f) % 9;
  bVar7 = pbVar6[(longlong)unaff_RSI * 2];
  pbVar6[(longlong)unaff_RSI * 2] =
       bVar7 << bVar3 | (byte)(CONCAT11(CARRY1(bVar1,bVar9),bVar7) >> 9 - bVar3);
  *(uint *)(pbVar6 + (uVar10 - 8)) = *(uint *)(pbVar6 + (uVar10 - 8)) & (uint)param_2;
  pbVar6[unaff_RBP * 2] = pbVar6[unaff_RBP * 2] + bVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

