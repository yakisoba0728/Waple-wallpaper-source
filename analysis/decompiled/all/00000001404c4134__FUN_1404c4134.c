// Function: FUN_1404c4134
// Addr: 1404c4134
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c4134(char *param_1,undefined8 param_2)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte in_AL;
  byte bVar6;
  undefined7 in_register_00000001;
  byte bVar7;
  byte bVar8;
  undefined4 uVar10;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  int unaff_ESI;
  undefined4 unaff_00000034;
  byte *unaff_RDI;
  byte in_CF;
  undefined4 uVar9;
  
  uVar10 = (undefined4)((ulonglong)param_2 >> 0x20);
  puVar2 = (uint *)(unaff_RDI + CONCAT71(in_register_00000001,in_AL));
  uVar4 = *puVar2;
  uVar5 = *puVar2 - (uint)param_2;
  *puVar2 = uVar5 - in_CF;
  piVar1 = (int *)(CONCAT44(unaff_00000034,unaff_ESI) + CONCAT71(in_register_00000001,in_AL));
  *piVar1 = (*piVar1 - unaff_ESI) - (uint)(uVar4 < (uint)param_2 || uVar5 < in_CF);
  *param_1 = *param_1 + (char)unaff_EBX;
  bVar8 = (byte)param_2 ^ bRam00000001465e4323;
  uVar9 = CONCAT31((int3)((ulonglong)param_2 >> 8),bVar8);
  *(byte *)CONCAT44(uVar10,uVar9) = *(char *)CONCAT44(uVar10,uVar9) + bVar8;
  if (*(char *)CONCAT44(uVar10,uVar9) != '\0') {
    *(byte *)CONCAT44(uVar10,uVar9) = *(char *)CONCAT44(uVar10,uVar9) + bVar8;
    bVar3 = *(byte *)CONCAT44(uVar10,uVar9);
    *(byte *)CONCAT44(uVar10,uVar9) = *(char *)CONCAT44(uVar10,uVar9) + bVar8;
    *(uint *)unaff_RDI = (*(int *)unaff_RDI - unaff_EBX) - (uint)CARRY1(bVar3,bVar8);
    *(byte *)(CONCAT71(in_register_00000001,in_AL) ^ 0xe) =
         *(byte *)(CONCAT71(in_register_00000001,in_AL) ^ 0xe) | in_AL ^ 0xe;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  TaskRegister(*(undefined2 *)CONCAT44(unaff_0000001c,unaff_EBX));
  bVar6 = in_AL ^ 0xe;
  bVar8 = *unaff_RDI;
  bVar7 = (byte)param_1;
  bVar3 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + bVar7;
  if ((CARRY1(bVar8,bVar7)) || (param_1 = param_1 + -1, param_1 != (char *)0x0 && *unaff_RDI != 0))
  {
    *(byte *)(CONCAT71(in_register_00000001,in_AL) ^ 0xe) =
         *(char *)(CONCAT71(in_register_00000001,in_AL) ^ 0xe) + bVar6;
  }
  else {
    if (!SCARRY1(bVar3,bVar7)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(byte *)(CONCAT71(in_register_00000001,in_AL) ^ 0xe) =
         *(char *)(CONCAT71(in_register_00000001,in_AL) ^ 0xe) + bVar6;
  }
  *(byte *)(CONCAT71(in_register_00000001,in_AL) ^ 0xe) =
       *(char *)(CONCAT71(in_register_00000001,in_AL) ^ 0xe) + bVar6;
  cRam000000013f4c6e0a = cRam000000013f4c6e0a + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

