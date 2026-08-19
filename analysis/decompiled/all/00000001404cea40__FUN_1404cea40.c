// Function: FUN_1404cea40
// Addr: 1404cea40
// Size: 1 bytes


void FUN_1404cea40(undefined8 param_1)

{
  uint *puVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  char cVar2;
  char cVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  char unaff_BL;
  uint unaff_EBP;
  char unaff_R12B;
  
  uVar5 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar4 = (undefined2)((ulonglong)param_1 >> 0x10);
  cVar3 = (char)((ulonglong)param_1 >> 8);
  cVar2 = (char)param_1 - cVar3;
  *(char *)CONCAT44(uVar5,CONCAT22(uVar4,CONCAT11(cVar3,cVar2))) =
       *(char *)CONCAT44(uVar5,CONCAT22(uVar4,CONCAT11(cVar3,cVar2))) + unaff_R12B;
  puVar1 = (uint *)(CONCAT71(in_register_00000001,in_AL) + CONCAT71(in_register_00000001,in_AL));
  *puVar1 = *puVar1 & CONCAT22(uVar4,CONCAT11(cVar3,cVar2));
  puVar1 = (uint *)(CONCAT71(in_register_00000001,in_AL) + 0x1a);
  *puVar1 = *puVar1 & unaff_EBP;
  *(char *)CONCAT44(uVar5,CONCAT22(uVar4,CONCAT11(cVar3,cVar2))) =
       *(char *)CONCAT44(uVar5,CONCAT22(uVar4,CONCAT11(cVar3,cVar2))) + unaff_BL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

