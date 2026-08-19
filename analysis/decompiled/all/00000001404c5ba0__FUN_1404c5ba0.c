// Function: FUN_1404c5ba0
// Addr: 1404c5ba0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5ba0(char *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 unaff_RDI;
  ulonglong uVar10;
  
  bVar7 = in(0x2e);
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
  uVar10 = uVar6 & 0xffffffff;
  pbVar1 = (byte *)(uVar10 + 0x210049e1);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar7;
  puVar5 = (uint *)(uVar10 * 2);
  uVar3 = *puVar5;
  uVar8 = (uint)uVar6;
  uVar4 = *puVar5 + uVar8;
  *puVar5 = uVar4 + CARRY1(bVar2,bVar7);
  *(uint *)(param_1 + uVar10) =
       *(int *)(param_1 + uVar10) + param_2 +
       (uint)(CARRY4(uVar3,uVar8) || CARRY4(uVar4,(uint)CARRY1(bVar2,bVar7)));
  uVar9 = in(0x2e);
  *param_1 = *param_1 + (char)param_2;
  out(0x2e,(char)uVar9);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

