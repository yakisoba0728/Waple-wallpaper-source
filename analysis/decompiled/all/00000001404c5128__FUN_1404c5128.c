// Function: FUN_1404c5128
// Addr: 1404c5128
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c5156) overlaps instruction at (ram,0x0001404c5152)
    */
/* WARNING: Removing unreachable block (ram,0x0001404c5156) */

void FUN_1404c5128(byte *param_1,undefined8 param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  char *pcVar4;
  byte bVar5;
  byte bVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  char unaff_BL;
  undefined7 unaff_00000019;
  char unaff_SIL;
  undefined7 unaff_00000031;
  byte *unaff_RDI;
  
  uVar8 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar7 = (undefined2)((ulonglong)param_2 >> 0x10);
  bVar6 = (byte)((ulonglong)param_2 >> 8);
  bVar5 = (byte)param_2;
  *unaff_RDI = *unaff_RDI & bVar6;
  lVar3 = func_0x00014a4d515f();
  bVar6 = bVar6 | *(byte *)(CONCAT71(unaff_00000031,unaff_SIL + unaff_BL) + lVar3);
  *(char *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(bVar6,bVar5))) =
       *(char *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(bVar6,bVar5))) + (char)param_1;
  uVar2 = (int)CONCAT71((int7)((ulonglong)lVar3 >> 8),
                        (byte)lVar3 ^ *(byte *)CONCAT71(unaff_00000031,unaff_SIL + unaff_BL)) -
          *(int *)unaff_RDI;
  *(char *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(bVar6,bVar5))) =
       *(char *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(bVar6,bVar5))) + unaff_BL;
  if (*(char *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(bVar6,bVar5))) == '\0') {
    *param_1 = *param_1 + bVar5;
    *(char *)CONCAT71(unaff_00000019,unaff_BL) =
         *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL;
    *(char *)CONCAT71(unaff_00000019,unaff_BL) =
         *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(bVar6,bVar5))) =
       *(char *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(bVar6,bVar5))) + unaff_BL;
  pcVar4 = (char *)((ulonglong)uVar2 ^ 0x57);
  *(char *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(bVar6,bVar5))) =
       *(char *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(bVar6,bVar5))) + unaff_BL;
  piVar1 = (int *)((longlong)pcVar4 * 2 + 0xb);
  *piVar1 = *piVar1 + CONCAT22(uVar7,CONCAT11(bVar6,bVar5));
  *pcVar4 = *pcVar4 + (byte)pcVar4;
  bVar6 = (byte)pcVar4 & bVar5;
  pcVar4 = (char *)(ulonglong)CONCAT31((int3)(uVar2 >> 8),bVar6);
  pcVar4[0x1000002] = pcVar4[0x1000002] + bVar5;
  *param_1 = *param_1 | bVar6;
  *pcVar4 = *pcVar4 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

