// Function: FUN_1404bb174
// Addr: 1404bb174
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bb1bf) overlaps instruction at (ram,0x0001404bb1be)
    */

void FUN_1404bb174(char *param_1,longlong param_2)

{
  undefined2 uVar1;
  char cVar2;
  uint uVar3;
  longlong in_RAX;
  longlong lVar4;
  int *piVar5;
  uint *puVar6;
  byte bVar8;
  char unaff_BH;
  uint unaff_ESP;
  undefined4 unaff_00000024;
  uint *unaff_RSI;
  longlong unaff_RDI;
  byte in_CF;
  byte bVar7;
  
  bVar7 = (byte)((ulonglong)in_RAX >> 8);
  bVar8 = bVar7 - param_1[in_RAX];
  lVar4 = CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar8 - in_CF,(char)in_RAX));
  piVar5 = (int *)(unaff_RDI + lVar4);
  *piVar5 = *piVar5 + (int)param_2 + (uint)(bVar7 < (byte)param_1[in_RAX] || bVar8 < in_CF);
  uVar3 = (int)lVar4 + 0x10000634;
  puVar6 = (uint *)(ulonglong)uVar3;
  *puVar6 = *puVar6 & uVar3;
  *unaff_RSI = *unaff_RSI & unaff_ESP;
  *puVar6 = *puVar6 & uVar3;
  uVar1 = (undefined2)(uVar3 >> 0x10);
  cVar2 = (char)uVar3;
  uVar3 = CONCAT22(uVar1,CONCAT11(10,cVar2));
  puVar6 = (uint *)(ulonglong)uVar3;
  *param_1 = *param_1 + (char)unaff_ESP;
  *(char *)puVar6 = (char)*puVar6 + cVar2;
  bVar8 = (byte)param_2;
  *(byte *)puVar6 = (char)*puVar6 + bVar8;
  *puVar6 = *puVar6 & uVar3;
  *unaff_RSI = *unaff_RSI & unaff_ESP;
  *puVar6 = *puVar6 & uVar3;
  uVar3 = CONCAT22(uVar1,CONCAT11(10,cVar2));
  piVar5 = (int *)(ulonglong)uVar3;
  *param_1 = *param_1 + (char)unaff_ESP;
  if ((POPCOUNT(*param_1) & 1U) != 0) {
    *(char *)(param_2 + -0x3c) = *(char *)(param_2 + -0x3c) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)piVar5 = (char)*piVar5 + bVar8;
  if ((char)*piVar5 == '\0') {
    *(char *)((longlong)piVar5 + -0x5cffdeda) = *(char *)((longlong)piVar5 + -0x5cffdeda) + bVar8;
  }
  bVar7 = *(byte *)CONCAT44(unaff_00000024,unaff_ESP);
  *(byte *)CONCAT44(unaff_00000024,unaff_ESP) =
       *(char *)CONCAT44(unaff_00000024,unaff_ESP) + (byte)param_1;
  *piVar5 = *piVar5 + uVar3 + (uint)CARRY1(bVar7,(byte)param_1);
  *(byte *)((longlong)piVar5 + param_2) = *(byte *)((longlong)piVar5 + param_2) | bVar8;
  uVar3 = CONCAT31((int3)(uVar3 >> 8),cVar2 + '4');
  puVar6 = (uint *)(ulonglong)uVar3;
  LocalDescriptorTableRegister(*(undefined2 *)((longlong)puVar6 + -0x5cffdeda));
  *puVar6 = *puVar6 & uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

