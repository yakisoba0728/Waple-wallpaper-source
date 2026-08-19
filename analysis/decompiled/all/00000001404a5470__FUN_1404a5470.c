// Function: FUN_1404a5470
// Addr: 1404a5470
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a547f) overlaps instruction at (ram,0x0001404a547e)
    */

void FUN_1404a5470(byte *param_1,byte *param_2)

{
  char *pcVar1;
  int *piVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  undefined2 uVar8;
  undefined4 in_register_00000004;
  char cVar9;
  byte bVar10;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  int unaff_ESP;
  undefined4 unaff_00000024;
  uint *unaff_RSI;
  bool in_ZF;
  
  cVar9 = (char)param_1;
  uVar5 = *unaff_RSI;
  bVar6 = (byte)uVar5;
  cVar7 = (char)(uVar5 >> 8);
  uVar8 = (undefined2)(uVar5 >> 0x10);
  bVar10 = (byte)unaff_EBX;
  if (in_ZF) {
    uVar4 = *(uint *)CONCAT44(in_register_00000004,uVar5);
    *(uint *)CONCAT44(in_register_00000004,uVar5) =
         *(int *)CONCAT44(in_register_00000004,uVar5) + uVar5;
    *(char *)CONCAT44(in_register_00000004,uVar5) =
         (*(char *)CONCAT44(in_register_00000004,uVar5) - cVar9) - CARRY4(uVar4,uVar5);
    bVar3 = *param_1;
    *param_1 = *param_1 + bVar10;
    *(char *)CONCAT44(in_register_00000004,uVar5) =
         (*(char *)CONCAT44(in_register_00000004,uVar5) - cVar9) - CARRY1(bVar3,bVar10);
    pcVar1 = (char *)(CONCAT44(in_register_00000004,uVar5) + 0x21004a53);
    *pcVar1 = *pcVar1 + cVar9;
  }
  else {
    *(int *)(param_2 + 0xa010b64) = *(int *)(param_2 + 0xa010b64) + unaff_ESP;
    bVar6 = in(5);
    piVar2 = (int *)(CONCAT44(unaff_00000024,unaff_ESP) + (longlong)param_2 * 2);
    *piVar2 = *piVar2 + CONCAT22(uVar8,CONCAT11(cVar7,bVar6));
    bVar6 = bVar6 | *param_1;
    *(byte *)CONCAT44(in_register_00000004,CONCAT22(uVar8,CONCAT11(cVar7,bVar6))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(uVar8,CONCAT11(cVar7,bVar6))) + bVar10;
    *(byte *)CONCAT44(in_register_00000004,CONCAT22(uVar8,CONCAT11(cVar7,bVar6))) =
         *(byte *)CONCAT44(in_register_00000004,CONCAT22(uVar8,CONCAT11(cVar7,bVar6))) | bVar6;
    *(int *)CONCAT44(in_register_00000004,CONCAT22(uVar8,CONCAT11(cVar7,bVar6))) =
         *(int *)CONCAT44(in_register_00000004,CONCAT22(uVar8,CONCAT11(cVar7,bVar6))) - unaff_EBX;
    *(byte *)CONCAT44(in_register_00000004,CONCAT22(uVar8,CONCAT11(cVar7,bVar6))) =
         *(byte *)CONCAT44(in_register_00000004,CONCAT22(uVar8,CONCAT11(cVar7,bVar6))) | bVar6;
    *(char *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x4a) = (char)param_2;
    *param_1 = *param_1 + cVar7;
  }
  *param_2 = *param_2 | bVar6;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(uVar8,CONCAT11(cVar7,bVar6))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(uVar8,CONCAT11(cVar7,bVar6))) + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

