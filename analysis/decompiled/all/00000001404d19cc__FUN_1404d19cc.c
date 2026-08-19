// Function: FUN_1404d19cc
// Addr: 1404d19cc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d19cc(longlong param_1,longlong param_2)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  undefined1 in_AL;
  byte in_AH;
  char cVar4;
  undefined6 in_register_00000002;
  undefined1 uVar5;
  char cVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  char unaff_BL;
  undefined7 unaff_00000019;
  byte in_CF;
  
  uVar8 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar7 = (undefined2)((ulonglong)param_2 >> 0x10);
  uVar5 = (undefined1)param_2;
  pbVar2 = (byte *)(param_2 + CONCAT71(unaff_00000019,unaff_BL));
  bVar3 = in_AH - *pbVar2;
  cVar4 = bVar3 - in_CF;
  cVar6 = ((char)((ulonglong)param_2 >> 8) - *(char *)(param_1 + CONCAT71(unaff_00000019,unaff_BL)))
          - (in_AH < *pbVar2 || bVar3 < in_CF);
  *(char *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(cVar6,uVar5))) =
       *(char *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(cVar6,uVar5))) + unaff_BL;
  piVar1 = (int *)(CONCAT62(in_register_00000002,CONCAT11(cVar4,in_AL)) +
                  CONCAT62(in_register_00000002,CONCAT11(cVar4,in_AL)));
  *piVar1 = *piVar1 + CONCAT22(uVar7,CONCAT11(cVar6,uVar5));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

