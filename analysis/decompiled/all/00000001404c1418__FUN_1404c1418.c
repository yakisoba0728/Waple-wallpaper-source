// Function: FUN_1404c1418
// Addr: 1404c1418
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c1418(undefined8 param_1,char *param_2)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  longlong in_RAX;
  byte bVar6;
  undefined7 uVar7;
  char cVar8;
  undefined6 uVar9;
  int unaff_ESI;
  undefined4 unaff_00000034;
  byte in_CF;
  byte *pbVar5;
  
  uVar9 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar8 = (char)param_2;
  *(uint *)(&stack0x00000000 + in_RAX) =
       *(int *)(&stack0x00000000 + in_RAX) + unaff_ESI + (uint)in_CF;
  uVar4 = (int)in_RAX + 0x634;
  pbVar5 = (byte *)(ulonglong)uVar4;
  *(char *)CONCAT44(unaff_00000034,unaff_ESI) = *(char *)CONCAT44(unaff_00000034,unaff_ESI) + cVar8;
  bVar3 = (byte)uVar4;
  pbVar5[0x210049e1] = pbVar5[0x210049e1] + bVar3;
  *pbVar5 = *pbVar5 + bVar3;
  *pbVar5 = *pbVar5 + bVar3;
  *(char *)CONCAT44(unaff_00000034,unaff_ESI) = *(char *)CONCAT44(unaff_00000034,unaff_ESI) + cVar8;
  pbVar1 = pbVar5 + 0x110049e1;
  bVar6 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar3;
  uVar7 = (undefined7)((ulonglong)param_1 >> 8);
  bVar6 = (char)param_1 + *pbVar5 + CARRY1(bVar6,bVar3);
  *param_2 = *param_2 + cVar8;
  cVar2 = (char)((ulonglong)param_2 >> 8) +
          *(char *)((ulonglong)CONCAT31((int3)(uVar4 >> 8),bVar3 | *pbVar5) + CONCAT71(uVar7,bVar6))
  ;
  *(char *)CONCAT62(uVar9,CONCAT11(cVar2,cVar8)) =
       *(char *)CONCAT62(uVar9,CONCAT11(cVar2,cVar8)) + cVar8;
  bVar6 = bVar6 ^ *(byte *)CONCAT44(unaff_00000034,unaff_ESI);
  if (CONCAT71(uVar7,bVar6) == 1 || bVar6 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

